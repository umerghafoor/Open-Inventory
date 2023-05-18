#ifndef VENDORMENU_H
#define VENDORMENU_H

#include <QMainWindow>

#include "Class/venderor.h"

namespace Ui {
class VendorMenu;
}

class VendorMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit VendorMenu(QWidget *parent = nullptr,Vendor *_vendorMenu=nullptr);
    ~VendorMenu();

private:
    Ui::VendorMenu *ui;
    Vendor *vendor;
    std::vector<Item> allItem;
};

#endif // VENDORMENU_H
