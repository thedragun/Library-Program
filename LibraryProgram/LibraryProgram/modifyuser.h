#ifndef MODIFYUSER_H
#define MODIFYUSER_H

#include <QDialog>

namespace Ui {
class ModifyUser;
}

class ModifyUser : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyUser(QWidget *parent = nullptr);
    ~ModifyUser();

private:
    Ui::ModifyUser *ui;
};

#endif // MODIFYUSER_H
