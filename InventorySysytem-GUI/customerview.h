#ifndef CUSTOMERVIEW_H
#define CUSTOMERVIEW_H

#include <QMainWindow>

#include "Class/customer.h"

namespace Ui {
class CustomerView;
}

class CustomerView : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomerView(QWidget *parent = nullptr,Customer *_custmerMenu=nullptr);
    ~CustomerView();

private:
    Ui::CustomerView *ui;
    Customer *customerMenu;
};

#endif // CUSTOMERVIEW_H
