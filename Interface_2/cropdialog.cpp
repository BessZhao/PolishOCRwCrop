#include "cropdialog.h"
#include "ui_cropdialog.h"

CropDialog::CropDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CropDialog)
{
    ui->setupUi(this);

    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(imageLabel);
    this->setLayout(layout);
}

CropDialog::~CropDialog()
{
    delete ui;
}

void CropDialog::getImage(QImage *myImage)
{
    wholeImage = myImage;
    imageLabel->setPixmap(QPixmap::fromImage(*wholeImage));
    imageLabel->setAlignment(Qt::AlignLeft);
    //imageLabel->setScaledContents(true);
}

void  CropDialog::mousePressEvent(QMouseEvent* event){
    //Mouse is pressed for the first time
    mousePressed = true;

    //set the initial line points, both are same
    myRect.setTopLeft(event->pos()); //std::cout<<"pos: "<<event->x()<<","<<event->y()<<std::endl;
    myRect.setBottomRight(event->pos());

}

void  CropDialog::mouseMoveEvent(QMouseEvent* event){

    //As mouse is moving set the second point again and again
    // and update continuously
    if(event->type() == QEvent::MouseMove){
            myRect.setBottomRight(event->pos());//std::cout<<"pos: "<<event->x()<<","<<event->y()<<std::endl;//imageLabel->setPixmap(QPixmap::fromImage(*wholeImage));
    }

    //it calls the paintEven() function continuously
    update();

    //repaint();
    //imageLabel->setPixmap(QPixmap::fromImage(*wholeImage));
}

void  CropDialog::mouseReleaseEvent(QMouseEvent *event){

    //When mouse is released update for the one last time
    //mousePressed = false;
    update();
    croppedImage=new QImage(wholeImage->copy(myRect));

    //test
    QLabel* show1=new QLabel ;
    show1->setPixmap(QPixmap::fromImage(*croppedImage));
    show1->show();

    //repaint();
    //imageLabel->setPixmap(QPixmap::fromImage(*wholeImage));
    this->close();
}

void  CropDialog::paintEvent(QPaintEvent *event){

    QImage copy = *wholeImage;
    painter.begin(&copy);


    painter.drawRect(myRect);

    imageLabel->setPixmap(QPixmap::fromImage(copy));

    painter.end();

}

QImage*  CropDialog::getCroppedImage()
 {
     return croppedImage;
 }
