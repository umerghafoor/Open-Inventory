#include "vendormenu.h"
#include "ui_vendormenu.h"

#include <QCloseEvent>

VendorMenu::VendorMenu(QWidget *parent,Vendor *_vendorMenu) :
    QMainWindow(parent),
    ui(new Ui::VendorMenu)
{
    ui->setupUi(this);
    vendor=_vendorMenu;

    for (int i = 0; i < allItem.size(); i++)
    {
        QTableWidgetItem* item = new QTableWidgetItem(QString::number(allItem[i].itemNo));
        ui->allItems->setItem(i, 0, item);
        item = new QTableWidgetItem(QString::fromStdString(allItem[i].itemName));
        ui->allItems->setItem(i, 1, item);
        item = new QTableWidgetItem(QString::fromStdString(allItem[i].category));
        ui->allItems->setItem(i, 2, item);
        item = new QTableWidgetItem(QString::number(allItem[i].salePrice));
        ui->allItems->setItem(i, 3, item);
        item = new QTableWidgetItem(QString::number(allItem[i].price ));
        ui->allItems->setItem(i, 4, item);
        item = new QTableWidgetItem(QString::number(allItem[i].quantity));
        ui->allItems->setItem(i, 5, item);
    }

    ui->allItems->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->allItems->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->allItems->setSelectionBehavior(QAbstractItemView::SelectRows );

    ui->allItems->horizontalHeader()->setVisible(true);
    ui->allItems->verticalHeader()->setVisible(false);
    ui->allItems->horizontalHeader()->setVisible(false);

    ui->venderCart->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->venderCart->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->venderCart->setSelectionBehavior(QAbstractItemView::SelectRows );

    ui->venderCart->horizontalHeader()->setVisible(true);
    ui->venderCart->verticalHeader()->setVisible(false);
    ui->venderCart->horizontalHeader()->setVisible(false);

    ui->nameLabel->setText(QString::fromStdString(vendor->getName()));
    ui->emailLabel->setText(QString::fromStdString(vendor->getEmail()));

    refreshAllItems();
    refreshCart();
}

void VendorMenu::refreshAllItems()
{
    //allItem Table
    allItem = vendor->displayAll();

    ui->allItems->setRowCount(allItem.size());

    for (int i = 0; i < allItem.size(); i++)
    {

            QTableWidgetItem* item = new QTableWidgetItem(QString::number(allItem[i].itemNo));
            ui->allItems->setItem(i, 0, item);
            item = new QTableWidgetItem(QString::fromStdString(allItem[i].itemName));
            ui->allItems->setItem(i, 1, item);
            item = new QTableWidgetItem(QString::fromStdString(allItem[i].category));
            ui->allItems->setItem(i, 2, item);
            item = new QTableWidgetItem(QString::number(allItem[i].salePrice));
            ui->allItems->setItem(i, 3, item);
            item = new QTableWidgetItem(QString::number(allItem[i].price));
            ui->allItems->setItem(i, 4, item);
            item = new QTableWidgetItem(QString::number(allItem[i].quantity));
            ui->allItems->setItem(i, 5, item);
    }
}
void VendorMenu::refreshCart()
{

    std::vector<Item> cart = vendor->showItemsFromLog();

    ui->venderCart->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->venderCart->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->venderCart->setSelectionBehavior(QAbstractItemView::SelectRows );
    int totalItems=0;

    ui->venderCart->setRowCount(cart.size());
    for (int i = 0; i < cart.size(); i++)
    {
        QTableWidgetItem* item = new QTableWidgetItem(QString::number(cart[i].itemNo));
        ui->venderCart->setItem(i, 0, item);
        item = new QTableWidgetItem(QString::fromStdString(cart[i].itemName));
        ui->venderCart->setItem(i, 1, item);
        item = new QTableWidgetItem(QString::number(cart[i].price));
        ui->venderCart->setItem(i, 2, item);
        item = new QTableWidgetItem(QString::number(cart[i].salePrice));
        ui->venderCart->setItem(i, 3, item);
        item = new QTableWidgetItem(QString::number(cart[i].quantity));
        ui->venderCart->setItem(i, 4, item);
        totalItems+=cart[i].quantity;
    }
    ui->totalNo->setText(QString::number(totalItems));
    ui->totalPrice->setText(QString::number(vendor->totalAmount()));
}

VendorMenu::~VendorMenu()
{
    delete ui;
}

void VendorMenu::closeEvent(QCloseEvent* event)
{
    emit finished();
    event->accept();
}


void VendorMenu::on_venderCart_cellActivated(int row, int column)
{
    ui->totalNo->setText(ui->venderCart->item(row,4)->text());
    float price
        = (ui->venderCart->item(row, 2)->text().toFloat() *
           ui->venderCart->item(row, 4)->text().toFloat());
    ui->totalPrice->setText(QString::number(price));
}


void VendorMenu::on_reload_clicked()
{
    ui->venderCart->clearSelection();
    refreshCart();
    refreshAllItems();
}


void VendorMenu::on_deny_clicked()
{
    vendor->removeFromRequest((ui->venderCart->item((ui->venderCart->currentRow()),0)->text().toInt() ));
    refreshCart();
}


void VendorMenu::on_aprove_clicked()
{
    int itemNo = ui->venderCart->item(ui->venderCart->currentRow(),0)->text().toInt();
    int itemQuantity = ui->venderCart->item(ui->venderCart->currentRow(),4)->text().toInt();
    vendor->editQuantity(itemNo,itemQuantity);
    refreshCart();
    refreshAllItems();
}


void VendorMenu::on_logOut_clicked()
{
    vendor->logOut();
    this->close();
//    parentWidget()->show();
    delete this;
}

