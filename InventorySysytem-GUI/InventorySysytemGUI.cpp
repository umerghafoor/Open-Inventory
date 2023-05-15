#include "InventorySysytemGUI.h"
#include "ui_inventorysysytemgui.h"
#include <QMessageBox>


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
        int id = std::stoi(ui.ID->text().toStdString());
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
    else
    {
        QMessageBox::warning(this, "Logedin", "Welcome");
    }
}

