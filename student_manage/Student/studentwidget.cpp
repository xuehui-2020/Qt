#include "studentwidget.h"
#include "ui_studentwidget.h"

StudentWidget::StudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentWidget)
{
    ui->setupUi(this);
    createDb();
    createTable();
    queryTable();
}

StudentWidget::~StudentWidget()
{
    delete ui;
}

// create database
void StudentWidget::createDb(){
    // add database driver of sqlite
    db = QSqlDatabase::addDatabase("QSQLITE");
    // set up name of database
    db.setDatabaseName("student.db");
    // open db
    if (db.open() == true){
        qDebug() << "create or open database successfully!";
    } else {
        qDebug() << "failed to create or open database...";
    }
}
// create table
void StudentWidget::createTable(){
    QSqlQuery query;
    QString str = QString("CREATE TABLE student("
                          "id INT PRIMARY KEY NOT NULL, "
                          "name TEXT NOT NULL, "
                          "score REAL NOT NULL);");
    if (query.exec(str) == false){
        qDebug() << str;
    } else {
        qDebug() << "create tabel successfully!";
    }

}
// query and dispaly result set
void StudentWidget::queryTable(){
    QString str = QString("SELECT * FROM student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
}

// insert
void StudentWidget::on_insertButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    QString name = ui->nameEdit->text();
    double score = ui->scoreEdit->text().toDouble();
    // check the inserted id
    if(id==0){
        QMessageBox::critical(this, "Error", "illegal id!");
        return;
    }
    // check the inserted name
    if(name == ""){
        QMessageBox::critical(this, "Error", "illegal name!");
        return;
    }
    // check the inserted score
    if(score < 0 || score > 100){
        QMessageBox::critical(this, "Error", "illegal score!");
        return;
    }

    QString str = QString("INSERT INTO student VALUES(%1, '%2', %3)").arg(id).arg(name).arg(score);
    if(query.exec(str) == false){
        qDebug() << str;
    } else {
        qDebug() << "insert data successfully!";
        queryTable();
    }
}

// delete (delte data according to id)
void StudentWidget::on_deleteButton_clicked()
{
    // are you sure to delte?
    if(QMessageBox::question(this, "delte", "are you sure to delte?",
                             QMessageBox::Yes|QMessageBox::No) == QMessageBox::No){
        return;
    }
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    QString str = QString("DELETE FROM student WHERE id = %1").arg(id);
    if(query.exec(str) == false){
        qDebug()<<str;
    }else{
        qDebug()<<"delete data sucessfully!";
        queryTable();
    }
}

// update (update score according to id)
void StudentWidget::on_updateButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    double score = ui->scoreEdit->text().toDouble();
    QString str = QString("UPDATE student SET score='%1' WHERE id=%2").arg(score).arg(id);
    if(query.exec(str) == false){
        qDebug()<<str;
    } else{
        qDebug()<<"update data sucessfully!";
        queryTable();
    }

}

// sort (according to id or score)
void StudentWidget::on_sortButton_clicked()
{
    // huo qu pai xu lie ming
    QString value = ui->valueComboBox->currentText();
    // huo qu pai xu fang shi
    QString condition;
    // same: if (ui->condComboBox->currentText() == "asc")
    if(ui->condComboBox->currentIndex() == 0){
        condition = "ASC";
    } else {
        condition = "DESC";
    }
    QString str = QString("SELECT * FROM student ORDER BY %1 %2").arg(value).arg(condition);

   model.setQuery(str);
   ui->tableView->setModel(&model);
}
