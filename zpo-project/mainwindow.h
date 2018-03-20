#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QtWidgets>
#include <QGraphicsScene>
#include <QLabel>
#include <QPixmap>
#include <QFile>
#include <QMessageBox>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

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

public slots:

    void openFile();

private slots:
    void on_actionOpen_triggered();
    void on_actionAbout_triggered();
};

#endif // MAINWINDOW_H
