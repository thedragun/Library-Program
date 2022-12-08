/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *SideBar;
    QHBoxLayout *SearchBar;
    QLabel *UserToolsTag;
    QLabel *label;
    QLineEdit *issuerLine;
    QSpinBox *RowSelect;
    QPushButton *IssueBtn;
    QPushButton *ReturnBtn;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *AdminTools;
    QLabel *AdminToolsTag;
    QPushButton *AddBookBtn;
    QPushButton *ModifyBookBtn;
    QPushButton *AddUserBtn;
    QPushButton *ModifyUserBtn;
    QTabWidget *Catalog;
    QWidget *Books;
    QTabWidget *BooksSub;
    QWidget *Issued;
    QTableWidget *issuedTable;
    QPushButton *RefreshBtn_2;
    QWidget *Avalible;
    QTableWidget *AvalibleTable;
    QPushButton *RefreshBtn;
    QWidget *Returned;
    QTableWidget *OverdueTable;
    QPushButton *RefreshBtn_3;
    QWidget *Users;
    QTableWidget *UserTable;
    QPushButton *RefreshBtn_4;

    void setupUi(QDialog *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName(QString::fromUtf8("MainPage"));
        MainPage->resize(1080, 580);
        verticalLayoutWidget = new QWidget(MainPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 307, 561));
        SideBar = new QVBoxLayout(verticalLayoutWidget);
        SideBar->setObjectName(QString::fromUtf8("SideBar"));
        SideBar->setContentsMargins(0, 0, 0, 0);
        SearchBar = new QHBoxLayout();
        SearchBar->setObjectName(QString::fromUtf8("SearchBar"));

        SideBar->addLayout(SearchBar);

        UserToolsTag = new QLabel(verticalLayoutWidget);
        UserToolsTag->setObjectName(QString::fromUtf8("UserToolsTag"));

        SideBar->addWidget(UserToolsTag);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        SideBar->addWidget(label);

        issuerLine = new QLineEdit(verticalLayoutWidget);
        issuerLine->setObjectName(QString::fromUtf8("issuerLine"));

        SideBar->addWidget(issuerLine);

        RowSelect = new QSpinBox(verticalLayoutWidget);
        RowSelect->setObjectName(QString::fromUtf8("RowSelect"));

        SideBar->addWidget(RowSelect);

        IssueBtn = new QPushButton(verticalLayoutWidget);
        IssueBtn->setObjectName(QString::fromUtf8("IssueBtn"));

        SideBar->addWidget(IssueBtn);

        ReturnBtn = new QPushButton(verticalLayoutWidget);
        ReturnBtn->setObjectName(QString::fromUtf8("ReturnBtn"));

        SideBar->addWidget(ReturnBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        SideBar->addItem(verticalSpacer);

        AdminTools = new QVBoxLayout();
        AdminTools->setObjectName(QString::fromUtf8("AdminTools"));
        AdminToolsTag = new QLabel(verticalLayoutWidget);
        AdminToolsTag->setObjectName(QString::fromUtf8("AdminToolsTag"));

        AdminTools->addWidget(AdminToolsTag);

        AddBookBtn = new QPushButton(verticalLayoutWidget);
        AddBookBtn->setObjectName(QString::fromUtf8("AddBookBtn"));

        AdminTools->addWidget(AddBookBtn);

        ModifyBookBtn = new QPushButton(verticalLayoutWidget);
        ModifyBookBtn->setObjectName(QString::fromUtf8("ModifyBookBtn"));

        AdminTools->addWidget(ModifyBookBtn);

        AddUserBtn = new QPushButton(verticalLayoutWidget);
        AddUserBtn->setObjectName(QString::fromUtf8("AddUserBtn"));

        AdminTools->addWidget(AddUserBtn);

        ModifyUserBtn = new QPushButton(verticalLayoutWidget);
        ModifyUserBtn->setObjectName(QString::fromUtf8("ModifyUserBtn"));

        AdminTools->addWidget(ModifyUserBtn);


        SideBar->addLayout(AdminTools);

        Catalog = new QTabWidget(MainPage);
        Catalog->setObjectName(QString::fromUtf8("Catalog"));
        Catalog->setGeometry(QRect(320, 10, 751, 561));
        Catalog->setCursor(QCursor(Qt::ArrowCursor));
        Books = new QWidget();
        Books->setObjectName(QString::fromUtf8("Books"));
        BooksSub = new QTabWidget(Books);
        BooksSub->setObjectName(QString::fromUtf8("BooksSub"));
        BooksSub->setGeometry(QRect(0, 0, 741, 531));
        Issued = new QWidget();
        Issued->setObjectName(QString::fromUtf8("Issued"));
        issuedTable = new QTableWidget(Issued);
        if (issuedTable->columnCount() < 8)
            issuedTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        issuedTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (issuedTable->rowCount() < 1)
            issuedTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        issuedTable->setVerticalHeaderItem(0, __qtablewidgetitem8);
        issuedTable->setObjectName(QString::fromUtf8("issuedTable"));
        issuedTable->setGeometry(QRect(0, 30, 731, 471));
        issuedTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RefreshBtn_2 = new QPushButton(Issued);
        RefreshBtn_2->setObjectName(QString::fromUtf8("RefreshBtn_2"));
        RefreshBtn_2->setGeometry(QRect(430, 0, 299, 28));
        BooksSub->addTab(Issued, QString());
        Avalible = new QWidget();
        Avalible->setObjectName(QString::fromUtf8("Avalible"));
        AvalibleTable = new QTableWidget(Avalible);
        if (AvalibleTable->columnCount() < 6)
            AvalibleTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        AvalibleTable->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        AvalibleTable->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        AvalibleTable->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        AvalibleTable->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        AvalibleTable->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        AvalibleTable->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        if (AvalibleTable->rowCount() < 1)
            AvalibleTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        AvalibleTable->setVerticalHeaderItem(0, __qtablewidgetitem15);
        AvalibleTable->setObjectName(QString::fromUtf8("AvalibleTable"));
        AvalibleTable->setGeometry(QRect(0, 30, 731, 471));
        AvalibleTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RefreshBtn = new QPushButton(Avalible);
        RefreshBtn->setObjectName(QString::fromUtf8("RefreshBtn"));
        RefreshBtn->setGeometry(QRect(430, 0, 299, 28));
        BooksSub->addTab(Avalible, QString());
        Returned = new QWidget();
        Returned->setObjectName(QString::fromUtf8("Returned"));
        OverdueTable = new QTableWidget(Returned);
        if (OverdueTable->columnCount() < 6)
            OverdueTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        OverdueTable->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        OverdueTable->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        OverdueTable->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        OverdueTable->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        OverdueTable->setHorizontalHeaderItem(4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        OverdueTable->setHorizontalHeaderItem(5, __qtablewidgetitem21);
        if (OverdueTable->rowCount() < 1)
            OverdueTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        OverdueTable->setVerticalHeaderItem(0, __qtablewidgetitem22);
        OverdueTable->setObjectName(QString::fromUtf8("OverdueTable"));
        OverdueTable->setGeometry(QRect(0, 30, 731, 471));
        OverdueTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RefreshBtn_3 = new QPushButton(Returned);
        RefreshBtn_3->setObjectName(QString::fromUtf8("RefreshBtn_3"));
        RefreshBtn_3->setGeometry(QRect(430, 0, 299, 28));
        BooksSub->addTab(Returned, QString());
        Catalog->addTab(Books, QString());
        Users = new QWidget();
        Users->setObjectName(QString::fromUtf8("Users"));
        UserTable = new QTableWidget(Users);
        if (UserTable->columnCount() < 6)
            UserTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(5, __qtablewidgetitem28);
        if (UserTable->rowCount() < 1)
            UserTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        UserTable->setVerticalHeaderItem(0, __qtablewidgetitem29);
        UserTable->setObjectName(QString::fromUtf8("UserTable"));
        UserTable->setGeometry(QRect(0, 30, 741, 501));
        RefreshBtn_4 = new QPushButton(Users);
        RefreshBtn_4->setObjectName(QString::fromUtf8("RefreshBtn_4"));
        RefreshBtn_4->setGeometry(QRect(440, 0, 299, 28));
        Catalog->addTab(Users, QString());
        QWidget::setTabOrder(AddBookBtn, ModifyBookBtn);
        QWidget::setTabOrder(ModifyBookBtn, AddUserBtn);
        QWidget::setTabOrder(AddUserBtn, ModifyUserBtn);
        QWidget::setTabOrder(ModifyUserBtn, Catalog);
        QWidget::setTabOrder(Catalog, BooksSub);
        QWidget::setTabOrder(BooksSub, RefreshBtn);
        QWidget::setTabOrder(RefreshBtn, AvalibleTable);
        QWidget::setTabOrder(AvalibleTable, OverdueTable);
        QWidget::setTabOrder(OverdueTable, UserTable);
        QWidget::setTabOrder(UserTable, issuedTable);
        QWidget::setTabOrder(issuedTable, RefreshBtn_2);
        QWidget::setTabOrder(RefreshBtn_2, RefreshBtn_3);

        retranslateUi(MainPage);

        Catalog->setCurrentIndex(0);
        BooksSub->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QDialog *MainPage)
    {
        MainPage->setWindowTitle(QApplication::translate("MainPage", "Catalog", nullptr));
        UserToolsTag->setText(QApplication::translate("MainPage", "User Tools", nullptr));
        label->setText(QApplication::translate("MainPage", "please enter issuer  name then Click on a book to issue book;", nullptr));
        issuerLine->setPlaceholderText(QApplication::translate("MainPage", "Issuer Full Name", nullptr));
        IssueBtn->setText(QApplication::translate("MainPage", "Issue Book", nullptr));
        ReturnBtn->setText(QApplication::translate("MainPage", "Return Book", nullptr));
        AdminToolsTag->setText(QApplication::translate("MainPage", "Administrator Tools", nullptr));
        AddBookBtn->setText(QApplication::translate("MainPage", "Add Book", nullptr));
        ModifyBookBtn->setText(QApplication::translate("MainPage", "Modify Book Info", nullptr));
        AddUserBtn->setText(QApplication::translate("MainPage", "Add User", nullptr));
        ModifyUserBtn->setText(QApplication::translate("MainPage", "Modify User Info", nullptr));
        QTableWidgetItem *___qtablewidgetitem = issuedTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainPage", "Issuer Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = issuedTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainPage", "Returned", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = issuedTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainPage", "Book Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = issuedTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainPage", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = issuedTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainPage", "Genre A", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = issuedTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainPage", "Genre B", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = issuedTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainPage", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = issuedTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainPage", "Last Due", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = issuedTable->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainPage", "1", nullptr));
        RefreshBtn_2->setText(QApplication::translate("MainPage", "Refresh", nullptr));
        BooksSub->setTabText(BooksSub->indexOf(Issued), QApplication::translate("MainPage", "Issued", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = AvalibleTable->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainPage", "Book Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = AvalibleTable->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainPage", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = AvalibleTable->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainPage", "Genre A", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = AvalibleTable->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("MainPage", "Genre B", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = AvalibleTable->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("MainPage", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = AvalibleTable->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("MainPage", "Last Due", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = AvalibleTable->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainPage", "1", nullptr));
        RefreshBtn->setText(QApplication::translate("MainPage", "Refresh", nullptr));
        BooksSub->setTabText(BooksSub->indexOf(Avalible), QApplication::translate("MainPage", "Avalible", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = OverdueTable->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainPage", "Book Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = OverdueTable->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainPage", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = OverdueTable->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MainPage", "Genre A", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = OverdueTable->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("MainPage", "Genre B", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = OverdueTable->horizontalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("MainPage", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = OverdueTable->horizontalHeaderItem(5);
        ___qtablewidgetitem21->setText(QApplication::translate("MainPage", "Last Due", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = OverdueTable->verticalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainPage", "1", nullptr));
        RefreshBtn_3->setText(QApplication::translate("MainPage", "Refresh", nullptr));
        BooksSub->setTabText(BooksSub->indexOf(Returned), QApplication::translate("MainPage", "Returns", nullptr));
        Catalog->setTabText(Catalog->indexOf(Books), QApplication::translate("MainPage", "Books", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = UserTable->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainPage", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = UserTable->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("MainPage", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = UserTable->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("MainPage", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = UserTable->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("MainPage", "Username", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = UserTable->horizontalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("MainPage", "Password", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = UserTable->horizontalHeaderItem(5);
        ___qtablewidgetitem28->setText(QApplication::translate("MainPage", "Permissions", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = UserTable->verticalHeaderItem(0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainPage", "1", nullptr));
        RefreshBtn_4->setText(QApplication::translate("MainPage", "Refresh", nullptr));
        Catalog->setTabText(Catalog->indexOf(Users), QApplication::translate("MainPage", "Users", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
