#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>

namespace Ui {
class Adduser;
}

class Adduser : public QDialog
{
    Q_OBJECT

public:
    explicit Adduser(QWidget *parent = nullptr);
    ~Adduser();

private slots:
    void on_SaveBtn_clicked();

    void on_AdminRadio_toggled(bool checked);

private:
    Ui::Adduser *ui;
};

#endif // ADDUSER_H
