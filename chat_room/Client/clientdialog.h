#ifndef CLIENTDIALOG_H
#define CLIENTDIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class ClientDialog;
}

class ClientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClientDialog(QWidget *parent = 0);
    ~ClientDialog();

private slots:
    // slot func of sendButton
    void on_sendButton_clicked();
    // slot func of connectButton
    void on_connectButton_clicked();
    // slot func for successful connection with server (connected())
    void onConnected();
    // slot func for disconnection with server
    void disConnected();
    // slot fucn of receive message from server
    void onReadyRead();
    // slot fucn of network exception
    void onError();

private:
    Ui::ClientDialog *ui;
    bool status;            // client status: online/outline
    QTcpSocket tcpSocket;   // socket
    QHostAddress serverIp;  // server ip
    quint16 serverPort;     // server port
    QString username;       // username
};

#endif // CLIENTDIALOG_H
