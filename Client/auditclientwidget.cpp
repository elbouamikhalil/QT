#include "auditclientwidget.h"
#include "ui_auditclientwidget.h"

AuditClientWidget::AuditClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditClientWidget)
{
    ui->setupUi(this);
    ui->groupBoxInformationsClient->setEnabled(false);
    socketDeDialogueAvecServeur = new QTcpSocket(this);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::connected,this,&::AuditClientWidget::onQTcpSocketConnected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::disconnected,this,&AuditClientWidget::onQTcpSocketDisconnected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::readyRead,this,&AuditClientWidget::onQTcpSocketReadyRead);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::stateChanged,this,&AuditClientWidget::onQTcpSocketStateChanged);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::errorOccurred,this,&AuditClientWidget::onQTcpSocketErrorOccurred);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::hostFound,this,&::AuditClientWidget::onQTcpSocketHostFound);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::aboutToClose,this,&::AuditClientWidget::onQTcpSocketAboutToClose);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::channelBytesWritten,this,&::AuditClientWidget::onQTcpSocketChannelBytesWritten);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::readChannelFinished,this,&::AuditClientWidget::onQTcpSocketReadChannelFinished);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::bytesWritten,this,&::AuditClientWidget::onQTcpSocketBytesWritten);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::channelReadyRead,this,&AuditClientWidget::onQTcpSocketChannelReadyRead);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::destroyed,this,&::AuditClientWidget::onQTcpSocketDestroyed);
}

AuditClientWidget::~AuditClientWidget()
{
    if(socketDeDialogueAvecServeur != nullptr){
        socketDeDialogueAvecServeur->close();
        delete socketDeDialogueAvecServeur;
    }
    delete ui;
}

void AuditClientWidget::on_pushButtonConnexion_clicked()
{
    if (ui->pushButtonConnexion->text()=="Connexion"){
        socketDeDialogueAvecServeur->connectToHost(ui->lineEditAdresseIP->text(),ui->lineEditPort->text().toInt());
    }
    else{
        socketDeDialogueAvecServeur->disconnectFromHost();
    }
}
void AuditClientWidget::on_pushButtonOrdinateur_clicked()
{
    typeDeDemande="c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}
void AuditClientWidget::on_pushButtonUtilisateur_clicked()
{
    typeDeDemande="u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}
void AuditClientWidget::on_pushButtonArchitecture_clicked()
{
    typeDeDemande="a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}
void AuditClientWidget::on_pushButtonOs_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void AuditClientWidget::onQTcpSocketConnected()
{
    qDebug()<<"connected";
    ui->textEditEtat->append("Connected");
    ui->pushButtonConnexion->setText("Déconnexion");
    ui->lineEditAdresseIP->setEnabled(false);
    ui->lineEditPort->setEnabled(false);
    ui->groupBoxInformationsClient->setEnabled(true);
    ui->pushButtonOrdinateur->setEnabled(true);

    ui->lineEditAdresseIP->clear();
    ui->lineEditArchitecture->clear();
    ui->lineEditOs->clear();
    ui->lineEditUtilisateur->clear();
}

void AuditClientWidget::onQTcpSocketDisconnected()
{
    qDebug()<<"disconnected";
    ui->pushButtonConnexion->setDisabled(false);
    ui->textEditEtat->append("Déconnecté");
    ui->lineEditAdresseIP->setEnabled(true);
    ui->lineEditPort->setEnabled(true);
    ui->groupBoxInformationsClient->setEnabled(false);
}

void AuditClientWidget::onQTcpSocketReadyRead()
{
    QByteArray buffer;
    if(socketDeDialogueAvecServeur->bytesAvailable()>0){
        buffer = socketDeDialogueAvecServeur->readAll();
        if(typeDeDemande=="u" ){
            ui->lineEditUtilisateur->setText(buffer.data());
        }
        if(typeDeDemande=="c" ){
            ui->lineEditOrdinateur->setText(buffer.data());
        }
        if(typeDeDemande=="o" ){
            ui->lineEditOs->setText(buffer.data());
        }
        if(typeDeDemande=="a" ){
            ui->lineEditArchitecture->setText(buffer.data());
        }
    }
}

void AuditClientWidget::onQTcpSocketErrorOccurred(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtat->append(socketDeDialogueAvecServeur->errorString());
}

void AuditClientWidget::onQTcpSocketHostFound()
{

}

void AuditClientWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    switch (socketState)
    {
    case QAbstractSocket::UnconnectedState:
        ui->textEditEtat->append("The socket isn't connected");
        break;
    case QAbstractSocket::ConnectingState:
        ui->textEditEtat->append("The socket is connecting");
        break;
    case QAbstractSocket::ConnectedState:
        ui->textEditEtat->append("The socket is connected");
        break;
    case QAbstractSocket::BoundState:
        ui->textEditEtat->append("The socket is bound to an address and a port");
        break;
    case QAbstractSocket::ClosingState:
        ui->textEditEtat->append("The socket is about to close");
        break;
    case QAbstractSocket::ListeningState:
        ui->textEditEtat->append("The socket is Listening");
        break;
    }
}

void AuditClientWidget::onQTcpSocketAboutToClose()
{
    ui->textEditEtat->append("about to close");
}

void AuditClientWidget::onQTcpSocketBytesWritten(quint64 bytes)
{
    ui->textEditEtat->append(QString::number(bytes)+"bytes written");
}

void AuditClientWidget::onQTcpSocketChannelBytesWritten(int channel, qint64 bytes)
{
    ui->textEditEtat->append(QString::number(bytes)+"bytes written on channel"+QString::number(channel));
}

void AuditClientWidget::onQTcpSocketChannelReadyRead(int channel)
{
    ui->textEditEtat->append("ready read on channel"+ QString::number(channel));
}

void AuditClientWidget::onQTcpSocketReadChannelFinished()
{
    ui->textEditEtat->append("Read channel finished");
}

void AuditClientWidget::onQTcpSocketDestroyed(QObject *obj)
{
    Q_UNUSED(obj);
    ui->textEditEtat->append("obj destroyed");
}

