#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QGraphicsScene>
#include <QLabel>
#include <QPixmap>
#include <QFile>
#include <QMessageBox>
#include <QToolBox>
#include <QFrame>
#include <QVBoxLayout>
#include <QListWidget>
#include <QTextBrowser>
#include <QGroupBox>
#include <QComboBox>
#include <QGridLayout>
#include <QLineEdit>
#include <QFileDialog>

#include <opencv2/opencv.hpp>
#include <opencv/cv.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>

#include <cstdio>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QAction *openAct;

    QImage *defaultImg;
    QToolBox *toolBox;
    QLineEdit *iWidthLineEdit;
    QLineEdit *iHeightLineEdit2;
    QLineEdit *horizontalLineEdit;
    QLineEdit *verticalLineEdit;
    QLineEdit *rgbLineEdit;
    QLineEdit *hexLineEdit;

    QLineEdit *stat1LineEdit;
    QLineEdit *stat2LineEdit;

    QWidget *wImage;
    QWidget *wPixel;


private slots:
    void on_actionOpen_triggered();
    void on_actionAbout_triggered();
};

#endif // MAINWINDOW_H
