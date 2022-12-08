/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adduser
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *holder;
    QHBoxLayout *innerHolder;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *Form;
    QGridLayout *gridLayout;
    QSpinBox *AgeSpin;
    QLabel *RoleTag;
    QLabel *LastTag;
    QLineEdit *FirstLine;
    QLabel *AgeTag;
    QLineEdit *UserLine;
    QLabel *FirstTag;
    QLineEdit *LastLine;
    QHBoxLayout *RoleField;
    QRadioButton *AdminRadio;
    QRadioButton *UserRadio;
    QLineEdit *PassLine;
    QLabel *UserTag;
    QLabel *PassTag;
    QPushButton *SaveBtn;

    void setupUi(QDialog *Adduser)
    {
        if (Adduser->objectName().isEmpty())
            Adduser->setObjectName(QString::fromUtf8("Adduser"));
        Adduser->resize(616, 645);
        verticalLayoutWidget = new QWidget(Adduser);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 591, 621));
        holder = new QVBoxLayout(verticalLayoutWidget);
        holder->setObjectName(QString::fromUtf8("holder"));
        holder->setContentsMargins(0, 0, 0, 0);
        innerHolder = new QHBoxLayout();
        innerHolder->setObjectName(QString::fromUtf8("innerHolder"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        innerHolder->addItem(verticalSpacer);

        Form = new QVBoxLayout();
        Form->setObjectName(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        AgeSpin = new QSpinBox(verticalLayoutWidget);
        AgeSpin->setObjectName(QString::fromUtf8("AgeSpin"));

        gridLayout->addWidget(AgeSpin, 3, 2, 1, 1);

        RoleTag = new QLabel(verticalLayoutWidget);
        RoleTag->setObjectName(QString::fromUtf8("RoleTag"));

        gridLayout->addWidget(RoleTag, 6, 1, 1, 1);

        LastTag = new QLabel(verticalLayoutWidget);
        LastTag->setObjectName(QString::fromUtf8("LastTag"));

        gridLayout->addWidget(LastTag, 2, 1, 1, 1);

        FirstLine = new QLineEdit(verticalLayoutWidget);
        FirstLine->setObjectName(QString::fromUtf8("FirstLine"));

        gridLayout->addWidget(FirstLine, 1, 2, 1, 1);

        AgeTag = new QLabel(verticalLayoutWidget);
        AgeTag->setObjectName(QString::fromUtf8("AgeTag"));

        gridLayout->addWidget(AgeTag, 3, 1, 1, 1);

        UserLine = new QLineEdit(verticalLayoutWidget);
        UserLine->setObjectName(QString::fromUtf8("UserLine"));

        gridLayout->addWidget(UserLine, 4, 2, 1, 1);

        FirstTag = new QLabel(verticalLayoutWidget);
        FirstTag->setObjectName(QString::fromUtf8("FirstTag"));

        gridLayout->addWidget(FirstTag, 1, 1, 1, 1);

        LastLine = new QLineEdit(verticalLayoutWidget);
        LastLine->setObjectName(QString::fromUtf8("LastLine"));

        gridLayout->addWidget(LastLine, 2, 2, 1, 1);

        RoleField = new QHBoxLayout();
        RoleField->setObjectName(QString::fromUtf8("RoleField"));
        AdminRadio = new QRadioButton(verticalLayoutWidget);
        AdminRadio->setObjectName(QString::fromUtf8("AdminRadio"));

        RoleField->addWidget(AdminRadio);

        UserRadio = new QRadioButton(verticalLayoutWidget);
        UserRadio->setObjectName(QString::fromUtf8("UserRadio"));

        RoleField->addWidget(UserRadio);


        gridLayout->addLayout(RoleField, 6, 2, 1, 1);

        PassLine = new QLineEdit(verticalLayoutWidget);
        PassLine->setObjectName(QString::fromUtf8("PassLine"));

        gridLayout->addWidget(PassLine, 5, 2, 1, 1);

        UserTag = new QLabel(verticalLayoutWidget);
        UserTag->setObjectName(QString::fromUtf8("UserTag"));

        gridLayout->addWidget(UserTag, 4, 1, 1, 1);

        PassTag = new QLabel(verticalLayoutWidget);
        PassTag->setObjectName(QString::fromUtf8("PassTag"));
        PassTag->setCursor(QCursor(Qt::ArrowCursor));

        gridLayout->addWidget(PassTag, 5, 1, 1, 1);


        Form->addLayout(gridLayout);


        innerHolder->addLayout(Form);


        holder->addLayout(innerHolder);

        SaveBtn = new QPushButton(verticalLayoutWidget);
        SaveBtn->setObjectName(QString::fromUtf8("SaveBtn"));

        holder->addWidget(SaveBtn);

#ifndef QT_NO_SHORTCUT
        LastTag->setBuddy(LastLine);
        AgeTag->setBuddy(AgeSpin);
        FirstTag->setBuddy(FirstLine);
        UserTag->setBuddy(UserLine);
        PassTag->setBuddy(PassLine);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(FirstLine, LastLine);
        QWidget::setTabOrder(LastLine, AgeSpin);
        QWidget::setTabOrder(AgeSpin, AdminRadio);
        QWidget::setTabOrder(AdminRadio, UserRadio);
        QWidget::setTabOrder(UserRadio, SaveBtn);

        retranslateUi(Adduser);

        QMetaObject::connectSlotsByName(Adduser);
    } // setupUi

    void retranslateUi(QDialog *Adduser)
    {
        Adduser->setWindowTitle(QApplication::translate("Adduser", "Add User", nullptr));
        RoleTag->setText(QApplication::translate("Adduser", "Role:", nullptr));
        LastTag->setText(QApplication::translate("Adduser", "Last Name:", nullptr));
        AgeTag->setText(QApplication::translate("Adduser", "Age:", nullptr));
        FirstTag->setText(QApplication::translate("Adduser", "First Name:", nullptr));
        AdminRadio->setText(QApplication::translate("Adduser", "Administrator", nullptr));
        UserRadio->setText(QApplication::translate("Adduser", "User", nullptr));
        UserTag->setText(QApplication::translate("Adduser", "Username", nullptr));
        PassTag->setText(QApplication::translate("Adduser", "Password", nullptr));
        SaveBtn->setText(QApplication::translate("Adduser", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adduser: public Ui_Adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
