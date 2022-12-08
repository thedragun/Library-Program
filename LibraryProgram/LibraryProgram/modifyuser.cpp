#include "modifyuser.h"
#include "ui_modifyuser.h"
#include "fstream"

ModifyUser::ModifyUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyUser)
{
    ui->setupUi(this);
}

ModifyUser::~ModifyUser()
{
    delete ui;
}
