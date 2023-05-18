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
    void refreshCart();
    void refreshAllItems();
    ~AdminMenu();

private slots:

    void on_allItems_cellActivated(int row, int column);

    void on_removeFromCart_clicked();

    void on_itemCart_cellActivated(int row, int column);

    void on_pushButton_clicked();

    void on_itemCatagory_forCart_currentTextChanged(const QString &arg1);

    void on_addToCart_forCart_clicked();

    void on_addItem_clicked();

    void on_refeshCart_clicked();

    void on_itemQuantity_Cart_valueChanged(int arg1);

    void on_sendToVendor_clicked();

    void on_removeItem_clicked();

private:
    Ui::AdminMenu *ui;
    Admin *admin;

    std::vector<Item> allItem;
    std::vector<std::string> allCatagory;
};

#endif // ADMINMENU_H
