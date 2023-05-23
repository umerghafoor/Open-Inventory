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
    void refreshAllUsers();
    void refreshAllEmployee();
    void refreshReport(std::string);
    ~AdminMenu();

private slots:

    void on_allItems_cellActivated(int row, int column);

    void on_removeFromCart_clicked();

    void on_vendorCart_cellActivated(int row, int column);

    void on_pushButton_clicked();

    void on_itemCatagory_forCart_currentTextChanged(const QString &arg1);

    void on_addToCart_forCart_clicked();

    void on_addItem_clicked();

    void on_refeshCart_clicked();

    void on_itemQuantity_Cart_valueChanged(int arg1);

    void on_sendToVendor_clicked();

    void on_removeItem_clicked();

    void on_ofDay_clicked();

    void on_odMonth_clicked();

    void on_ofYear_clicked();

    void on_allUsers_cellActivated(int row, int column);

    void on_allUsers_cellClicked(int row, int column);

    void on_checkSpecical_clicked(bool checked);

    void on_deleteUser_clicked();

    void on_logOut_clicked();

    void on_deleteEmployee_clicked();


private:
    Ui::AdminMenu *ui;
    Admin *admin;

    std::vector<Item> allItem;
    std::vector<std::string> allCatagory;
    std::vector<users> allUser;
    std::vector<users> allEmployee;
signals:
    void finished();
protected:
    void closeEvent(QCloseEvent* event) override;
};

#endif // ADMINMENU_H
