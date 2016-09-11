#ifndef CROPDIALOG_H
#define CROPDIALOG_H

#include <QDialog>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <iostream>
#include <QPainter>
#include <QMouseEvent>
#include <QDesktopWidget>
#include <QToolBar>

namespace Ui {
class CropDialog;
}

class CropDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CropDialog(QWidget *parent = 0);
    ~CropDialog();
    void getImage(QImage* myImage);
    QImage* getCroppedImage();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
   // bool done=false;

private:
    Ui::CropDialog *ui;
    QImage* wholeImage = new QImage;
    QLabel* imageLabel = new QLabel;
    QRect myRect;
    bool mousePressed=false;
    QPainter painter;
    QImage* croppedImage;
    int x,y;

};

#endif // CROPDIALOG_H
