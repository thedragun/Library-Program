#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>
#include <addbook.h>
#include <adduser.h>
#include <modifybook.h>
#include <modifyuser.h>
#include <QTableWidgetItem>

namespace Ui {
class MainPage;
}

class MainPage : public QDialog
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_AddBookBtn_clicked();

    void on_AddUserBtn_clicked();

    void on_RefreshBtn_clicked();

    void on_RefreshBtn_2_clicked();

    void on_RefreshBtn_3_clicked();

    void on_RefreshBtn_4_clicked();

    void on_IssueBtn_clicked();

    void on_ReturnBtn_clicked();

private:
    Ui::MainPage *ui;
    AddBook *page;
    Adduser *page2;
    ModifyBook *page3;
    ModifyUser *page4;
};

#endif // MAINPAGE_H
