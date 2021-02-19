#include "clientdialog.h"
#include "ui_clientdialog.h"

ClientDialog::ClientDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientDialog)
{
    status = false;
    ui->setupUi(this);
    connect(&tcpSocket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(&tcpSocket, SIGNAL(disconnected()), this, SLOT(disConnected()));
    connect(&tcpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(&tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(onError()));
}

ClientDialog::~ClientDialog()
{
    delete ui;
}

// slot func of sendButton
void ClientDialog::on_sendButton_clicked()
{
    // get user input message
    QString msg = ui->messageEdit->text();
    if(msg == ""){
     return;
    }
    msg = username + ": " + msg;
    // send message
    tcpSocket.write(msg.toUtf8());
    // clean messageEdit
    ui->messageEdit->clear();
}

// slot func of connectButton
void ClientDialog::on_connectButton_clicked()
{
    // if outline, connect to server
    if (status == false){
        // get server ip
        serverIp.setAddress(ui->serverIpEdit->text());
        // get server port
        serverPort = ui->serverPortEdit->text().toShort();
        // get username
        username = ui->usernameEdit->text();
        // send connection request
        // if success, generate connected singal, esle generate error singal
        tcpSocket.connectToHost(serverIp, serverPort);
    }
    // if online, disconnect from server
    else {
        // send server with message that leaving chat room
        QString msg = username + ": leaved!";
        tcpSocket.write(msg.toUtf8());
        // disconnect from server, and generate disconnected singal
        tcpSocket.disconnectFromHost();
    }
}

// slot func for successful connection with server (connected())
void ClientDialog::onConnected()
{
    status = true;
    ui->sendButton->setEnabled(true);
    ui->serverIpEdit->setEnabled(false);
    ui->serverPortEdit->setEnabled(false);
    ui->usernameEdit->setEnabled(false);
    ui->connectButton->setText("leave chat room");
    // send message to server
    QString msg = username  + ": entered the chat room!";
    // toUtf8(): transform QString to QByteArray
    tcpSocket.write(msg.toUtf8());
}

// slot func for disconnection with server
void ClientDialog::disConnected()
{
    status = false;
    ui->sendButton->setEnabled(true);
    ui->serverIpEdit->setEnabled(true);
    ui->serverPortEdit->setEnabled(true);
    ui->usernameEdit->setEnabled(true);
    ui->connectButton->setText("connect server");
}

// slot fucn of receive message from server
void ClientDialog::onReadyRead()
{
    if(tcpSocket.bytesAvailable()){
        // receive message
        QByteArray buf = tcpSocket.readAll();
        // display message
        ui->listWidget->addItem(buf);
        // dispaly bottom message
        ui->listWidget->scrollToBottom();
    }
}

// slot fucn of network exception
void ClientDialog::onError()
{
    // errorString(): get reason of network exception
    QMessageBox::critical(this, "ERROR", tcpSocket.errorString());
}
