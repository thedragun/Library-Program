/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Holder;
    QHBoxLayout *InnerHolder;
    QSpacerItem *verticalSpacer;
    QGridLayout *Form;
    QLabel *GenreATag;
    QLabel *dateTag;
    QLineEdit *GenreBLine;
    QLineEdit *GenreALine;
    QLabel *TitleTag;
    QLineEdit *dateLine;
    QLabel *IdTag;
    QLineEdit *TitleLine;
    QLineEdit *AuthorLine;
    QLabel *AuthorTag;
    QLineEdit *IdLine;
    QLabel *GenreBTag;
    QPushButton *SaveBtn;

    void setupUi(QDialog *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName(QString::fromUtf8("AddBook"));
        AddBook->resize(590, 648);
        verticalLayoutWidget = new QWidget(AddBook);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 571, 631));
        Holder = new QVBoxLayout(verticalLayoutWidget);
        Holder->setObjectName(QString::fromUtf8("Holder"));
        Holder->setContentsMargins(0, 0, 0, 0);
        InnerHolder = new QHBoxLayout();
        InnerHolder->setObjectName(QString::fromUtf8("InnerHolder"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        InnerHolder->addItem(verticalSpacer);

        Form = new QGridLayout();
        Form->setObjectName(QString::fromUtf8("Form"));
        GenreATag = new QLabel(verticalLayoutWidget);
        GenreATag->setObjectName(QString::fromUtf8("GenreATag"));

        Form->addWidget(GenreATag, 2, 0, 1, 1);

        dateTag = new QLabel(verticalLayoutWidget);
        dateTag->setObjectName(QString::fromUtf8("dateTag"));

        Form->addWidget(dateTag, 5, 0, 1, 1);

        GenreBLine = new QLineEdit(verticalLayoutWidget);
        GenreBLine->setObjectName(QString::fromUtf8("GenreBLine"));

        Form->addWidget(GenreBLine, 3, 1, 1, 1);

        GenreALine = new QLineEdit(verticalLayoutWidget);
        GenreALine->setObjectName(QString::fromUtf8("GenreALine"));

        Form->addWidget(GenreALine, 2, 1, 1, 1);

        TitleTag = new QLabel(verticalLayoutWidget);
        TitleTag->setObjectName(QString::fromUtf8("TitleTag"));

        Form->addWidget(TitleTag, 0, 0, 1, 1);

        dateLine = new QLineEdit(verticalLayoutWidget);
        dateLine->setObjectName(QString::fromUtf8("dateLine"));

        Form->addWidget(dateLine, 5, 1, 1, 1);

        IdTag = new QLabel(verticalLayoutWidget);
        IdTag->setObjectName(QString::fromUtf8("IdTag"));

        Form->addWidget(IdTag, 4, 0, 1, 1);

        TitleLine = new QLineEdit(verticalLayoutWidget);
        TitleLine->setObjectName(QString::fromUtf8("TitleLine"));

        Form->addWidget(TitleLine, 0, 1, 1, 1);

        AuthorLine = new QLineEdit(verticalLayoutWidget);
        AuthorLine->setObjectName(QString::fromUtf8("AuthorLine"));

        Form->addWidget(AuthorLine, 1, 1, 1, 1);

        AuthorTag = new QLabel(verticalLayoutWidget);
        AuthorTag->setObjectName(QString::fromUtf8("AuthorTag"));

        Form->addWidget(AuthorTag, 1, 0, 1, 1);

        IdLine = new QLineEdit(verticalLayoutWidget);
        IdLine->setObjectName(QString::fromUtf8("IdLine"));

        Form->addWidget(IdLine, 4, 1, 1, 1);

        GenreBTag = new QLabel(verticalLayoutWidget);
        GenreBTag->setObjectName(QString::fromUtf8("GenreBTag"));

        Form->addWidget(GenreBTag, 3, 0, 1, 1);


        InnerHolder->addLayout(Form);


        Holder->addLayout(InnerHolder);

        SaveBtn = new QPushButton(verticalLayoutWidget);
        SaveBtn->setObjectName(QString::fromUtf8("SaveBtn"));

        Holder->addWidget(SaveBtn);

#ifndef QT_NO_SHORTCUT
        GenreATag->setBuddy(GenreALine);
        dateTag->setBuddy(dateLine);
        TitleTag->setBuddy(TitleLine);
        IdTag->setBuddy(IdLine);
        AuthorTag->setBuddy(AuthorLine);
        GenreBTag->setBuddy(GenreBLine);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(TitleLine, AuthorLine);
        QWidget::setTabOrder(AuthorLine, GenreALine);
        QWidget::setTabOrder(GenreALine, GenreBLine);
        QWidget::setTabOrder(GenreBLine, IdLine);
        QWidget::setTabOrder(IdLine, dateLine);
        QWidget::setTabOrder(dateLine, SaveBtn);

        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QDialog *AddBook)
    {
        AddBook->setWindowTitle(QApplication::translate("AddBook", "Add Book", nullptr));
        GenreATag->setText(QApplication::translate("AddBook", "Genre 1:", nullptr));
        dateTag->setText(QApplication::translate("AddBook", "Date added:", nullptr));
        TitleTag->setText(QApplication::translate("AddBook", "Book Title:", nullptr));
        IdTag->setText(QApplication::translate("AddBook", "Id Number:", nullptr));
        AuthorTag->setText(QApplication::translate("AddBook", "Author Name:", nullptr));
        GenreBTag->setText(QApplication::translate("AddBook", "Genre 2:", nullptr));
        SaveBtn->setText(QApplication::translate("AddBook", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
