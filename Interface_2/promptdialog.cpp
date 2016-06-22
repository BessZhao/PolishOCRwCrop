#include "promptdialog.h"
#include "ui_promptdialog.h"

PromptDialog::PromptDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PromptDialog)
{
    ui->setupUi(this);
    QLabel* askforCrop = new QLabel;
    askforCrop->setText("Do you want to crop this image? ");
    QHBoxLayout* yesOrNoLayout = new QHBoxLayout;
    QVBoxLayout* promptLayout = new QVBoxLayout;
    promptLayout->addWidget(askforCrop);
    QPushButton* yes = new QPushButton;
    QPushButton* no = new QPushButton;
    yes->setText("Yes");
    no->setText("No");
    yesOrNoLayout->addWidget(yes);
    yesOrNoLayout->addWidget(no);
    promptLayout->addLayout(yesOrNoLayout);

    QObject::connect(yes,SIGNAL(clicked()),this,SLOT(openCropWindow()));
    QObject::connect(no,SIGNAL(clicked()),this,SLOT(showImage()));

    this->setLayout(promptLayout);
}

void PromptDialog::showImage()
{
    answer = true;
    this->close();
}

void PromptDialog::openCropWindow()
{
    this->close();
    imageToBeCropped.exec();

    resultImage = imageToBeCropped.getCroppedImage();

    //imageToBeCropped.close();
}

void PromptDialog::getImage(QImage* myImage){
    imageToBeCropped.getImage(myImage);
}

PromptDialog::~PromptDialog()
{
    delete ui;
}
