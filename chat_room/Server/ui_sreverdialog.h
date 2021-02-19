/********************************************************************************
** Form generated from reading UI file 'sreverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SREVERDIALOG_H
#define UI_SREVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SreverDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *SreverDialog)
    {
        if (SreverDialog->objectName().isEmpty())
            SreverDialog->setObjectName(QStringLiteral("SreverDialog"));
        SreverDialog->resize(813, 591);
        widget = new QWidget(SreverDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 160, 258, 262));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(SreverDialog);

        QMetaObject::connectSlotsByName(SreverDialog);
    } // setupUi

    void retranslateUi(QDialog *SreverDialog)
    {
        SreverDialog->setWindowTitle(QApplication::translate("SreverDialog", "SreverDialog", 0));
        label->setText(QApplication::translate("SreverDialog", "server port:", 0));
        lineEdit->setText(QApplication::translate("SreverDialog", "8080", 0));
        pushButton->setText(QApplication::translate("SreverDialog", "create server", 0));
    } // retranslateUi

};

namespace Ui {
    class SreverDialog: public Ui_SreverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SREVERDIALOG_H
