#include "sreverdialog.h"
#include "ui_sreverdialog.h"

SreverDialog::SreverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SreverDialog)
{
    ui->setupUi(this);
    // When a client sends a request to the server, newConnection()  signal is generated
    connect(&tcpServer, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    // send timeout signal every three seconds
    connect(&timer, SIGNAL(timeout()), SLOT(onTimeout()));
}

SreverDialog::~SreverDialog()
{
    delete ui;
}

// slot func of "create server" button
void SreverDialog::on_pushButton_clicked()
{
    // get server port
    port = ui->lineEdit->text().toShort();
    // set up server ip and port
    if (tcpServer.listen(QHostAddress::Any, port) == true){
        qDebug()<<"create server sucessfully!";
        // disiable pushButton and lineEdit
        ui->pushButton->setEnabled(false);
        ui->lineEdit->setEnabled(false);
    }
    else {
        qDebug()<< "faied to create server.";
    }
}

// slot func of corresponding the client connection request
void SreverDialog::onNewConnection(){
    // get the socket of communicating with the client
    QTcpSocket* tcpClient = tcpServer.nextPendingConnection();
    // save socket to vector
    tcpClientList.append(tcpClient);
    // when a client sent a message to server, soket send readyRead() signal
    connect(tcpClient, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

// slot func of receiving the client message
void SreverDialog::onReadyRead(){
    //
    for(int i=0; i<tcpClientList.size(); i++){
        // 遍历容器找到是哪个客户端发来的消息
        // bytesAvailable()获取当前套接字等待读取消息字节数
        // 返回0表示没有消息需要读，大于0说明有消息要来
        if(tcpClientList.at(i)->bytesAvailable()){
            // read message and save it
            QByteArray buf = tcpClientList.at(i)->readAll();
            // display message
            ui->listWidget->addItem(buf);
            ui->listWidget->scrollToBottom();
            // start timer
            timer.start(3000);
            // forward message to other client
            sendMessge(buf);
        }
    }
}
// slot func of forwording the message to other client
void SreverDialog::sendMessge(const QByteArray& buf){
    for(int i =0; i<tcpClientList.size(); i++) {
        tcpClientList.at(i)->write(buf);
    }
}

// slot func of timer
void SreverDialog::onTimeout(void){
    qDebug()<<"ni ma";
    // 遍历检查容器中保存的客户端通信套接字是否已经断开连接，如果是则删除
    for(int i=0; i<tcpClientList.size(); i++){
        if(tcpClientList.at(i)->state() ==
                QAbstractSocket::UnconnectedState){
            tcpClientList.removeAt(i);
            --i;
        }
    }
}
