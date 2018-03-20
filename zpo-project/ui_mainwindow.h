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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionAbout;
    QAction *actionSave;
    QWidget *centralwidget;
    QFrame *displayFrame;
    QLabel *displayLabel;
    QFrame *infoFrame;
    QToolBox *infoToolBox;
    QWidget *toolboxPixel;
    QLabel *widthLabel;
    QLabel *hightLabel;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *toolboxImage;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
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
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background-color: rgb(57, 57, 57);"));
        displayFrame = new QFrame(centralwidget);
        displayFrame->setObjectName(QStringLiteral("displayFrame"));
        displayFrame->setGeometry(QRect(0, 0, 511, 461));
        displayFrame->setMinimumSize(QSize(0, 0));
        displayFrame->setAutoFillBackground(false);
        displayFrame->setFrameShape(QFrame::StyledPanel);
        displayFrame->setFrameShadow(QFrame::Raised);
        displayLabel = new QLabel(displayFrame);
        displayLabel->setObjectName(QStringLiteral("displayLabel"));
        displayLabel->setGeometry(QRect(16, 12, 481, 451));
        displayLabel->setCursor(QCursor(Qt::CrossCursor));
        displayLabel->setScaledContents(false);
        displayLabel->setAlignment(Qt::AlignCenter);
        displayLabel->setWordWrap(false);
        displayLabel->setOpenExternalLinks(false);
        infoFrame = new QFrame(centralwidget);
        infoFrame->setObjectName(QStringLiteral("infoFrame"));
        infoFrame->setGeometry(QRect(500, 0, 281, 461));
        infoFrame->setFrameShape(QFrame::StyledPanel);
        infoFrame->setFrameShadow(QFrame::Raised);
        infoToolBox = new QToolBox(infoFrame);
        infoToolBox->setObjectName(QStringLiteral("infoToolBox"));
        infoToolBox->setGeometry(QRect(10, 10, 261, 451));
        infoToolBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        toolboxPixel = new QWidget();
        toolboxPixel->setObjectName(QStringLiteral("toolboxPixel"));
        toolboxPixel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        widthLabel = new QLabel(toolboxPixel);
        widthLabel->setObjectName(QStringLiteral("widthLabel"));
        widthLabel->setGeometry(QRect(40, 20, 47, 21));
        hightLabel = new QLabel(toolboxPixel);
        hightLabel->setObjectName(QStringLiteral("hightLabel"));
        hightLabel->setGeometry(QRect(40, 60, 47, 21));
        plainTextEdit = new QPlainTextEdit(toolboxPixel);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(100, 10, 104, 31));
        plainTextEdit_2 = new QPlainTextEdit(toolboxPixel);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(100, 60, 104, 31));
        infoToolBox->addItem(toolboxPixel, QStringLiteral("Page"));
        toolboxImage = new QWidget();
        toolboxImage->setObjectName(QStringLiteral("toolboxImage"));
        label = new QLabel(toolboxImage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 61, 21));
        label->setStyleSheet(QStringLiteral("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(toolboxImage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 47, 13));
        label_3 = new QLabel(toolboxImage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 47, 13));
        textEdit = new QTextEdit(toolboxImage);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 40, 104, 31));
        textEdit_2 = new QTextEdit(toolboxImage);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(90, 80, 104, 31));
        infoToolBox->addItem(toolboxImage, QStringLiteral("Page"));
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
        menuFile->addAction(actionSave);
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
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        displayLabel->setText(QString());
        widthLabel->setText(QApplication::translate("MainWindow", "Width:", nullptr));
        hightLabel->setText(QApplication::translate("MainWindow", "Hight:", nullptr));
        infoToolBox->setItemText(infoToolBox->indexOf(toolboxPixel), QApplication::translate("MainWindow", "Page", nullptr));
        label->setText(QApplication::translate("MainWindow", "Color", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "RGB: ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "#", nullptr));
        infoToolBox->setItemText(infoToolBox->indexOf(toolboxImage), QApplication::translate("MainWindow", "Page", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
