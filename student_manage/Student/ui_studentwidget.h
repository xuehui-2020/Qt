/********************************************************************************
** Form generated from reading UI file 'studentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWIDGET_H
#define UI_STUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *valueComboBox;
    QComboBox *condComboBox;
    QPushButton *sortButton;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *scoreEdit;
    QLineEdit *idEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;

    void setupUi(QWidget *StudentWidget)
    {
        if (StudentWidget->objectName().isEmpty())
            StudentWidget->setObjectName(QStringLiteral("StudentWidget"));
        StudentWidget->resize(491, 476);
        verticalLayout = new QVBoxLayout(StudentWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        valueComboBox = new QComboBox(StudentWidget);
        valueComboBox->setObjectName(QStringLiteral("valueComboBox"));

        horizontalLayout->addWidget(valueComboBox);

        condComboBox = new QComboBox(StudentWidget);
        condComboBox->setObjectName(QStringLiteral("condComboBox"));

        horizontalLayout->addWidget(condComboBox);

        sortButton = new QPushButton(StudentWidget);
        sortButton->setObjectName(QStringLiteral("sortButton"));

        horizontalLayout->addWidget(sortButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(StudentWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(tableView);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(StudentWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(StudentWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(StudentWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(StudentWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        scoreEdit = new QLineEdit(StudentWidget);
        scoreEdit->setObjectName(QStringLiteral("scoreEdit"));

        gridLayout->addWidget(scoreEdit, 2, 1, 1, 1);

        idEdit = new QLineEdit(StudentWidget);
        idEdit->setObjectName(QStringLiteral("idEdit"));

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        insertButton = new QPushButton(StudentWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));

        horizontalLayout_2->addWidget(insertButton);

        deleteButton = new QPushButton(StudentWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout_2->addWidget(deleteButton);

        updateButton = new QPushButton(StudentWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout_2->addWidget(updateButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(StudentWidget);

        QMetaObject::connectSlotsByName(StudentWidget);
    } // setupUi

    void retranslateUi(QWidget *StudentWidget)
    {
        StudentWidget->setWindowTitle(QApplication::translate("StudentWidget", "StudentWidget", 0));
        valueComboBox->clear();
        valueComboBox->insertItems(0, QStringList()
         << QApplication::translate("StudentWidget", "id", 0)
         << QApplication::translate("StudentWidget", "score", 0)
        );
        condComboBox->clear();
        condComboBox->insertItems(0, QStringList()
         << QApplication::translate("StudentWidget", "asc", 0)
         << QApplication::translate("StudentWidget", "dasc", 0)
        );
        sortButton->setText(QApplication::translate("StudentWidget", "sort", 0));
        label->setText(QApplication::translate("StudentWidget", "student id:", 0));
        label_2->setText(QApplication::translate("StudentWidget", "student name:", 0));
        label_3->setText(QApplication::translate("StudentWidget", "student score:", 0));
        insertButton->setText(QApplication::translate("StudentWidget", "insert", 0));
        deleteButton->setText(QApplication::translate("StudentWidget", "delete", 0));
        updateButton->setText(QApplication::translate("StudentWidget", "update", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentWidget: public Ui_StudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWIDGET_H
