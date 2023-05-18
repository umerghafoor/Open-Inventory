#include "adminmenu.h"
#include "ui_adminmenu.h"

#include <QMessageBox>

AdminMenu::AdminMenu(QWidget *parent,Admin *newAdmin) :
    QMainWindow(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);
    this->admin=newAdmin;

    ui->nameLabel->setText(QString::fromStdString(admin->getName()));
    ui->emailLabel->setText(QString::fromStdString(admin->getEmail()));

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
    ui->allItems->horizontalHeader()->setStretchLastSection(true);

    //for itemCart Table
    ui->itemCart->horizontalHeader()->setVisible(false);
    ui->itemCart->verticalHeader()->setVisible(false);
    ui->itemCart->horizontalHeader()->setStretchLastSection(true);

    allCatagory= admin->getCategoryFromItems(allItem);
    ui->itemCatagory_forCart->clear();
    ui->itemCatagory_forCart->addItem("All");
    for (int i=0;i<allCatagory.size();i++)
    {
        ui->itemCatagory_forCart->addItem(QString::fromStdString(allCatagory[i]));
    }
    ui->itemQuantity_forCart->setValue(1);
    refreshAllItems();
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

void AdminMenu::on_allItems_cellActivated(int row, int column)
{
    row = ui->allItems->currentRow();
    QTableWidgetItem* item = ui->allItems->item(row, 1);
    if (item != nullptr) {
        QString element = item->text();
        ui->selectedItem_forCart->setText(element);
        ui->itemCatagory_forCart->setCurrentText(item->text());
    } else {
        ui->selectedItem_forCart->setText("No item selected");
    }
}

void AdminMenu::on_itemCart_cellActivated(int row, int column)
{
    row = ui->itemCart->currentRow();
    QTableWidgetItem* item = ui->itemCart->item(row, 1);
    if (item != nullptr)
    {
        QString element = item->text();
        ui->selectedItem_Cart->setText(element);
    }
    else
    {
        ui->selectedItem_Cart->setText("No item selected");
    }
}

void AdminMenu::on_removeFromCart_clicked()
{
    int row = ui->itemCart->currentRow();
    std::string itemName=ui->selectedItem_Cart->text().toStdString();

    admin->removeFromCart(row);
    refreshCart();
}

void AdminMenu::refreshCart()
{
    std::vector<Item> cart = admin->displayCart();

    ui->itemCart->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->itemCart->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->itemCart->setSelectionBehavior(QAbstractItemView::SelectRows );
    int totalItems=0;

    ui->itemCart->setRowCount(cart.size());
    for (int i = 0; i < cart.size(); i++)
    {
        QTableWidgetItem* item = new QTableWidgetItem(QString::number(cart[i].itemNo));
        ui->itemCart->setItem(i, 0, item);
        item = new QTableWidgetItem(QString::fromStdString(cart[i].itemName));
        ui->itemCart->setItem(i, 1, item);
        item = new QTableWidgetItem(QString::fromStdString(cart[i].category));
        ui->itemCart->setItem(i, 2, item);
        item = new QTableWidgetItem(QString::number(cart[i].salePrice));
        ui->itemCart->setItem(i, 3, item);
        item = new QTableWidgetItem(QString::number(cart[i].quantity));
        ui->itemCart->setItem(i, 4, item);
        totalItems+=cart[i].quantity;
    }
    ui->totalItems->setText(QString::number(totalItems));
    ui->totalPrice->setText(QString::number(admin->totalAmount()));
}

void AdminMenu::refreshAllItems()
{
    //for catgory comboBox
    allCatagory= admin->getCategoryFromItems(allItem);


    ui->itemCatagory_forCart->setMaxVisibleItems(allCatagory.size());


    //allItem Table
    allItem = admin->displayAll();

    ui->allItems->setRowCount(allItem.size());


    if(ui->itemCatagory_forCart->currentText() == QString::fromStdString("All"))
    {
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
    else
    {
        int j=0;
        for (int i = 0; i < allItem.size(); i++)
        {
            if(ui->itemCatagory_forCart->currentText() == QString::fromStdString(allItem[i].category))
            {
                QTableWidgetItem* item = new QTableWidgetItem(QString::number(allItem[i].itemNo));
                ui->allItems->setItem(j, 0, item);
                item = new QTableWidgetItem(QString::fromStdString(allItem[i].itemName));
                ui->allItems->setItem(j, 1, item);
                item = new QTableWidgetItem(QString::fromStdString(allItem[i].category));
                ui->allItems->setItem(j, 2, item);
                item = new QTableWidgetItem(QString::number(allItem[i].salePrice));
                ui->allItems->setItem(j, 3, item);
                item = new QTableWidgetItem(QString::number(allItem[i].price));
                ui->allItems->setItem(i, 4, item);
                item = new QTableWidgetItem(QString::number(allItem[i].quantity));
                ui->allItems->setItem(i, 5, item);
                j++;
            }
        }
        ui->allItems->setRowCount(j);
    }

}

void AdminMenu::on_pushButton_clicked()
{
    refreshAllItems();
    refreshCart();
}

void AdminMenu::on_itemCatagory_forCart_currentTextChanged(const QString &arg1)
{
    refreshAllItems();
}

void AdminMenu::on_addToCart_forCart_clicked()
{
    std::string itemName = ui->selectedItem_forCart->text().toStdString();

    int itemQuantity = ui->itemQuantity_forCart->value();
    admin->addToCartbyName(itemName,itemQuantity);

    refreshCart();
}

void AdminMenu::on_addItem_clicked()
{
    int ID=-1;
    std::string name="\0";
    std::string category="\0";
    float salePrice=0;
    float price=0;

    ID = ui->itemID_add->text().toInt();
    name =ui->itemName_add->text().toStdString();
    category=ui->itemCatagory_add->text().toStdString();
    salePrice = ui->itemSalePrice_add->text().toFloat();
    price =ui->itemPrice_add->text().toFloat();

    if(ID!=0 && salePrice!=0 && price!=0)
    {
        if(admin->addItem(ID,name,category,salePrice,price,0))
        {
            QMessageBox::information(this, "Success", "Item has been added");
        }
        else
        {
            QMessageBox::warning(this, "Error", "Item not Added");
        }

    }
    else
    {
        QMessageBox::warning(this, "Error", "Item is not Valid");
    }
    refreshAllItems();
}

void AdminMenu::on_refeshCart_clicked()
{

    refreshAllItems();
    refreshCart();
}

void AdminMenu::on_itemQuantity_Cart_valueChanged(int arg1)
{
    int row = ui->itemCart->currentRow();

    admin->editCartQuantity(row,arg1);
    refreshCart();
}

void AdminMenu::on_sendToVendor_clicked()
{
    admin->sendToVendor();
    refreshCart();
}

void AdminMenu::on_removeItem_clicked()
{
    QTableWidgetItem* selectedItem = ui->allItems->currentItem();
    int row = selectedItem->row();

    int selectedID = ui->allItems->item(row,0)->text().toInt();
    admin->deleteItem(selectedID);
    refreshAllItems();
}

