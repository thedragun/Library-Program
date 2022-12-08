#ifndef MODIFYBOOK_H
#define MODIFYBOOK_H

#include <QDialog>

namespace Ui {
class ModifyBook;
}

class ModifyBook : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyBook(QWidget *parent = nullptr);
    ~ModifyBook();

private:
    Ui::ModifyBook *ui;
};

#endif // MODIFYBOOK_H
