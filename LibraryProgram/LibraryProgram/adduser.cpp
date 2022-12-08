#include "adduser.h"
#include "ui_adduser.h"
#include "QFile"
#include "QTextStream"

Adduser::Adduser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adduser)
{
    ui->setupUi(this);
}

Adduser::~Adduser()
{
    delete ui;
}

QString status;

void Adduser::on_AdminRadio_toggled(bool checked)
{
    if(checked == true) {
        status = "Admin";
    } else {
        status = "User";
    }
}

void Adduser::on_SaveBtn_clicked()
{

    QString firstName = ui->FirstLine->text();
    QString lastName = ui->LastLine->text();
    QString Username = ui->UserLine->text();
    QString Password = ui->PassLine->text();
    int Age = ui->AgeSpin->value();

    QFile User("Userlog.txt");

    User.open(QIODevice::WriteOnly);

    QTextStream out(&User);
    out <<  firstName << "," << lastName << "," << Age << "," << Username << "," << Password << "," << status << " \n";

    User.close();

    Adduser::close();
}
