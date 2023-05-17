#include "adminmenu.h"
#include "ui_adminmenu.h"

AdminMenu::AdminMenu(QWidget *parent,Admin *newAdmin) :
    QMainWindow(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);
    this->admin=newAdmin;
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

