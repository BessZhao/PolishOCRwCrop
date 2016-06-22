/********************************************************************************
** Form generated from reading UI file 'promptdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMPTDIALOG_H
#define UI_PROMPTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_PromptDialog
{
public:

    void setupUi(QDialog *PromptDialog)
    {
        if (PromptDialog->objectName().isEmpty())
            PromptDialog->setObjectName(QStringLiteral("PromptDialog"));
        PromptDialog->resize(400, 300);

        retranslateUi(PromptDialog);

        QMetaObject::connectSlotsByName(PromptDialog);
    } // setupUi

    void retranslateUi(QDialog *PromptDialog)
    {
        PromptDialog->setWindowTitle(QApplication::translate("PromptDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class PromptDialog: public Ui_PromptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMPTDIALOG_H
