#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_InventorySysytemGUI.h"

#include "customerview.h"
#include "adminmenu.h"

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
    CustomerView *customerMenu;
    AdminMenu *adminMenu;
};



