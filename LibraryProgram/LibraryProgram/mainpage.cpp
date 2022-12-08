#include "mainpage.h"
#include "ui_mainpage.h"
#include "QTextStream"
#include "QFile"
#include "QString"
#include "QtMath"
#include "QTableWidgetItem"
#include "string"
#include "QMessageBox"
#include "QList"

using namespace std;

MainPage::MainPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::on_AddBookBtn_clicked()
{
    page = new AddBook(this);
           page->show();
}

void MainPage::on_AddUserBtn_clicked()
{
    page2 = new Adduser(this);
            page2->show();
}

void MainPage::on_RefreshBtn_clicked()
{    
    ui->AvalibleTable->clearContents();

    QFile file("catalog.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

    QTextStream in(&file);

    int i = 0;
    while(!in.atEnd()) {
      QString line = in.readLine();
      QStringList cookedLine = line.split(",");

      ui->AvalibleTable->insertRow(1);
      ui->AvalibleTable->setItem(i, 0, new QTableWidgetItem(cookedLine[0]));
      ui->AvalibleTable->setItem(i, 1, new QTableWidgetItem(cookedLine[1]));
      ui->AvalibleTable->setItem(i, 2, new QTableWidgetItem(cookedLine[2]));
      ui->AvalibleTable->setItem(i, 3, new QTableWidgetItem(cookedLine[3]));
      ui->AvalibleTable->setItem(i, 4, new QTableWidgetItem(cookedLine[4]));
      ui->AvalibleTable->setItem(i, 5, new QTableWidgetItem(cookedLine[5]));
      i++;
    }
}

void MainPage::on_RefreshBtn_2_clicked()
{
    ui->issuedTable->clearContents();

    QFile file("issued.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

    QTextStream in(&file);

    int i = 0;
    while(!in.atEnd()) {
      QString line = in.readLine();
      QStringList cookedLine = line.split(",");

      ui->issuedTable->insertRow(1);
      ui->issuedTable->setItem(i, 0, new QTableWidgetItem(cookedLine[0]));
      ui->issuedTable->setItem(i, 1, new QTableWidgetItem(cookedLine[1]));
      ui->issuedTable->setItem(i, 2, new QTableWidgetItem(cookedLine[2]));
      ui->issuedTable->setItem(i, 3, new QTableWidgetItem(cookedLine[3]));
      ui->issuedTable->setItem(i, 4, new QTableWidgetItem(cookedLine[4]));
      ui->issuedTable->setItem(i, 5, new QTableWidgetItem(cookedLine[5]));
      ui->issuedTable->setItem(i, 6, new QTableWidgetItem(cookedLine[6]));
      i++;
    }
    file.close();
}


void MainPage::on_RefreshBtn_3_clicked()
{
    ui->ReturnsTable->clearContents();

    QFile file("overdue.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

    QTextStream in(&file);

    int i = 0;
    while(!in.atEnd()) {
      QString line = in.readLine();
      QStringList cookedLine = line.split(",");

      ui->ReturnsTable->insertRow(1);
      ui->ReturnsTable->setItem(i, 0, new QTableWidgetItem(cookedLine[0]));
      ui->ReturnsTable->setItem(i, 1, new QTableWidgetItem(cookedLine[1]));
      ui->ReturnsTable->setItem(i, 2, new QTableWidgetItem(cookedLine[2]));
      ui->ReturnsTable->setItem(i, 3, new QTableWidgetItem(cookedLine[3]));
      ui->ReturnsTable->setItem(i, 4, new QTableWidgetItem(cookedLine[4]));
      ui->ReturnsTable->setItem(i, 5, new QTableWidgetItem(cookedLine[5]));
      i++;
    }

    file.close();

}


void MainPage::on_RefreshBtn_4_clicked()
{
    ui->UserTable->clearContents();

    QFile file("UserLog.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

    QTextStream in(&file);

    int i = 0;
    while(!in.atEnd()) {
      QString line = in.readLine();
      QStringList cookedLine = line.split(",");

      ui->UserTable->insertRow(1);
      ui->UserTable->setItem(i, 0, new QTableWidgetItem(cookedLine[0]));
      ui->UserTable->setItem(i, 1, new QTableWidgetItem(cookedLine[1]));
      ui->UserTable->setItem(i, 2, new QTableWidgetItem(cookedLine[2]));
      ui->UserTable->setItem(i, 3, new QTableWidgetItem(cookedLine[3]));
      ui->UserTable->setItem(i, 4, new QTableWidgetItem(cookedLine[4]));
      ui->UserTable->setItem(i, 5, new QTableWidgetItem(cookedLine[5]));
      i++;
    }

    file.close();
}


void MainPage::on_IssueBtn_clicked()
{
    QFile file("issued.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
            return;

    QTextStream in(&file);

    int row = ui->RowSelect->value();

    QString title = ui->AvalibleTable->item(row, 0)->text();
    QString author = ui->AvalibleTable->item(row, 1)->text();
    QString genreA = ui->AvalibleTable->item(row, 2)->text();
    QString genreB = ui->AvalibleTable->item(row, 3)->text();
    QString id = ui->AvalibleTable->item(row, 4)->text();
    QString lastdue = ui->AvalibleTable->item(row, 5)->text();
    QString issuerName = ui->issuerLine->text();
    QString returned = "false";



    in << issuerName << "," << returned <<  "," << title << "," << author << "," << genreA << "," << genreB << "," << id << "," << lastdue << "\n";


    file.close();
}


void MainPage::on_ReturnBtn_clicked()
{
    QFile file("Overdue.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
            return;

    QTextStream in(&file);

    int row = ui->RowSelect->value();

    QString title = ui->AvalibleTable->item(row, 0)->text();
    QString author = ui->AvalibleTable->item(row, 1)->text();
    QString genreA = ui->AvalibleTable->item(row, 2)->text();
    QString genreB = ui->AvalibleTable->item(row, 3)->text();
    QString id = ui->AvalibleTable->item(row, 4)->text();
    QString lastdue = ui->AvalibleTable->item(row, 5)->text();
    QString issuerName = ui->issuerLine->text();
    QString returned = "true";

    in << issuerName << "," << returned <<  "," << title << "," << author << "," << genreA << "," << genreB << "," << id << "," << lastdue << "\n";

    file.close();
}

