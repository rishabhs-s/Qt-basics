#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_signup_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
       db.setHostName("E:/Qbasics/Qt-basics/database/db.db");

       if(db.open())
       {
          // QMessageBox::information(this,"connection","connectded sucessfully");
           QString email=ui->email->text();
           QString password=ui->password->text();


                     QSqlQuery qry;

                     qry.prepare("INSERT INTO users(email , password)"
                                   "VALUES(:email,:password)");
                     qry.bindValue(":email",email);
                     qry.bindValue(":password",password);

                     if(qry.exec()){
                         QMessageBox::information(this,"successfull","signup done");
                     }
       }
       else{
           QSqlError error = db.lastError();
           QMessageBox::information(this,"connection", error.databaseText());

       }
}
