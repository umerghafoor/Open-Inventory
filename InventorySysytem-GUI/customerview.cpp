#include "customerview.h"
#include "ui_customerview.h"


#include <QMessageBox>
#include <QCloseEvent>


CustomerView::CustomerView(QWidget *parent,Customer *_custmerMenu) :
    QMainWindow(parent),
    ui(new Ui::CustomerMenu)
{
    ui->setupUi(this);
    customerMenu=_custmerMenu;

    ui->nameLabel->setText(QString::fromStdString(customerMenu->getName()));
    ui->emailLabel->setText(QString::fromStdString(customerMenu->getEmail()));

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
    }

    ui->allItems->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->allItems->setSelectionMode(QAbstractItemView::SingleSelection );
    ui->allItems->setSelectionBehavior(QAbstractItemView::SelectRows );

    ui->allItems->horizontalHeader()->setVisible(false);
    ui->allItems->verticalHeader()->setVisible(false);
    ui->allItems->horizontalHeader()->setStretchLastSection(true);

    //for itemCart Table
    ui->itemCart->horizontalHeader()->setVisible(false);
    ui->itemCart->verticalHeader()->setVisible(false);
    ui->itemCart->horizontalHeader()->setStretchLastSection(true);


    ui->itemCatagory->clear();
    ui->itemCatagory->addItem("All");
    for (int i=0;i<allCatagory.size();i++)
    {
        ui->itemCatagory->addItem(QString::fromStdString(allCatagory[i]));
    }
    ui->itemQuantity->setValue(1);
    refreshAllItems();
}

CustomerView::~CustomerView()
{
    delete ui;
}

void CustomerView::on_allItems_cellActivated(int row, int column)
{
    row = ui->allItems->currentRow();
    QTableWidgetItem* item = ui->allItems->item(row, 1);
    if (item != nullptr) {
        QString element = item->text();
        ui->selectedItem->setText(element);
    } else {
        ui->selectedItem->setText("No item selected");
    }
}


void CustomerView::on_addToCart_clicked()
{
    std::string itemName=ui->selectedItem->text().toStdString();

    int itemQuantity=ui->itemQuantity->value();
    customerMenu->addToCartbyName(itemName,itemQuantity);

    refreshCart();
}

void CustomerView::on_itemCart_cellActivated(int row, int column)
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

void CustomerView::on_removeFromCart_clicked()
{
    int row = ui->itemCart->currentRow();
    std::string itemName=ui->selectedItem_Cart->text().toStdString();

    int itemQuantity=ui->itemQuantity->value();
    customerMenu->removeFromCart(row);
    refreshCart();
}


void CustomerView::on_itemQuantity_2_valueChanged(int arg1)
{
        int row = ui->itemCart->currentRow();

    customerMenu->editQuantity(row,arg1);
    refreshCart();
}

void CustomerView::refreshCart()
{
    std::vector<Item> cart = customerMenu->displayCart();

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
    ui->totalPrice->setText(QString::number(customerMenu->totalAmount()));
    if(customerMenu->isSpecialCustomer())
    {
        ui->discount->setText("10%");
    }
    else
    {
        ui->discount->setText("0%");
    }
    ui->change->setText(QString::number((ui->cash->text().toFloat())-(ui->totalPrice->text().toFloat())));
}

void CustomerView::refreshAllItems()
{
    //for catgory comboBox
    allCatagory= customerMenu->getCategoryFromItems(allItem);


    ui->itemCatagory->setMaxVisibleItems(allCatagory.size());


    //allItem Table
    allItem = customerMenu->displayAll();

    ui->allItems->setRowCount(allItem.size());

    if(ui->itemCatagory->currentText() == QString::fromStdString("All"))
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
        }
    }
    else
    {
        int j=0;
        for (int i = 0; i < allItem.size(); i++)
        {
            if(ui->itemCatagory->currentText() == QString::fromStdString(allItem[i].category))
            {
                QTableWidgetItem* item = new QTableWidgetItem(QString::number(allItem[i].itemNo));
                ui->allItems->setItem(j, 0, item);
                item = new QTableWidgetItem(QString::fromStdString(allItem[i].itemName));
                ui->allItems->setItem(j, 1, item);
                item = new QTableWidgetItem(QString::fromStdString(allItem[i].category));
                ui->allItems->setItem(j, 2, item);
                item = new QTableWidgetItem(QString::number(allItem[i].salePrice));
                ui->allItems->setItem(j, 3, item);
                j++;
            }
        }
        ui->allItems->setRowCount(j);
    }

}

void CustomerView::on_itemCatagory_currentIndexChanged(int index)
{
    refreshAllItems();
}

void CustomerView::on_itemCatagory_currentTextChanged(const QString &arg1)
{
    refreshAllItems();
}

void CustomerView::on_doneShoping_clicked()
{
    if((ui->cash->text().toFloat()) > (ui->totalPrice->text().toFloat()))
    {
        if(
        customerMenu->doneShoping(
            (ui->cash->text().toFloat()),
            (ui->totalPrice->text().toFloat()),
            (ui->cash->text().toFloat())-(ui->totalPrice->text().toFloat())
                ))
        {
            customerMenu->emptyCart();
            refreshCart();
            QMessageBox::information(this, "Success", "Shoping completed successfully");
        }
        else
            QMessageBox ::warning(this, "Insufficent Amount", "Please type sufficent Amount");
    }
    else
    {
        QMessageBox ::warning(this, "Insufficent Amount", "Please type sufficent Amount");
    }
}

void CustomerView::on_pushButton_clicked()
{
    refreshAllItems();
    refreshCart();
}

void CustomerView::on_logOut_clicked()
{
    customerMenu->logOut();
    this->close();
//    parentWidget()->show();
    delete this;
}

void CustomerView::closeEvent(QCloseEvent* event)
{
    emit finished();
    event->accept();
}


