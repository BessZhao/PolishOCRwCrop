/********************************************************************************
** Form generated from reading UI file 'cropdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROPDIALOG_H
#define UI_CROPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CropDialog
{
public:

    void setupUi(QDialog *CropDialog)
    {
        if (CropDialog->objectName().isEmpty())
            CropDialog->setObjectName(QStringLiteral("CropDialog"));
        CropDialog->resize(400, 300);

        retranslateUi(CropDialog);

        QMetaObject::connectSlotsByName(CropDialog);
    } // setupUi

    void retranslateUi(QDialog *CropDialog)
    {
        CropDialog->setWindowTitle(QApplication::translate("CropDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CropDialog: public Ui_CropDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROPDIALOG_H
