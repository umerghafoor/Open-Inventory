#include "vendormenu.h"
#include "ui_vendormenu.h"

VendorMenu::VendorMenu(QWidget *parent,Vendor *_vendorMenu) :
    QMainWindow(parent),
    ui(new Ui::VendorMenu)
{
    ui->setupUi(this);
    vendor=_vendorMenu;
}

VendorMenu::~VendorMenu()
{
    delete ui;
}
