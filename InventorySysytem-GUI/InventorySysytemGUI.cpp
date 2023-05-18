#include "InventorySysytemGUI.h"
#include <QMessageBox>

SignInMenu::SignInMenu(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

SignInMenu::~SignInMenu()
{}

void SignInMenu::on_logIn_button_clicked()
{
    try 
    {
        std::stoi(ui.ID->text().toStdString());
    }
    catch (std::exception& e) 
    {
        QMessageBox::warning(this, "Login Error", "ID must be Integer");
        return;
    }

    std::string userID = ui.ID->text().toStdString();
    std::string password = ui.password->text().toStdString();

    if(ui.userType->currentIndex() == 1)
        userPtr = new Customer(stoi(userID), password);
    else if(ui.userType->currentIndex() == 0)
        userPtr = new Admin(stoi(userID), password);
    else if(ui.userType->currentIndex() == 2)
        userPtr = new Vendor(stoi(userID), password);

    if (userPtr->getID() == -1)
    {
        QMessageBox ::warning(this, "Login Error", "Invalid User ID or Password");
        return;
    }
    else if(ui.userType->currentIndex() == 1)
    {
        this->hide();
        customerPtr = new Customer(stoi(userID), password);
        customerMenu=new CustomerView(this,customerPtr);
        connect(customerMenu, &CustomerView::finished, this, &SignInMenu::onChildWindowClosed);
        customerMenu->show();
    }
    else if(ui.userType->currentIndex() == 0)
    {
        this->hide();
        adminPtr = new Admin(stoi(userID),password);
        adminMenu=new AdminMenu(this,adminPtr);
        connect(adminMenu, &AdminMenu::finished, this, &SignInMenu::onChildWindowClosed);
        adminMenu->show();
    }
    else if(ui.userType->currentIndex() == 2)
    {
        this->hide();
        vendorPtr = new Vendor(stoi(userID), password);
        vendorMenu=new VendorMenu(this,vendorPtr);
        connect(vendorMenu, &VendorMenu::finished, this, &SignInMenu::onChildWindowClosed);
        vendorMenu->show();
    }
    else
    {
        QMessageBox ::warning(this, "Login Type Error", "Please select the valid type");
    }
}

void SignInMenu::onChildWindowClosed()
{
    ui.password->setText("");
    this->show();
}
