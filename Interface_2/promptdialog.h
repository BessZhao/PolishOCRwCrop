#ifndef PROMPTDIALOG_H
#define PROMPTDIALOG_H

#include <QDialog>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <iostream>
#include <QPainter>
#include <QMouseEvent>
#include <QImage>
#include "cropdialog.h"

namespace Ui {
class PromptDialog;
}

class PromptDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PromptDialog(QWidget *parent = 0);
    ~PromptDialog();
    void getImage(QImage* myImage);
    bool answer=false;
    QImage* resultImage = new QImage;

public slots:
    void openCropWindow();
    void showImage();

private:
    Ui::PromptDialog *ui;
    CropDialog imageToBeCropped;

};

#endif // PROMPTDIALOG_H
