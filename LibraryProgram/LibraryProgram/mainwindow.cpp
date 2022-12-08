#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainpage.h"
#include "QMessageBox"
#include "QTextStream"
#include "QFile"
#include "QString"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_LoginBtn_pressed()//sign in checks
{

//  bool userDetected = false;
//  bool passDetected = false;

//   QString searchUser = ui->Username->text();
//    QFile file("UserLog.txt");
//    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
//         return;
//   QTextStream in  (&file);
// QString line;
//
//    line = file.readAll();
//
//    QStringList splitLine = line.split(',');
//
    //-------------------------------------------------------------------------------
//    do {
//    if (splitLine.contains(searchUser)) {
//    userDetected = true;
//    break;
//    }
//    } while (!line.isNull());
    //--------------------------------------------------------------------------------
//    QString searchPass = ui->Password->text();
//    do {
//    if (splitLine.contains(searchPass)) {
//    passDetected = true;
//    break;
//    }
//    } while (!line.isNull());

//    if (userDetected == true && passDetected == true) {

            page = new MainPage(this);
                   page->show();
//    } else {
//        QMessageBox incorrect;
//        incorrect.setText("incorrect username or password.");
//        incorrect.exec();
//    }
//    file.close();

//    MainWindow::hide();
}
