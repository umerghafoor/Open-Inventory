#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_InventorySysytemGUI.h"

#include"customerview.h"

#include "Class/customer.h"

class InventorySysytemGUI : public QMainWindow
{
    Q_OBJECT

public:
    InventorySysytemGUI(QWidget *parent = nullptr);
    ~InventorySysytemGUI();

private slots:
    void on_logIn_button_clicked();

private:
    Ui::InventorySysytemGUIClass ui;
    Customer *customerPtr;
    CustomerView *qwerty;
};

class xyzClass
{
protected:
    int ID;
    std::string name;
    std::string email;
    std::string password;
    bool specialUser;
    bool logedIn;

    //Constructors
public:
    xyzClass() {}
    xyzClass(int _ID, std::string _name, std::string _email, std::string _password,bool _specialUser)
    {
        this->ID = _ID;
        this->name = _name;
        this->email = _email;
        this->password = _password;
        this->specialUser = _specialUser;
    }


    //virtual funtions
    virtual bool editQuantity(int itemId, int quantity) = 0;
    virtual bool checkID(std::string, std::string) = 0;
    virtual void logOut() = 0;
};

