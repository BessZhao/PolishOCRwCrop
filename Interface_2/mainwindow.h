/*Polish OCR
 * Name: Bess Zhao;Jennifer Okamura;Jack Wu;Simon Hua;Zane Karl
 *
 * Turn gif image of polish articles into txt file
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "promptdialog.h"
#include <QMainWindow>
#include <QProcess>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFileDialog>
#include <iostream>
#include <QImage>
#include <QLabel>
#include <QPainter>
#include <QCheckBox>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <iostream>
#include <QEvent>
#include <QDebug>
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QList>
#include <QString>
#include <QHttpMultiPart>
#include <QFile>
#include <QScriptEngine>
#include <QDir>
#include <QVariantMap>
#include <QByteArray>
#include <QMessageBox>
#include <QScrollArea>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QImage* greyScale(QImage* origin);
   // quint64 dir_size(const QString & str);

public slots:
    void chooseFile();
    void recognize();
    void networkData();
    void saveToFile();


private:
    Ui::MainWindow *ui;
    QString fileName;
    QString saveLocation;
    QString text;
    QLabel* gifImage = new QLabel;
    QImage* originalImage = new QImage;//original image
    QImage* greyScaleImage = new QImage;//greyscaled image
    QLabel* displayImage;
    QLabel* displayText;
    QNetworkReply* reply;
    QNetworkAccessManager* manager;
    PromptDialog askForCrop;

    //****ADDED 6-22
    QScrollArea* textScrollArea;
    QScrollArea* imageScrollArea;

};

#endif // MAINWINDOW_H
