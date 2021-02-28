#include "mainWindow.h"
#include "ui_mainWindow.h"
#include "database.h"
#include <QSqlRecord>
#include <QDir>
#include <QSqlField>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlError>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myDb.createTripTable();

     // the tables with college info

    if(!myDb.isOpen())
    {
        ui->dbStatus_label->setText("Failed to open database!");
    }
    else
    {
        ui->dbStatus_label->setText("Connected...");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    auto* choosePath = new ChoosePath(this);
    choosePath->show();
}

void MainWindow::on_actionLogin_triggered()
{
    auto* login = new Login(this);
    login->show();
}
