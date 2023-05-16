#include "InventorySysytemGUI.h"
#include <QMessageBox>
//#include"customerview.h"


InventorySysytemGUI::InventorySysytemGUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

InventorySysytemGUI::~InventorySysytemGUI()
{}

void InventorySysytemGUI::on_logIn_button_clicked()
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

    customerPtr = new Customer(stoi(userID), password);

    if (customerPtr->getID() == -1)
    {
        QMessageBox ::warning(this, "Login Error", "Invalid User ID or Password");
        return;
    }
    else if(ui.userType->currentIndex()==1)
    {
        this->hide();
        qwerty=new CustomerView(this,customerPtr);
        qwerty->show();
    }
    else
    {
        QMessageBox ::warning(this, "Login Type Error", "Please select the valid type");
    }
}

