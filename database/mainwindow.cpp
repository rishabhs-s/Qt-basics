#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>

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


void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db.sqlite");

    if (!db.open()) {

        qDebug() << "Error. Couldn't open database!" << '\n';

    }
    else {

        qDebug() << "Database opened successfully." << '\n';

    }

}
