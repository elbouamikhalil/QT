#ifndef AUDITSERVEURMULTIWIDGET_H
#define AUDITSERVEURMULTIWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QProcess>
#include <QDebug>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class AuditServeurMultiWidget; }
QT_END_NAMESPACE

class AuditServeurMultiWidget : public QWidget
{
    Q_OBJECT

public:
    AuditServeurMultiWidget(QWidget *parent = nullptr);
    ~AuditServeurMultiWidget();
    void onQtcpServeracceptError(QAbstractSocket::SocketError socketError);
    void onQTcpServernewConnection();
    void onQProcess_readyReadStandardOutput();

private slots:

    void on_pushButton_Lancement_clicked();
    void onQTcpSocketConnected();
    void onQTcpSocketDisconnected();
    void onQTcpSocketReadyRead();
    void onQTcpSocketErrorOccurred(QAbstractSocket::SocketError socketError);
    void onQTcpSocketHostFound();
    void onQTcpSocketBytesWritten(quint64 bytes);
    void onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState);
    void onQTcpSocketAboutToClose();

private:
    Ui::AuditServeurMultiWidget *ui;
    QTcpServer *socketEcouteServeur;
    QList<QProcess *> listeProcess;
    QList<QTcpSocket *> listeSocketsDialogueClients;
};
#endif // AUDITSERVEURMULTIWIDGET_H
