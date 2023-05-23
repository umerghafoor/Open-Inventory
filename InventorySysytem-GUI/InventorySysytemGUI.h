#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_inventorysysytemgui.h"

#include "customerview.h"
#include "adminmenu.h"
#include "vendormenu.h"
#include "signup.h"

#include "Class/customer.h"
#include "Class/admin.h"
#include "Class/venderor.h"

class SignInMenu : public QMainWindow
{
    Q_OBJECT

public:
    SignInMenu(QWidget *parent = nullptr);
    ~SignInMenu();

private slots:
    void on_logIn_button_clicked();
    void onChildWindowClosed();

    void on_label_6_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::SignInMenu ui;
    Customer *customerPtr;
    Admin *adminPtr;
    Vendor *vendorPtr;
    user *userPtr;

    CustomerView *customerMenu;
    AdminMenu *adminMenu;
    VendorMenu *vendorMenu;
    SignUp *signUpMenu;
};



