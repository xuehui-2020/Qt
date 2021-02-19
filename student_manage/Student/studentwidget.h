#ifndef STUDENTWIDGET_H
#define STUDENTWIDGET_H

#include <QWidget>
#include <QSqlDatabase> // connect sql database
#include <QSqlQuery> // exec sql
#include <QSqlQueryModel> // get query result set
#include <QSqlError> // get reason of failed
#include <QDebug>
#include <QMessageBox>


namespace Ui {
class StudentWidget;
}

class StudentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StudentWidget(QWidget *parent = 0);
    ~StudentWidget();

private:
    // create database
    void createDb();
    // create table
    void createTable();
    // query and display table
    void queryTable();

private slots:
    void on_insertButton_clicked();

    void on_deleteButton_clicked();

    void on_updateButton_clicked();

    void on_sortButton_clicked();

private:
    Ui::StudentWidget *ui;
    QSqlDatabase db; //establish the connection between Qt and database
    QSqlQueryModel model; //save query result set
};

#endif // STUDENTWIDGET_H
