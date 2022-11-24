#include "auditserveurmonowidget.h"
#include "ui_auditserveurmonowidget.h"

AuditServeurMonoWidget::AuditServeurMonoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditServeurMonoWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer (this);
    process = new QProcess(this);

    connect(socketEcouteServeur,&QTcpServer::newConnection,this,&AuditServeurMonoWidget::onQTcpServernewConnection);
    connect(socketEcouteServeur,&QTcpServer::acceptError,this,&AuditServeurMonoWidget::onQtcpServeracceptError);
}

AuditServeurMonoWidget::~AuditServeurMonoWidget()
{
    if(socketDialogueClient != nullptr){
        socketDialogueClient->close();
        delete socketDialogueClient;
    }
    delete socketEcouteServeur;
    delete ui;
}

void AuditServeurMonoWidget::onQtcpServeracceptError(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError);
    ui->textEdit_Messages->append(socketEcouteServeur->errorString());
}

void AuditServeurMonoWidget::onQTcpServernewConnection()
{
    ui->textEdit_Messages->append("nouvelle connexion");
    socketDialogueClient=socketEcouteServeur->nextPendingConnection();

    connect(socketDialogueClient,&QTcpSocket::connected,this,&AuditServeurMonoWidget::onQTcpSocketConnected);
    connect(socketDialogueClient,&QTcpSocket::disconnected,this,&AuditServeurMonoWidget::onQTcpSocketDisconnected);
    connect(socketDialogueClient,&QTcpSocket::readyRead,this,&AuditServeurMonoWidget::onQTcpSocketReadyRead);
    connect(socketDialogueClient,&QTcpSocket::errorOccurred,this,&AuditServeurMonoWidget::onQTcpSocketErrorOccurred);
    connect(socketDialogueClient,&QTcpSocket::hostFound,this,&AuditServeurMonoWidget::onQTcpSocketHostFound);
    connect(socketDialogueClient,&QTcpSocket::bytesWritten,this,&AuditServeurMonoWidget::onQTcpSocketBytesWritten);
    connect(socketDialogueClient,&QTcpSocket::stateChanged,this,&AuditServeurMonoWidget::onQTcpSocketStateChanged);
    connect(socketDialogueClient,&QTcpSocket::aboutToClose,this,&AuditServeurMonoWidget::onQTcpSocketAboutToClose);
    connect(process,&QProcess::readyReadStandardOutput,this,&AuditServeurMonoWidget::onQProcessreadyReadStandardOutput);

    QHostAddress addresseClient = socketDialogueClient->peerAddress();
    ui->textEdit_Messages->append("Client : " + addresseClient.toString());
}

void AuditServeurMonoWidget::onQTcpSocketBytesWritten(quint64 bytes)
{
    ui->textEdit_Messages->append(QString::number(bytes)+"bytes written");
}

void AuditServeurMonoWidget::onQProcessreadyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
        socketDialogueClient->write(reponse.toLatin1());
}

void AuditServeurMonoWidget::onQTcpSocketConnected()
{
    ui->textEdit_Messages->append("Client connecté");
}

void AuditServeurMonoWidget::onQTcpSocketDisconnected()
{
    disconnect(socketDialogueClient,nullptr,this,nullptr);
    socketDialogueClient->deleteLater();
    socketDialogueClient = nullptr;
    ui->textEdit_Messages->append("Client déconnecté");
}

void AuditServeurMonoWidget::onQTcpSocketReadyRead()
{
    QByteArray data;
    QByteArray reponse;

    ui->textEdit_Messages->append("dans readyRead");
    data=socketDialogueClient->readAll();
    ui->textEdit_Messages->append(data);
    if(data=="u"){
        reponse=getenv("USER");
        socketDialogueClient->write(reponse);
    }
    if(data=="c"){
        reponse = QHostInfo::localHostName().toLocal8Bit();
        socketDialogueClient->write(reponse);
    }
    if(data=="a"){
        process->start("uname",QStringList("-p"));
    }
    if(data=="o"){
        process->start("uname");
    }
}

void AuditServeurMonoWidget::onQTcpSocketErrorOccurred(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError); // le paramètre n'est pas utilisé dans cette méthode
    ui->textEdit_Messages->append(socketDialogueClient->errorString());
}

void AuditServeurMonoWidget::onQTcpSocketHostFound()
{
    ui->textEdit_Messages->append("Host found");
}

void AuditServeurMonoWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState)
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

void AuditServeurMonoWidget::onQTcpSocketAboutToClose()
{
    ui->textEdit_Messages->append("About to close");
}


void AuditServeurMonoWidget::on_pushButton_Lancement_clicked()
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
