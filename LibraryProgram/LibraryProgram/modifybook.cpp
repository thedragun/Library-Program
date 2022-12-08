#include "modifybook.h"
#include "ui_modifybook.h"
#include "fstream"

ModifyBook::ModifyBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyBook)
{
    ui->setupUi(this);
}

ModifyBook::~ModifyBook()
{
    delete ui;
}
