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
    void refreshAllItems();
    void refreshCart();
    ~VendorMenu();

private:
    Ui::VendorMenu *ui;
    Vendor *vendor;
    std::vector<Item> allItem;
signals:
    void finished();
protected:
    void closeEvent(QCloseEvent* event) override;
private slots:
    void on_venderCart_cellActivated(int row, int column);
    void on_reload_clicked();
    void on_deny_clicked();
    void on_aprove_clicked();
    void on_logOut_clicked();
};

#endif // VENDORMENU_H
