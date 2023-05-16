#include "customerview.h"
#include "ui_customerview.h"

CustomerView::CustomerView(QWidget *parent,Customer *_custmerMenu) :
    QMainWindow(parent),
    ui(new Ui::CustomerView)
{
    customerMenu=_custmerMenu;
    ui->setupUi(this);
}

CustomerView::~CustomerView()
{
    delete ui;
}
