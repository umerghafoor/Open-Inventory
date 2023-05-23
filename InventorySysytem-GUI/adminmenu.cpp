#include "adminmenu.h"
#include "ui_adminmenu.h"

#include <QMessageBox>
#include <QCloseEvent>


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
    ui->vendorCart->horizontalHeader()->setVisible(false);
    ui->vendorCart->verticalHeader()->setVisible(false);
    ui->vendorCart->horizontalHeader()->setStretchLastSection(true);

    allCatagory= admin->getCategoryFromItems(allItem);
    ui->itemCatagory_forCart->clear();
    ui->itemCatagory_forCart->addItem("All");
    for (int i=0;i<allCatagory.size();i++)
    {
        ui->itemCatagory_forCart->addItem(QString::fromStdString(allCatagory[i]));
    }
    ui->itemQuantity_forCart->setValue(1);
    refreshAllItems();

    ui->allUsers->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->allUsers->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->allUsers->setSelectionBehavior(QAbstractItemView::SelectRows );
    ui->allUsers->horizontalHeader()->setVisible(true);
    ui->allUsers->verticalHeader()->setVisible(false);
    ui->allUsers->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);
    ui->allUsers->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
    refreshAllUsers();

    ui->allEmployee->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->allEmployee->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->allEmployee->setSelectionBehavior(QAbstractItemView::SelectRows );
    ui->allEmployee->horizontalHeader()->setVisible(true);
    ui->allEmployee->verticalHeader()->setVisible(false);
    ui->allEmployee->horizontalHeader()->setStretchLastSection(true);
    refreshAllEmployee();

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

void AdminMenu::on_vendorCart_cellActivated(int row, int column)
{
    row = ui->vendorCart->currentRow();
    QTableWidgetItem* item = ui->vendorCart->item(row, 1);
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
    int row = ui->vendorCart->currentRow();
    std::string itemName=ui->selectedItem_Cart->text().toStdString();

    admin->removeFromCart(row);
    refreshCart();
}

void AdminMenu::refreshCart()
{
    std::vector<Item> cart = admin->displayCart();

    ui->vendorCart->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->vendorCart->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->vendorCart->setSelectionBehavior(QAbstractItemView::SelectRows );
    int totalItems=0;

    ui->vendorCart->setRowCount(cart.size());
    for (int i = 0; i < cart.size(); i++)
    {
        QTableWidgetItem* item = new QTableWidgetItem(QString::number(cart[i].itemNo));
        ui->vendorCart->setItem(i, 0, item);
        item = new QTableWidgetItem(QString::fromStdString(cart[i].itemName));
        ui->vendorCart->setItem(i, 1, item);
        item = new QTableWidgetItem(QString::fromStdString(cart[i].category));
        ui->vendorCart->setItem(i, 2, item);
        item = new QTableWidgetItem(QString::number(cart[i].salePrice));
        ui->vendorCart->setItem(i, 3, item);
        item = new QTableWidgetItem(QString::number(cart[i].quantity));
        ui->vendorCart->setItem(i, 4, item);
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

void AdminMenu::refreshAllUsers()
{
    //allItem Table
    allUser = admin->returnAllUser();

    ui->allUsers->setRowCount(allUser.size());

    for (int i = 0; i < allUser.size(); i++)
    {
        QTableWidgetItem* item = new QTableWidgetItem(QString::number(allUser[i].ID));
        ui->allUsers->setItem(i, 0, item);
        item = new QTableWidgetItem(QString::fromStdString(allUser[i].name));
        ui->allUsers->setItem(i, 1, item);
        item = new QTableWidgetItem(QString::fromStdString(allUser[i].email));
        ui->allUsers->setItem(i, 2, item);
        item = new QTableWidgetItem(QString::number(allUser[i].specialUser));
        ui->allUsers->setItem(i, 3, item);

    }

}

void AdminMenu::refreshAllEmployee()
{
    //allItem Table
    allEmployee = admin->returnAllEmployee();

    ui->allEmployee->setRowCount(allEmployee.size());

    for (int i = 0; i < allEmployee.size(); i++)
    {
        QTableWidgetItem* item = new QTableWidgetItem(QString::number(allEmployee[i].ID));
        ui->allEmployee->setItem(i, 0, item);
        item = new QTableWidgetItem(QString::fromStdString(allEmployee[i].name));
        ui->allEmployee->setItem(i, 1, item);
        item = new QTableWidgetItem(QString::fromStdString(allEmployee[i].email));
        ui->allEmployee->setItem(i, 2, item);
    }

}

void AdminMenu::refreshReport(std::string type)
{
    int itemSold;
    float itemPrice;
    float profit;
    float revenue;
    int itemBought;
    float itemCost;
    float itemNet;

    QDate selectedDate=ui->dateEdit->date();

    std::string dateStr =  selectedDate.toString("dd/MM/yyyy").toStdString();
    type+=dateStr;

    admin->SaleLog(itemSold,revenue,itemPrice,profit,type);
    admin->PurchaseLog(itemBought,itemCost,itemNet,type);

    ui->itemSold->setText(QString::number(itemSold));
    ui->itemSoldCost->setText(QString::number(itemPrice));
    ui->itemRevenue->setText(QString::number(revenue));
    ui->itemProfit->setText(QString::number(profit));

    ui->itemPurchase->setText(QString::number(itemBought));
    ui->itemCost->setText(QString::number(itemCost));
    ui->netTotal->setText(QString::number(itemNet));
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
    int row = ui->vendorCart->currentRow();

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

void AdminMenu::on_ofDay_clicked()
{
    refreshReport("d");
}

void AdminMenu::on_odMonth_clicked()
{
     refreshReport("m");
}

void AdminMenu::on_ofYear_clicked()
{
    refreshReport("y");
}

void AdminMenu::on_allUsers_cellActivated(int row, int column)
{
    if(ui->allUsers->item(row,3)->text().toInt()==0)
    {
        ui->checkSpecical->setCheckState(Qt::Unchecked);
    }
    else
    {
        ui->checkSpecical->setCheckState(Qt::Checked);
    }
}

void AdminMenu::on_allUsers_cellClicked(int row, int column)
{
    if(ui->allUsers->item(row,3)->text().toInt()==0)
    {
        ui->checkSpecical->setCheckState(Qt::Unchecked);
    }
    else
    {
        ui->checkSpecical->setCheckState(Qt::Checked);
    }
}

void AdminMenu::on_checkSpecical_clicked(bool checked)
{
    int row = ui->allUsers->currentRow();
    int userID = ui->allUsers->item(row,0)->text().toInt();
    if(ui->allUsers->item(row,3)->text().toInt()==0)
    {
        admin->markSpecial(userID,checked);
    }
    else
    {
        admin->markSpecial(userID,checked);
    }
    refreshAllUsers();
}

void AdminMenu::on_deleteUser_clicked()
{
    int row = ui->allUsers->currentRow();
    int userID = ui->allUsers->item(row,0)->text().toInt();
    admin->deleteCustomer(userID);
    refreshAllUsers();
}

void AdminMenu::closeEvent(QCloseEvent* event)
{
    emit finished();
    event->accept();
}

void AdminMenu::on_logOut_clicked()
{
    admin->logOut();
    this->close();
//    parentWidget()->show();
    delete this;
}


void AdminMenu::on_deleteEmployee_clicked()
{
    int row = ui->allEmployee->currentRow();
    int userID = ui->allEmployee->item(row,0)->text().toInt();
    admin->deleteEmployee(userID);
    refreshAllEmployee();
}

