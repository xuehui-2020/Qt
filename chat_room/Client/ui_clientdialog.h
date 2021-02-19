/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QLineEdit *messageEdit;
    QPushButton *sendButton;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *serverPortEdit;
    QLabel *label_3;
    QLineEdit *usernameEdit;
    QLineEdit *serverIpEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *connectButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName(QStringLiteral("ClientDialog"));
        ClientDialog->resize(564, 583);
        verticalLayout = new QVBoxLayout(ClientDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(ClientDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 2);

        messageEdit = new QLineEdit(ClientDialog);
        messageEdit->setObjectName(QStringLiteral("messageEdit"));

        gridLayout_2->addWidget(messageEdit, 1, 0, 1, 1);

        sendButton = new QPushButton(ClientDialog);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setEnabled(false);

        gridLayout_2->addWidget(sendButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ClientDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ClientDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        serverPortEdit = new QLineEdit(ClientDialog);
        serverPortEdit->setObjectName(QStringLiteral("serverPortEdit"));

        gridLayout->addWidget(serverPortEdit, 1, 1, 1, 1);

        label_3 = new QLabel(ClientDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        usernameEdit = new QLineEdit(ClientDialog);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));

        gridLayout->addWidget(usernameEdit, 2, 1, 1, 1);

        serverIpEdit = new QLineEdit(ClientDialog);
        serverIpEdit->setObjectName(QStringLiteral("serverIpEdit"));

        gridLayout->addWidget(serverIpEdit, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        connectButton = new QPushButton(ClientDialog);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        gridLayout_3->addWidget(connectButton, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        retranslateUi(ClientDialog);

        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QApplication::translate("ClientDialog", "ClientDialog", 0));
        sendButton->setText(QApplication::translate("ClientDialog", "send", 0));
        label->setText(QApplication::translate("ClientDialog", "server ip", 0));
        label_2->setText(QApplication::translate("ClientDialog", "server port", 0));
        serverPortEdit->setText(QApplication::translate("ClientDialog", "8080", 0));
        label_3->setText(QApplication::translate("ClientDialog", "username", 0));
        usernameEdit->setText(QApplication::translate("ClientDialog", "xuehui", 0));
        serverIpEdit->setText(QApplication::translate("ClientDialog", "127.0.0.1", 0));
        connectButton->setText(QApplication::translate("ClientDialog", "connect server", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H
