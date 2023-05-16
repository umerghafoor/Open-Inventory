/********************************************************************************
** Form generated from reading UI file 'customerview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERVIEW_H
#define UI_CUSTOMERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerView
{
public:
    QWidget *centralwidget;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QTableWidget *allItems;
    QTableWidget *itemCart;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *selectedItem_Cart;
    QSpinBox *itemQuantity_2;
    QPushButton *removeFromCart;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *selectedItem;
    QComboBox *itemCatagory;
    QSpinBox *itemQuantity;
    QPushButton *addToCart;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLineEdit *totalItems;
    QLineEdit *totalPrice;
    QLineEdit *discount;

    void setupUi(QMainWindow *CustomerView)
    {
        if (CustomerView->objectName().isEmpty())
            CustomerView->setObjectName("CustomerView");
        CustomerView->resize(1143, 636);
        centralwidget = new QWidget(CustomerView);
        centralwidget->setObjectName("centralwidget");
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(20, 20, 151, 20));
        nameLabel->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"	 text-align: right;\n"
" 	color:black;\n"
"}"));
        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(20, 40, 151, 20));
        allItems = new QTableWidget(centralwidget);
        if (allItems->columnCount() < 4)
            allItems->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        allItems->setObjectName("allItems");
        allItems->setEnabled(true);
        allItems->setGeometry(QRect(20, 100, 421, 271));
        allItems->setStyleSheet(QString::fromUtf8("QTableWidget\n"
" {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableView \n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical {\n"
"    background-color: #FFFFFF;\n"
"    border-radius: 10px;\n"
"	margin-right: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #4DA6FF;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    height: 0px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #4DA6FF;\n"
"    color: white;\n"
"}\n"
"\n"
"QTableWidget::item:selected:focus {\n"
"    outline: none;\n"
"}\n"
"\n"
"QTableWidget::item:selected:active {\n"
"    border-top-left-radius: 5px;\n"
"    border-bottom-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
"\n"
"QTableWidget::item:selected:first {\n"
"    border-top-left-radius: 5px;\n"
"    border-bottom-left-radius: 5px;\n"
"}\n"
"\n"
"QTableWidget::item:"
                        "selected:last {\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
""));
        allItems->setShowGrid(false);
        allItems->setGridStyle(Qt::DashLine);
        itemCart = new QTableWidget(centralwidget);
        if (itemCart->columnCount() < 5)
            itemCart->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        itemCart->setObjectName("itemCart");
        itemCart->setGeometry(QRect(450, 100, 551, 271));
        itemCart->setStyleSheet(QString::fromUtf8("QTableWidget\n"
" {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableView \n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical {\n"
"    background-color: #FFFFFF;\n"
"    border-radius: 10px;\n"
"	margin-right: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #4DA6FF;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    height: 0px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #4DA6FF;\n"
"    color: white;\n"
"}\n"
"\n"
"QTableWidget::item:selected:focus {\n"
"    outline: none;\n"
"}\n"
"\n"
"QTableWidget::item:selected:active {\n"
"    border-top-left-radius: 5px;\n"
"    border-bottom-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
"\n"
"QTableWidget::item:selected:first {\n"
"    border-top-left-radius: 5px;\n"
"    border-bottom-left-radius: 5px;\n"
"}\n"
"\n"
"QTableWidget::item:"
                        "selected:last {\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
""));
        itemCart->setShowGrid(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 70, 63, 20));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(450, 380, 541, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        selectedItem_Cart = new QLineEdit(layoutWidget);
        selectedItem_Cart->setObjectName("selectedItem_Cart");

        horizontalLayout_3->addWidget(selectedItem_Cart);

        itemQuantity_2 = new QSpinBox(layoutWidget);
        itemQuantity_2->setObjectName("itemQuantity_2");

        horizontalLayout_3->addWidget(itemQuantity_2);

        removeFromCart = new QPushButton(layoutWidget);
        removeFromCart->setObjectName("removeFromCart");

        horizontalLayout_3->addWidget(removeFromCart);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 380, 411, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        selectedItem = new QLineEdit(widget);
        selectedItem->setObjectName("selectedItem");

        horizontalLayout->addWidget(selectedItem);

        itemCatagory = new QComboBox(widget);
        itemCatagory->setObjectName("itemCatagory");

        horizontalLayout->addWidget(itemCatagory);

        itemQuantity = new QSpinBox(widget);
        itemQuantity->setObjectName("itemQuantity");

        horizontalLayout->addWidget(itemQuantity);

        addToCart = new QPushButton(widget);
        addToCart->setObjectName("addToCart");

        horizontalLayout->addWidget(addToCart);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(790, 480, 211, 102));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        totalItems = new QLineEdit(widget1);
        totalItems->setObjectName("totalItems");
        totalItems->setReadOnly(true);

        verticalLayout->addWidget(totalItems);

        totalPrice = new QLineEdit(widget1);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setReadOnly(true);

        verticalLayout->addWidget(totalPrice);

        discount = new QLineEdit(widget1);
        discount->setObjectName("discount");
        discount->setReadOnly(true);

        verticalLayout->addWidget(discount);


        horizontalLayout_2->addLayout(verticalLayout);

        CustomerView->setCentralWidget(centralwidget);

        retranslateUi(CustomerView);

        QMetaObject::connectSlotsByName(CustomerView);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerView)
    {
        CustomerView->setWindowTitle(QCoreApplication::translate("CustomerView", "MainWindow", nullptr));
        nameLabel->setText(QCoreApplication::translate("CustomerView", "name", nullptr));
        emailLabel->setText(QCoreApplication::translate("CustomerView", "email", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allItems->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CustomerView", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allItems->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CustomerView", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allItems->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CustomerView", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allItems->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CustomerView", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = itemCart->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CustomerView", "item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = itemCart->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CustomerView", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = itemCart->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CustomerView", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = itemCart->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CustomerView", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = itemCart->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("CustomerView", "Quantity", nullptr));
        label_2->setText(QCoreApplication::translate("CustomerView", "All Items", nullptr));
        label_3->setText(QCoreApplication::translate("CustomerView", "Cart", nullptr));
        label_7->setText(QCoreApplication::translate("CustomerView", "Selected Item", nullptr));
        removeFromCart->setText(QCoreApplication::translate("CustomerView", "Remove From Cart", nullptr));
        label->setText(QCoreApplication::translate("CustomerView", "Selected Item", nullptr));
        addToCart->setText(QCoreApplication::translate("CustomerView", "Add to Cart", nullptr));
        label_5->setText(QCoreApplication::translate("CustomerView", "Total Price", nullptr));
        label_4->setText(QCoreApplication::translate("CustomerView", "Total Items", nullptr));
        label_6->setText(QCoreApplication::translate("CustomerView", "Discount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerView: public Ui_CustomerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEW_H
