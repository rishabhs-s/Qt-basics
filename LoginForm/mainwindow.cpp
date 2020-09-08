#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

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


void MainWindow::on_login_clicked()
{
    QString username=ui ->username->text();
    QString password=ui ->password->text();

    if (username =="rishabh" && password =="rishabh"){
          QMessageBox::information(this,"Successfull","Username and password correct");
    }
     else
    {
        QMessageBox::warning(this,"UnSuccessfull","Username and password incorrect");
    }
}
