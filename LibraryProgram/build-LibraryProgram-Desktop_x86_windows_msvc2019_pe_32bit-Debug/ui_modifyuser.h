/********************************************************************************
** Form generated from reading UI file 'modifyuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYUSER_H
#define UI_MODIFYUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ModifyUser
{
public:

    void setupUi(QDialog *ModifyUser)
    {
        if (ModifyUser->objectName().isEmpty())
            ModifyUser->setObjectName(QString::fromUtf8("ModifyUser"));
        ModifyUser->resize(400, 300);

        retranslateUi(ModifyUser);

        QMetaObject::connectSlotsByName(ModifyUser);
    } // setupUi

    void retranslateUi(QDialog *ModifyUser)
    {
        ModifyUser->setWindowTitle(QApplication::translate("ModifyUser", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyUser: public Ui_ModifyUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYUSER_H
