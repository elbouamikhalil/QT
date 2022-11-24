#ifndef AUDITSERVEURMONOWIDGET_H
#define AUDITSERVEURMONOWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QProcess>
#include <QDebug>
#include <QHostInfo>
#include <QNetworkInterface>

QT_BEGIN_NAMESPACE
namespace Ui { class AuditServeurMonoWidget; }
QT_END_NAMESPACE

class AuditServeurMonoWidget : public QWidget
{
    Q_OBJECT

public:
    AuditServeurMonoWidget(QWidget *parent = nullptr);
    ~AuditServeurMonoWidget();
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
    void onQProcessreadyReadStandardOutput();

private:
    Ui::AuditServeurMonoWidget *ui;
    QTcpSocket *socketDialogueClient;
    QTcpServer *socketEcouteServeur;
    QProcess *process;
};
#endif // AUDITSERVEURMONOWIDGET_H
