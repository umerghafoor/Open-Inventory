#ifndef CUSTOMERVIEW_H
#define CUSTOMERVIEW_H

#include <QMainWindow>

#include "Class/customer.h"

namespace Ui {
class CustomerMenu;
}

class CustomerView : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomerView(QWidget *parent = nullptr,Customer *_custmerMenu=nullptr);
    void refreshCart();
    void refreshAllItems();
    ~CustomerView();

private slots:

    void on_allItems_cellActivated(int row, int column);

    void on_addToCart_clicked();

    void on_itemCatagory_currentIndexChanged(int index);

    void on_itemCatagory_currentTextChanged(const QString &arg1);

    void on_removeFromCart_clicked();

    void on_itemCart_cellActivated(int row, int column);

    void on_itemQuantity_2_valueChanged(int arg1);

    void on_doneShoping_clicked();

    void on_pushButton_clicked();

    void on_logOut_clicked();

private:
    Ui::CustomerMenu *ui;
    Customer *customerMenu;
    std::vector<Item> allItem;
    std::vector<std::string> allCatagory;
signals:
    void finished();
protected:
    void closeEvent(QCloseEvent* event) override;
};

#endif // CUSTOMERVIEW_H
