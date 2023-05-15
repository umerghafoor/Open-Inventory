#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_InventorySysytemGUI.h"

class InventorySysytemGUI : public QMainWindow
{
    Q_OBJECT

public:
    InventorySysytemGUI(QWidget *parent = nullptr);
    ~InventorySysytemGUI();

private:
    Ui::InventorySysytemGUIClass ui;
};
