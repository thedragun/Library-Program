/********************************************************************************
** Form generated from reading UI file 'modifybook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYBOOK_H
#define UI_MODIFYBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyBook
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QDialog *ModifyBook)
    {
        if (ModifyBook->objectName().isEmpty())
            ModifyBook->setObjectName(QString::fromUtf8("ModifyBook"));
        ModifyBook->resize(895, 635);
        gridLayoutWidget = new QWidget(ModifyBook);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 881, 621));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(ModifyBook);

        QMetaObject::connectSlotsByName(ModifyBook);
    } // setupUi

    void retranslateUi(QDialog *ModifyBook)
    {
        ModifyBook->setWindowTitle(QApplication::translate("ModifyBook", "Modify books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyBook: public Ui_ModifyBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYBOOK_H
