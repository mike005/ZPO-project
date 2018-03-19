/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionAbout;
    QWidget *centralwidget;
    QFrame *displayFrame;
    QLabel *displayLabel;
    QFrame *infoFrame;
    QToolBox *infoToolBox;
    QWidget *Picture;
    QWidget *Pixel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(778, 521);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(189, 189, 189);"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        displayFrame = new QFrame(centralwidget);
        displayFrame->setObjectName(QStringLiteral("displayFrame"));
        displayFrame->setGeometry(QRect(0, 0, 511, 461));
        displayFrame->setAutoFillBackground(false);
        displayFrame->setFrameShape(QFrame::StyledPanel);
        displayFrame->setFrameShadow(QFrame::Raised);
        displayLabel = new QLabel(displayFrame);
        displayLabel->setObjectName(QStringLiteral("displayLabel"));
        displayLabel->setGeometry(QRect(16, 12, 481, 451));
        infoFrame = new QFrame(centralwidget);
        infoFrame->setObjectName(QStringLiteral("infoFrame"));
        infoFrame->setGeometry(QRect(500, 0, 281, 461));
        infoFrame->setFrameShape(QFrame::StyledPanel);
        infoFrame->setFrameShadow(QFrame::Raised);
        infoToolBox = new QToolBox(infoFrame);
        infoToolBox->setObjectName(QStringLiteral("infoToolBox"));
        infoToolBox->setGeometry(QRect(10, 10, 261, 451));
        infoToolBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Picture = new QWidget();
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        infoToolBox->addItem(Picture, QStringLiteral(""));
        Pixel = new QWidget();
        Pixel->setObjectName(QStringLiteral("Pixel"));
        Pixel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        infoToolBox->addItem(Pixel, QStringLiteral("Page"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 778, 21));
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open file", nullptr));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        displayLabel->setText(QString());
        infoToolBox->setItemText(infoToolBox->indexOf(Picture), QString());
        infoToolBox->setItemText(infoToolBox->indexOf(Pixel), QApplication::translate("MainWindow", "Page", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
