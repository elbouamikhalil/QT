#include "auditserveurmultiwidget.h"
#include "ui_auditserveurmultiwidget.h"

AuditServeurMultiWidget::AuditServeurMultiWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditServeurMultiWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer (this);
    socketEcouteServeur->setMaxPendingConnections(30);
    connect(socketEcouteServeur,&QTcpServer::newConnection,this,&AuditServeurMultiWidget::onQTcpServernewConnection);
    connect(socketEcouteServeur,&QTcpServer::acceptError,this,&AuditServeurMultiWidget::onQtcpServeracceptError);
}

AuditServeurMultiWidget::~AuditServeurMultiWidget()
{

    delete socketEcouteServeur;
    delete ui;
}

void AuditServeurMultiWidget::onQtcpServeracceptError(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError);
    ui->textEdit_Messages->append(socketEcouteServeur->errorString());
}

void AuditServeurMultiWidget::onQTcpServernewConnection()
{
    QTcpSocket *client;
    QProcess *process = new QProcess(this);
    client = socketEcouteServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&AuditServeurMultiWidget::onQTcpSocketReadyRead);
    connect(client,&QTcpSocket::connected,this,&AuditServeurMultiWidget::onQTcpSocketConnected);
    connect(client,&QTcpSocket::disconnected,this,&AuditServeurMultiWidget::onQTcpSocketDisconnected);
    connect(client,&QTcpSocket::errorOccurred,this,&AuditServeurMultiWidget::onQTcpSocketErrorOccurred);
    connect(client,&QTcpSocket::stateChanged,this,&AuditServeurMultiWidget::onQTcpSocketStateChanged);
    connect(client,&QTcpSocket::aboutToClose,this,&AuditServeurMultiWidget::onQTcpSocketAboutToClose);
    connect(client,&QTcpSocket::bytesWritten,this,&AuditServeurMultiWidget::onQTcpSocketBytesWritten);
    connect(client,&QTcpSocket::hostFound,this,&AuditServeurMultiWidget::onQTcpSocketHostFound);


    QHostAddress adresseClient = client->peerAddress();
    ui->textEdit_Messages->append(adresseClient.toString());
    listeSocketsDialogueClients.append(client);
    connect(process,&QProcess::readyReadStandardOutput,this,&AuditServeurMultiWidget::onQProcess_readyReadStandardOutput);
    listeProcess.append(process);

}

void AuditServeurMultiWidget::onQTcpSocketBytesWritten(quint64 bytes)
{
    ui->textEdit_Messages->append(QString::number(bytes)+"bytes written");
}

void AuditServeurMultiWidget::onQProcess_readyReadStandardOutput()
{
    QProcess *process =qobject_cast<QProcess*>(sender());
    int indexClient=listeProcess.indexOf(process);

    QTcpSocket *client = listeSocketsDialogueClients.at(indexClient);
    QString reponse = process->readAllStandardOutput();
    if (!reponse.isEmpty()){
        client->write(reponse.toLatin1());

    }
}

void AuditServeurMultiWidget::onQTcpSocketConnected()
{
    ui->textEdit_Messages->append("Client connecté");
}

void AuditServeurMultiWidget::onQTcpSocketDisconnected()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexClient = listeSocketsDialogueClients.indexOf(client);
    listeProcess.removeAt(indexClient);
    disconnect(client,nullptr,this,nullptr);
    listeSocketsDialogueClients.removeOne(client);
    client->deleteLater();
    ui->textEdit_Messages->append("Client déconnecté");
}

void AuditServeurMultiWidget::onQTcpSocketReadyRead()
{
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender());
    int indexClient = listeSocketsDialogueClients.indexOf(client);
    QProcess *p =listeProcess.at(indexClient);
    QChar commande;
    QString reponse;
    if(client->bytesAvailable()){
        QByteArray tampon = client->readAll();
        commande = tampon.at(0);
        QString message = "Client : "+client->peerAddress().toString()+":";
        message+= commande;
        ui->textEdit_Messages->append(message);
        QString reponse;
        switch(commande.toLatin1()){
        case 'u' : reponse=getenv("USER");
            client->write(reponse.toLatin1());
            break;
        case 'c' : reponse = QHostInfo::localHostName().toLatin1();
            client->write(reponse.toLatin1());
            break;
        case 'a': listeProcess.at(indexClient)->start("uname");
            break;
        case 'o': listeProcess.at(indexClient)->start("uname",QStringList("-p"));
            break;
        }
    }
}

void AuditServeurMultiWidget::onQTcpSocketErrorOccurred(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError); // le paramètre n'est pas utilisé dans cette méthode
    ui->textEdit_Messages->append(socketEcouteServeur->errorString());
}

void AuditServeurMultiWidget::onQTcpSocketHostFound()
{
    ui->textEdit_Messages->append("Host found");
}

void AuditServeurMultiWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    switch (socketState) {
    case QAbstractSocket::UnconnectedState:
        ui->textEdit_Messages->append("The socket is not connected.");
        break;
    case QAbstractSocket::HostLookupState:
        ui->textEdit_Messages->append("The socket is performing a host name lookup.");
        break;
    case QAbstractSocket::ConnectingState:
        ui->textEdit_Messages->append("The socket has started establishing a connection.");
        break;
    case QAbstractSocket::ConnectedState:
        ui->textEdit_Messages->append("A connection is established.");
        break;
    case QAbstractSocket::BoundState:
        ui->textEdit_Messages->append("The socket is bound to an address and port.");
        break;
    case QAbstractSocket::ClosingState:
        ui->textEdit_Messages->append("The socket is about to close (data may still be waiting to be written).");
        break;
    case QAbstractSocket::ListeningState:
        ui->textEdit_Messages->append("For internal use only.");
        break;
    }
}

void AuditServeurMultiWidget::onQTcpSocketAboutToClose()
{
    ui->textEdit_Messages->append("About to close");
}


void AuditServeurMultiWidget::on_pushButton_Lancement_clicked()
{
    if(!socketEcouteServeur->listen(QHostAddress::Any,ui->spinBox_Ports->value())){
        QString message ="Impossible de démarrer le serveur " + socketEcouteServeur->errorString();
        ui->textEdit_Messages->append(message);
    } else {
        QList<QHostAddress> listeAdresses = QNetworkInterface::allAddresses();
        QList<QHostAddress>::iterator it;
        for(it = listeAdresses.begin(); it != listeAdresses.end();it++){
            if(it->toIPv4Address())
                ui->textEdit_Messages->append("Adresse serveur : " + it->toString());
        }
        ui->textEdit_Messages->append("Numero du port : " + QString::number(socketEcouteServeur->serverPort()));
        ui->pushButton_Lancement->setEnabled(false);
        ui->spinBox_Ports->setEnabled(false);
    }
}
