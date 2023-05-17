#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QMainWindow>

#include "Class/admin.h"

namespace Ui {
class AdminMenu;
}

class AdminMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminMenu(QWidget *parent = nullptr,Admin *admin=nullptr);
    ~AdminMenu();

private slots:

private:
    Ui::AdminMenu *ui;
    Admin *admin;
};

#endif // ADMINMENU_H
