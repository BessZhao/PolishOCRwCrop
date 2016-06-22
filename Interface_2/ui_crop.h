/********************************************************************************
** Form generated from reading UI file 'crop.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROP_H
#define UI_CROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crop
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *crop)
    {
        if (crop->objectName().isEmpty())
            crop->setObjectName(QStringLiteral("crop"));
        crop->resize(800, 600);
        menubar = new QMenuBar(crop);
        menubar->setObjectName(QStringLiteral("menubar"));
        crop->setMenuBar(menubar);
        centralwidget = new QWidget(crop);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        crop->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(crop);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        crop->setStatusBar(statusbar);

        retranslateUi(crop);

        QMetaObject::connectSlotsByName(crop);
    } // setupUi

    void retranslateUi(QMainWindow *crop)
    {
        crop->setWindowTitle(QApplication::translate("crop", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class crop: public Ui_crop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROP_H
