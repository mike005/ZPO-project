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


    // create toolbox which will be displayed on the right side
    // of the main window
    toolBox = new QToolBox;

    wImage = new QWidget;
    wPixel = new QWidget;


    // image box
    QGroupBox *sizeGroup = new QGroupBox(tr("Size"));

    QLabel *sizeWidthLabel = new QLabel(tr("Width:"));
    iWidthLineEdit = new QLineEdit;
    iWidthLineEdit->setPlaceholderText("Placeholder Text");
    iWidthLineEdit->setFocus();

    QLabel *sizeHeightLabel = new QLabel(tr("Height:"));
    iHeightLineEdit2 = new QLineEdit;
    iHeightLineEdit2->setPlaceholderText("Placeholder Text");
    iHeightLineEdit2->setFocus();



    QGroupBox *validatorGroup = new QGroupBox(tr("Resolution"));

    QLabel *resHorLabel = new QLabel(tr("Horizontal:"));
    horizontalLineEdit = new QLineEdit;
    horizontalLineEdit->setPlaceholderText("Placeholder Text");

    QLabel *resVerLabel = new QLabel(tr("Vertical:"));
    verticalLineEdit = new QLineEdit;
    verticalLineEdit->setPlaceholderText("Placeholder Text");



    QGridLayout *echoLayout = new QGridLayout;
    echoLayout->addWidget(sizeWidthLabel, 0, 0);
    echoLayout->addWidget(iWidthLineEdit, 0, 1);
    echoLayout->addWidget(sizeHeightLabel, 1, 0);
    echoLayout->addWidget(iHeightLineEdit2, 1, 1);
    sizeGroup->setLayout(echoLayout);

    QGridLayout *resolutionLayout = new QGridLayout;
    resolutionLayout->addWidget(resHorLabel, 0, 0);
    resolutionLayout->addWidget(horizontalLineEdit, 0, 1);
    resolutionLayout->addWidget(resVerLabel, 1, 0);
    resolutionLayout->addWidget(verticalLineEdit, 1, 1);
    validatorGroup->setLayout(resolutionLayout);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(sizeGroup, 0, 0);
    layout->addWidget(validatorGroup, 1, 0);
    wImage->setLayout(layout);



    // pixel box
    QGroupBox *colorGroup = new QGroupBox(tr("Color"));

    QLabel *rgbLabel = new QLabel(tr("RGB:"));
    rgbLineEdit = new QLineEdit;
    rgbLineEdit->setPlaceholderText("Text");
    rgbLineEdit->setFocus();

    QLabel *hexLabel = new QLabel(tr("#"));
    hexLineEdit = new QLineEdit;
    hexLineEdit->setPlaceholderText("Text");
    hexLineEdit->setFocus();

    QLabel *cLabel = new QLabel(tr("     "));
    cLabel->setStyleSheet("QLabel { background-color : #2f5f4f;}");



    QGroupBox *statisticGroup = new QGroupBox(tr("Statistics"));

    QLabel *stat1Label = new QLabel(tr("info 1:"));
    stat1LineEdit = new QLineEdit;
    stat1LineEdit->setPlaceholderText("Text");
    stat1LineEdit->setFocus();

    QLabel *stat2Label = new QLabel(tr("info 2:"));
    stat2LineEdit = new QLineEdit;
    stat2LineEdit->setPlaceholderText("Text");
    stat2LineEdit->setFocus();

    QLabel *stat3Label = new QLabel(tr("3 most used:"));
    stat3Label->setFixedHeight(22);

    QLabel *color1Label = new QLabel(tr(" 33% "));
    color1Label->setFixedHeight(30);
    color1Label->setFixedWidth(70);
    color1Label->setStyleSheet("QLabel { background-color : #5f2f3f;}");
    QLabel *color2Label = new QLabel(tr(" 22% "));
    color2Label->setFixedHeight(25);
    color2Label->setFixedWidth(60);
    color2Label->setStyleSheet("QLabel { background-color : #57482b;}");
    QLabel *color3Label = new QLabel(tr(" 11% "));
    color3Label->setFixedHeight(20);
    color3Label->setFixedWidth(50);
    color3Label->setStyleSheet("QLabel { background-color : #486192;}");



    QGridLayout *pixelColorLayout = new QGridLayout;
    pixelColorLayout->addWidget(rgbLabel, 0, 0);
    pixelColorLayout->addWidget(rgbLineEdit, 0, 1);
    pixelColorLayout->addWidget(hexLabel, 1, 0);
    pixelColorLayout->addWidget(hexLineEdit, 1, 1);
    pixelColorLayout->addWidget(cLabel, 1, 2);
    colorGroup->setLayout(pixelColorLayout);

    QGridLayout *pixelStatLayout = new QGridLayout;
    pixelStatLayout->addWidget(stat1Label, 0, 0);
    pixelStatLayout->addWidget(stat1LineEdit, 0, 1);
    pixelStatLayout->addWidget(stat2Label, 1, 0);
    pixelStatLayout->addWidget(stat2LineEdit, 1, 1);
    pixelStatLayout->addWidget(stat3Label, 2, 1);
    pixelStatLayout->addWidget(color1Label, 3, 0);
    pixelStatLayout->addWidget(color2Label, 3, 1);
    pixelStatLayout->addWidget(color3Label, 3, 2);
    statisticGroup->setLayout(pixelStatLayout);

    QGridLayout *pixelLayout = new QGridLayout;
    pixelLayout->addWidget(colorGroup, 0, 0);
    pixelLayout->addWidget(statisticGroup, 1, 0);
    wPixel->setLayout(pixelLayout);



    // put the image box and the pixel box in the toolbox
    toolBox->addItem(wImage,"Image");
    toolBox->addItem(wPixel,"Pixel");

    QVBoxLayout *layout2 = new QVBoxLayout;
    layout2->addWidget(wImage);
    layout2->addWidget(wPixel);
    toolBox->setLayout(layout2);

    QVBoxLayout *layout3 = new QVBoxLayout;
    layout3->addWidget(toolBox);
    ui->propertiesWidget->setLayout(layout3);
    ui->propertiesWidget->resize(251, 461);
    ui->propertiesWidget->show();

    // set stylesheet for the toolbox
    ui->propertiesWidget->setStyleSheet(
                                        "color:rgb(255,255,255);"
                                        "border: 1px solid #141414;"
                                        "echoLineEdit2 {"
                                        "border: 1px solid #333333;"
                                        "background-color: #ffffff;"
                                        "color: black;"
                                        "background:rgb(51,51,51);"
                                        "}");

    //toolBox->setStyleSheet("background:rgb(51,51,51);");

}

MainWindow::~MainWindow()
{
    delete ui;
}


/*
 *  Open file dialog - isn't finished yet
 */
void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                         tr("Open File"), "",
                                                         tr("Picture (*.jpg);;All Files (*)"));

         if (fileName.isEmpty())
                 return;

         cv::Mat img = cv::imread(fileName.toStdString());


         if( img.empty() ) {
             QMessageBox::information(this, tr("Error"),"Unable to open file");
             return;
         }

         cv::cvtColor(img, img, CV_BGR2RGB);
         ui->displayLabel->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));
}


/*
 * About dialog
 */
void MainWindow::on_actionAbout_triggered()
{

}
