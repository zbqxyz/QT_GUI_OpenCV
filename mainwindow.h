#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QGraphicsScene>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionOpenImg_triggered();

private:
    Ui::MainWindow *ui;
    cv::Mat image;
    cv::Mat dst;
    QGraphicsScene *inputscene;
    QGraphicsScene *outputscene;
};

#endif // MAINWINDOW_H
