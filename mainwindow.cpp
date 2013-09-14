#include <QFileDialog>
#include <QGraphicsScene>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv/cv.h"
//#include "opencv/highgui.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inputscene = new QGraphicsScene(ui->InputGraphic);
    outputscene = new QGraphicsScene(ui->OutputGraphic);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpenImg_triggered()
{
    QString filename = QFileDialog::getOpenFileName
            (this,tr("Open File"),".",tr("Image Files (*.jpg *.bmp *.jpeg *.png)"));
    image = cv::imread(filename.toLatin1().data());
    cv::cvtColor(image,dst,CV_BGR2RGB);
    QImage img = QImage((const unsigned char *)(dst.data),dst.cols,dst.rows,dst.step,QImage::Format_RGB888);
    inputscene->clear();
    inputscene->addPixmap(QPixmap::fromImage(img));
    ui->InputGraphic->setScene(inputscene);
    //cv::namedWindow("Open Image");
    // cv::imshow("Open Image",image);
}
