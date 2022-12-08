#include "addbook.h"
#include "ui_addbook.h"
#include "QFile"
#include "qstring.h"
#include "QTextStream"

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}


void AddBook::on_SaveBtn_clicked()
{
    QString title = ui->TitleLine->text();
    QString author = ui->AuthorLine->text();
    QString genreA = ui->GenreALine->text();
    QString genreB = ui->GenreBLine->text();
    QString id = ui->IdLine->text();
    QString date = ui->dateLine->text();

    QFile catalog("catalog.txt");

    catalog.open(QIODevice::Append);

    QTextStream out(&catalog);
    out << title << "," << author << "," << genreA << "," << genreB << "," << id << "," << date << "\n";

    catalog.close();

    AddBook::close();
}
