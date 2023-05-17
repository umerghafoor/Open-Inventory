/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *nameLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *selectedItem;
    QComboBox *itemCatagory;
    QSpinBox *itemQuantity;
    QPushButton *addToCart;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLineEdit *totalItems;
    QLineEdit *totalPrice;
    QLineEdit *discount;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *selectedItem_Cart;
    QSpinBox *itemQuantity_2;
    QPushButton *removeFromCart;
    QTableWidget *itemCart;
    QLabel *label_3;
    QTableWidget *allItems;
    QLabel *emailLabel;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *cash;
    QLineEdit *change;
    QPushButton *pushButton;
    QPushButton *doneShoping;
    QWidget *tab_2;
    QLabel *nameLabel_2;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *selectedItem_2;
    QComboBox *itemCatagory_2;
    QSpinBox *itemQuantity_3;
    QPushButton *addToCart_2;
    QLabel *label_11;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *totalPrice_2;
    QLineEdit *totalItems_2;
    QLineEdit *discount_2;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QLineEdit *selectedItem_Cart_2;
    QSpinBox *itemQuantity_4;
    QPushButton *removeFromCart_2;
    QTableWidget *itemCart_2;
    QLabel *label_16;
    QTableWidget *allItems_2;
    QLabel *emailLabel_2;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_17;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *cash_2;
    QLineEdit *change_2;
    QPushButton *pushButton_2;
    QPushButton *doneShoping_2;

    void setupUi(QMainWindow *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName("AdminMenu");
        AdminMenu->resize(1035, 687);
        centralwidget = new QWidget(AdminMenu);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 0, 1001, 631));
        tab = new QWidget();
        tab->setObjectName("tab");
        nameLabel = new QLabel(tab);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(0, 10, 151, 20));
        nameLabel->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"	 text-align: right;\n"
" 	color:black;\n"
"}"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 370, 411, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        selectedItem = new QLineEdit(layoutWidget);
        selectedItem->setObjectName("selectedItem");

        horizontalLayout->addWidget(selectedItem);

        itemCatagory = new QComboBox(layoutWidget);
        itemCatagory->setObjectName("itemCatagory");

        horizontalLayout->addWidget(itemCatagory);

        itemQuantity = new QSpinBox(layoutWidget);
        itemQuantity->setObjectName("itemQuantity");

        horizontalLayout->addWidget(itemQuantity);

        addToCart = new QPushButton(layoutWidget);
        addToCart->setObjectName("addToCart");

        horizontalLayout->addWidget(addToCart);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 60, 63, 20));
        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(430, 420, 211, 102));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        totalItems = new QLineEdit(layoutWidget_2);
        totalItems->setObjectName("totalItems");
        totalItems->setReadOnly(true);

        verticalLayout->addWidget(totalItems);

        totalPrice = new QLineEdit(layoutWidget_2);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setReadOnly(true);

        verticalLayout->addWidget(totalPrice);

        discount = new QLineEdit(layoutWidget_2);
        discount->setObjectName("discount");
        discount->setReadOnly(true);

        verticalLayout->addWidget(discount);


        horizontalLayout_2->addLayout(verticalLayout);

        layoutWidget_3 = new QWidget(tab);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(430, 370, 541, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        selectedItem_Cart = new QLineEdit(layoutWidget_3);
        selectedItem_Cart->setObjectName("selectedItem_Cart");

        horizontalLayout_3->addWidget(selectedItem_Cart);

        itemQuantity_2 = new QSpinBox(layoutWidget_3);
        itemQuantity_2->setObjectName("itemQuantity_2");

        horizontalLayout_3->addWidget(itemQuantity_2);

        removeFromCart = new QPushButton(layoutWidget_3);
        removeFromCart->setObjectName("removeFromCart");

        horizontalLayout_3->addWidget(removeFromCart);

        itemCart = new QTableWidget(tab);
        if (itemCart->columnCount() < 5)
            itemCart->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        itemCart->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        itemCart->setObjectName("itemCart");
        itemCart->setGeometry(QRect(430, 90, 551, 271));
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
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 60, 63, 20));
        allItems = new QTableWidget(tab);
        if (allItems->columnCount() < 4)
            allItems->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        allItems->setObjectName("allItems");
        allItems->setEnabled(true);
        allItems->setGeometry(QRect(0, 90, 421, 271));
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
        emailLabel = new QLabel(tab);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(0, 30, 151, 20));
        layoutWidget_4 = new QWidget(tab);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(730, 420, 251, 105));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        cash = new QLineEdit(layoutWidget_4);
        cash->setObjectName("cash");
        cash->setReadOnly(false);

        verticalLayout_4->addWidget(cash);

        change = new QLineEdit(layoutWidget_4);
        change->setObjectName("change");
        change->setReadOnly(true);

        verticalLayout_4->addWidget(change);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(layoutWidget_4);
        pushButton->setObjectName("pushButton");

        verticalLayout_5->addWidget(pushButton);

        doneShoping = new QPushButton(tab);
        doneShoping->setObjectName("doneShoping");
        doneShoping->setGeometry(QRect(870, 550, 111, 29));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        nameLabel_2 = new QLabel(tab_2);
        nameLabel_2->setObjectName("nameLabel_2");
        nameLabel_2->setGeometry(QRect(0, 10, 151, 20));
        nameLabel_2->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"	 text-align: right;\n"
" 	color:black;\n"
"}"));
        layoutWidget_5 = new QWidget(tab_2);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 370, 411, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_5);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        selectedItem_2 = new QLineEdit(layoutWidget_5);
        selectedItem_2->setObjectName("selectedItem_2");

        horizontalLayout_5->addWidget(selectedItem_2);

        itemCatagory_2 = new QComboBox(layoutWidget_5);
        itemCatagory_2->setObjectName("itemCatagory_2");

        horizontalLayout_5->addWidget(itemCatagory_2);

        itemQuantity_3 = new QSpinBox(layoutWidget_5);
        itemQuantity_3->setObjectName("itemQuantity_3");

        horizontalLayout_5->addWidget(itemQuantity_3);

        addToCart_2 = new QPushButton(layoutWidget_5);
        addToCart_2->setObjectName("addToCart_2");

        horizontalLayout_5->addWidget(addToCart_2);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 60, 63, 20));
        layoutWidget_6 = new QWidget(tab_2);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(430, 420, 211, 102));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_12 = new QLabel(layoutWidget_6);
        label_12->setObjectName("label_12");

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(layoutWidget_6);
        label_13->setObjectName("label_13");

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(layoutWidget_6);
        label_14->setObjectName("label_14");

        verticalLayout_6->addWidget(label_14);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        totalPrice_2 = new QLineEdit(layoutWidget_6);
        totalPrice_2->setObjectName("totalPrice_2");
        totalPrice_2->setReadOnly(true);

        verticalLayout_7->addWidget(totalPrice_2);

        totalItems_2 = new QLineEdit(layoutWidget_6);
        totalItems_2->setObjectName("totalItems_2");
        totalItems_2->setReadOnly(true);

        verticalLayout_7->addWidget(totalItems_2);

        discount_2 = new QLineEdit(layoutWidget_6);
        discount_2->setObjectName("discount_2");
        discount_2->setReadOnly(true);

        verticalLayout_7->addWidget(discount_2);


        horizontalLayout_6->addLayout(verticalLayout_7);

        layoutWidget_7 = new QWidget(tab_2);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(430, 370, 541, 31));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_7);
        label_15->setObjectName("label_15");

        horizontalLayout_7->addWidget(label_15);

        selectedItem_Cart_2 = new QLineEdit(layoutWidget_7);
        selectedItem_Cart_2->setObjectName("selectedItem_Cart_2");

        horizontalLayout_7->addWidget(selectedItem_Cart_2);

        itemQuantity_4 = new QSpinBox(layoutWidget_7);
        itemQuantity_4->setObjectName("itemQuantity_4");

        horizontalLayout_7->addWidget(itemQuantity_4);

        removeFromCart_2 = new QPushButton(layoutWidget_7);
        removeFromCart_2->setObjectName("removeFromCart_2");

        horizontalLayout_7->addWidget(removeFromCart_2);

        itemCart_2 = new QTableWidget(tab_2);
        if (itemCart_2->columnCount() < 5)
            itemCart_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        itemCart_2->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        itemCart_2->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        itemCart_2->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        itemCart_2->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        itemCart_2->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        itemCart_2->setObjectName("itemCart_2");
        itemCart_2->setGeometry(QRect(430, 90, 551, 271));
        itemCart_2->setStyleSheet(QString::fromUtf8("QTableWidget\n"
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
        itemCart_2->setShowGrid(false);
        label_16 = new QLabel(tab_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(430, 60, 63, 20));
        allItems_2 = new QTableWidget(tab_2);
        if (allItems_2->columnCount() < 4)
            allItems_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        allItems_2->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        allItems_2->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        allItems_2->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        allItems_2->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        allItems_2->setObjectName("allItems_2");
        allItems_2->setEnabled(true);
        allItems_2->setGeometry(QRect(0, 90, 421, 271));
        allItems_2->setStyleSheet(QString::fromUtf8("QTableWidget\n"
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
        allItems_2->setShowGrid(false);
        allItems_2->setGridStyle(Qt::DashLine);
        emailLabel_2 = new QLabel(tab_2);
        emailLabel_2->setObjectName("emailLabel_2");
        emailLabel_2->setGeometry(QRect(0, 30, 151, 20));
        layoutWidget_8 = new QWidget(tab_2);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(730, 420, 251, 105));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_17 = new QLabel(layoutWidget_8);
        label_17->setObjectName("label_17");

        verticalLayout_9->addWidget(label_17);

        label_18 = new QLabel(layoutWidget_8);
        label_18->setObjectName("label_18");

        verticalLayout_9->addWidget(label_18);


        horizontalLayout_8->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        cash_2 = new QLineEdit(layoutWidget_8);
        cash_2->setObjectName("cash_2");
        cash_2->setReadOnly(false);

        verticalLayout_10->addWidget(cash_2);

        change_2 = new QLineEdit(layoutWidget_8);
        change_2->setObjectName("change_2");
        change_2->setReadOnly(true);

        verticalLayout_10->addWidget(change_2);


        horizontalLayout_8->addLayout(verticalLayout_10);


        verticalLayout_8->addLayout(horizontalLayout_8);

        pushButton_2 = new QPushButton(layoutWidget_8);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_8->addWidget(pushButton_2);

        doneShoping_2 = new QPushButton(tab_2);
        doneShoping_2->setObjectName("doneShoping_2");
        doneShoping_2->setGeometry(QRect(870, 550, 111, 29));
        tabWidget->addTab(tab_2, QString());
        AdminMenu->setCentralWidget(centralwidget);

        retranslateUi(AdminMenu);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMenu)
    {
        AdminMenu->setWindowTitle(QCoreApplication::translate("AdminMenu", "MainWindow", nullptr));
        nameLabel->setText(QCoreApplication::translate("AdminMenu", "name", nullptr));
        label->setText(QCoreApplication::translate("AdminMenu", "Selected Item", nullptr));
        addToCart->setText(QCoreApplication::translate("AdminMenu", "Add to Cart", nullptr));
        label_2->setText(QCoreApplication::translate("AdminMenu", "All Items", nullptr));
        label_5->setText(QCoreApplication::translate("AdminMenu", "Total Price", nullptr));
        label_4->setText(QCoreApplication::translate("AdminMenu", "Total Items", nullptr));
        label_6->setText(QCoreApplication::translate("AdminMenu", "Discount", nullptr));
        label_7->setText(QCoreApplication::translate("AdminMenu", "Selected Item", nullptr));
        removeFromCart->setText(QCoreApplication::translate("AdminMenu", "Remove From Cart", nullptr));
        QTableWidgetItem *___qtablewidgetitem = itemCart->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminMenu", "item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = itemCart->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = itemCart->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = itemCart->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = itemCart->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminMenu", "Quantity", nullptr));
        label_3->setText(QCoreApplication::translate("AdminMenu", "Cart", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = allItems->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = allItems->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = allItems->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AdminMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = allItems->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("AdminMenu", "Price", nullptr));
        emailLabel->setText(QCoreApplication::translate("AdminMenu", "email", nullptr));
        label_8->setText(QCoreApplication::translate("AdminMenu", "Cash", nullptr));
        label_10->setText(QCoreApplication::translate("AdminMenu", "Change", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminMenu", "Refresh", nullptr));
        doneShoping->setText(QCoreApplication::translate("AdminMenu", "Done Shoping", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AdminMenu", "Tab 1", nullptr));
        nameLabel_2->setText(QCoreApplication::translate("AdminMenu", "name", nullptr));
        label_9->setText(QCoreApplication::translate("AdminMenu", "Selected Item", nullptr));
        addToCart_2->setText(QCoreApplication::translate("AdminMenu", "Add to Cart", nullptr));
        label_11->setText(QCoreApplication::translate("AdminMenu", "All Items", nullptr));
        label_12->setText(QCoreApplication::translate("AdminMenu", "Total Price", nullptr));
        label_13->setText(QCoreApplication::translate("AdminMenu", "Total Items", nullptr));
        label_14->setText(QCoreApplication::translate("AdminMenu", "Discount", nullptr));
        label_15->setText(QCoreApplication::translate("AdminMenu", "Selected Item", nullptr));
        removeFromCart_2->setText(QCoreApplication::translate("AdminMenu", "Remove From Cart", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = itemCart_2->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("AdminMenu", "item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = itemCart_2->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = itemCart_2->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("AdminMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = itemCart_2->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("AdminMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = itemCart_2->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("AdminMenu", "Quantity", nullptr));
        label_16->setText(QCoreApplication::translate("AdminMenu", "Cart", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = allItems_2->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("AdminMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = allItems_2->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = allItems_2->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("AdminMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = allItems_2->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("AdminMenu", "Price", nullptr));
        emailLabel_2->setText(QCoreApplication::translate("AdminMenu", "email", nullptr));
        label_17->setText(QCoreApplication::translate("AdminMenu", "Cash", nullptr));
        label_18->setText(QCoreApplication::translate("AdminMenu", "Change", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminMenu", "Refresh", nullptr));
        doneShoping_2->setText(QCoreApplication::translate("AdminMenu", "Done Shoping", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AdminMenu", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
