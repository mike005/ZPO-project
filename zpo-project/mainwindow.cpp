#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // defaultImg = new QImage(":/img/default");
    //ui->displayLabel->setPixmap(defaultImg);

   ui->displayLabel->setStyleSheet("background-image: url(:/img/default.jpg)");

}

MainWindow::~MainWindow()
{
    delete ui;
}
