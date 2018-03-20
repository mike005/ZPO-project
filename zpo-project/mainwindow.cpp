#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // load default image and set it to the displayLabel
    defaultImg = new QImage(":/img/default.jpg");
    ui->displayLabel->setPixmap(QPixmap::fromImage(*defaultImg));
    ui->displayLabel->setScaledContents(true);

    QLabel *widthLabel = new QLabel();
    widthLabel->setText("width:");


}

MainWindow::~MainWindow()
{
    delete ui;
}


/*
 *  Open file dialog - isn't finished yet
 */
/*void MainWindow::on_actionOpen_triggered()
{
     QString fileName = QFileDialog::getOpenFileName(this,
                                                     tr("Open Address Book"), "",
                                                     tr("Address Book (*.abk);;All Files (*)"));

     if (fileName.isEmpty())
             return;

     QFile file(fileName);

     if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, tr("Unable to open file"), file.errorString());
        return;
     }



}*/


/*
 * About dialog
 */
void MainWindow::on_actionAbout_triggered()
{

}
