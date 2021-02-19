#ifndef SREVERDIALOG_H
#define SREVERDIALOG_H

#include <QDialog>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>

namespace Ui {
class SreverDialog;
}

class SreverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SreverDialog(QWidget *parent = 0);
    ~SreverDialog();

private slots:
    // slot func of "create server" button
    void on_pushButton_clicked();
    // slot func of corresponding the client connection request (NewConnection())
    void onNewConnection();
    // slot func of receiving the client message (ReadyRead)
    void onReadyRead();
    // slot func of forwording the message to other client
    void sendMessge(const QByteArray& buf);
    // slot func of timer
    void onTimeout(void);

private:
    Ui::SreverDialog *ui;
    QTcpServer tcpServer;
    quint16 port; // server port
    QList <QTcpSocket*> tcpClientList; //vector: save all sockets that communicate with client
    QTimer timer; // timer (ji shi qi)

};

#endif // SREVERDIALOG_H
