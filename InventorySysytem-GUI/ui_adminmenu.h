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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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
    QWidget *report;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *itemSold;
    QLineEdit *itemSoldCost;
    QLineEdit *itemProfit;
    QDateEdit *dateEdit;
    QLineEdit *itemPurchase;
    QLineEdit *itemCost;
    QLineEdit *netTotal;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *ofYear;
    QPushButton *odMonth;
    QPushButton *ofDay;
    QLineEdit *itemRevenue;
    QLabel *label_11;
    QTableWidget *allUsers;
    QLabel *label_12;
    QTableWidget *allEmployee;
    QCheckBox *checkSpecical;
    QPushButton *deleteUser;
    QPushButton *deleteEmployee;
    QWidget *inventoryTab;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *totalPrice;
    QLineEdit *totalItems;
    QTableWidget *vendorCart;
    QLabel *label_3;
    QTableWidget *allItems;
    QPushButton *sendToVendor;
    QLineEdit *itemID_add;
    QLineEdit *itemName_add;
    QLineEdit *itemCatagory_add;
    QLineEdit *itemPrice_add;
    QLineEdit *itemSalePrice_add;
    QPushButton *addItem;
    QComboBox *itemCatagory_forCart;
    QLineEdit *selectedItem_forCart;
    QPushButton *addToCart_forCart;
    QSpinBox *itemQuantity_forCart;
    QSpinBox *itemQuantity_Cart;
    QLineEdit *selectedItem_Cart;
    QPushButton *removeFromCart;
    QPushButton *refeshCart;
    QPushButton *removeItem;
    QLabel *emailLabel;
    QLabel *nameLabel;
    QPushButton *logOut;

    void setupUi(QMainWindow *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName("AdminMenu");
        AdminMenu->resize(1183, 759);
        centralwidget = new QWidget(AdminMenu);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 70, 1161, 681));
        tabWidget->setMovable(false);
        report = new QWidget();
        report->setObjectName("report");
        label = new QLabel(report);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 101, 20));
        label_6 = new QLabel(report);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 50, 111, 20));
        label_7 = new QLabel(report);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 110, 121, 20));
        itemSold = new QLineEdit(report);
        itemSold->setObjectName("itemSold");
        itemSold->setGeometry(QRect(130, 20, 113, 28));
        itemSold->setReadOnly(true);
        itemSold->setClearButtonEnabled(false);
        itemSoldCost = new QLineEdit(report);
        itemSoldCost->setObjectName("itemSoldCost");
        itemSoldCost->setGeometry(QRect(130, 50, 113, 28));
        itemSoldCost->setReadOnly(true);
        itemProfit = new QLineEdit(report);
        itemProfit->setObjectName("itemProfit");
        itemProfit->setGeometry(QRect(130, 110, 113, 28));
        itemProfit->setReadOnly(true);
        dateEdit = new QDateEdit(report);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(369, 120, 111, 29));
        itemPurchase = new QLineEdit(report);
        itemPurchase->setObjectName("itemPurchase");
        itemPurchase->setGeometry(QRect(370, 20, 113, 28));
        itemPurchase->setReadOnly(true);
        itemPurchase->setClearButtonEnabled(false);
        itemCost = new QLineEdit(report);
        itemCost->setObjectName("itemCost");
        itemCost->setGeometry(QRect(370, 50, 113, 28));
        itemCost->setReadOnly(true);
        itemCost->setClearButtonEnabled(false);
        netTotal = new QLineEdit(report);
        netTotal->setObjectName("netTotal");
        netTotal->setGeometry(QRect(370, 80, 113, 28));
        netTotal->setReadOnly(true);
        netTotal->setClearButtonEnabled(false);
        label_8 = new QLabel(report);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(260, 20, 101, 20));
        label_9 = new QLabel(report);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(260, 50, 111, 20));
        label_10 = new QLabel(report);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(260, 80, 121, 20));
        ofYear = new QPushButton(report);
        ofYear->setObjectName("ofYear");
        ofYear->setGeometry(QRect(290, 150, 71, 29));
        odMonth = new QPushButton(report);
        odMonth->setObjectName("odMonth");
        odMonth->setGeometry(QRect(210, 150, 71, 29));
        ofDay = new QPushButton(report);
        ofDay->setObjectName("ofDay");
        ofDay->setGeometry(QRect(140, 150, 61, 29));
        itemRevenue = new QLineEdit(report);
        itemRevenue->setObjectName("itemRevenue");
        itemRevenue->setGeometry(QRect(130, 80, 113, 28));
        itemRevenue->setReadOnly(true);
        label_11 = new QLabel(report);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 80, 101, 20));
        allUsers = new QTableWidget(report);
        if (allUsers->columnCount() < 4)
            allUsers->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allUsers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        allUsers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        allUsers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        allUsers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        allUsers->setObjectName("allUsers");
        allUsers->setEnabled(true);
        allUsers->setGeometry(QRect(600, 50, 541, 541));
        allUsers->setStyleSheet(QString::fromUtf8("QTableWidget\n"
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
"    border-top-left-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"}\n"
"\n"
"QTableWidget::item:selected:first {\n"
"    border-top-left-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"}\n"
"\n"
"QTableWidget:"
                        ":item:selected:last {\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"}\n"
""));
        allUsers->setShowGrid(false);
        allUsers->setGridStyle(Qt::DashLine);
        label_12 = new QLabel(report);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(600, 10, 181, 20));
        allEmployee = new QTableWidget(report);
        if (allEmployee->columnCount() < 3)
            allEmployee->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        allEmployee->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        allEmployee->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        allEmployee->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        allEmployee->setObjectName("allEmployee");
        allEmployee->setEnabled(true);
        allEmployee->setGeometry(QRect(20, 190, 541, 401));
        allEmployee->setStyleSheet(QString::fromUtf8("QTableWidget\n"
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
"    border-top-left-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"}\n"
"\n"
"QTableWidget::item:selected:first {\n"
"    border-top-left-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"}\n"
"\n"
"QTableWidget:"
                        ":item:selected:last {\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"}\n"
""));
        allEmployee->setShowGrid(false);
        allEmployee->setGridStyle(Qt::DashLine);
        checkSpecical = new QCheckBox(report);
        checkSpecical->setObjectName("checkSpecical");
        checkSpecical->setGeometry(QRect(850, 600, 93, 26));
        deleteUser = new QPushButton(report);
        deleteUser->setObjectName("deleteUser");
        deleteUser->setGeometry(QRect(1012, 600, 121, 29));
        deleteEmployee = new QPushButton(report);
        deleteEmployee->setObjectName("deleteEmployee");
        deleteEmployee->setGeometry(QRect(400, 600, 161, 29));
        tabWidget->addTab(report, QString());
        inventoryTab = new QWidget();
        inventoryTab->setObjectName("inventoryTab");
        label_2 = new QLabel(inventoryTab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 20, 63, 20));
        layoutWidget_2 = new QWidget(inventoryTab);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(630, 560, 221, 71));
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


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        totalPrice = new QLineEdit(layoutWidget_2);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setReadOnly(true);

        verticalLayout->addWidget(totalPrice);

        totalItems = new QLineEdit(layoutWidget_2);
        totalItems->setObjectName("totalItems");
        totalItems->setReadOnly(true);

        verticalLayout->addWidget(totalItems);


        horizontalLayout_2->addLayout(verticalLayout);

        vendorCart = new QTableWidget(inventoryTab);
        if (vendorCart->columnCount() < 5)
            vendorCart->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        vendorCart->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        vendorCart->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        vendorCart->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        vendorCart->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        vendorCart->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        vendorCart->setObjectName("vendorCart");
        vendorCart->setGeometry(QRect(630, 50, 501, 451));
        vendorCart->setStyleSheet(QString::fromUtf8("QTableWidget\n"
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
        vendorCart->setShowGrid(false);
        label_3 = new QLabel(inventoryTab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(630, 20, 63, 20));
        allItems = new QTableWidget(inventoryTab);
        if (allItems->columnCount() < 6)
            allItems->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(5, __qtablewidgetitem17);
        allItems->setObjectName("allItems");
        allItems->setEnabled(true);
        allItems->setGeometry(QRect(0, 50, 611, 491));
        allItems->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableView QHeaderView::section {\n"
"    background-color: #4DA6FF;\n"
"    color: white;\n"
"	border-top-left-radius: 10px;\n"
"	border-top-right-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked {\n"
"    background-color: #4DA6FF;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background-color: #FFFFFF;\n"
"    border-radius: 10px;\n"
"    margin-right: 5px;\n"
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
"QTableWidget::item {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #4DA6FF;\n"
"    color: white;\n"
"}\n"
"\n"
"QTableWidget::item:selected:f"
                        "ocus {\n"
"    outline: none;\n"
"}\n"
"\n"
"QTableWidget::item:selected:active {\n"
"    border-top-left-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"}\n"
"\n"
"QTableWidget::item:selected:first {\n"
"    border-top-left-radius: 12px;\n"
"    border-bottom-left-radius: 12px;\n"
"}\n"
"\n"
"QTableWidget::item:selected:last {\n"
"    border-top-right-radius: 12px;\n"
"    border-bottom-right-radius: 12px;\n"
"}\n"
""));
        allItems->setShowGrid(false);
        allItems->setGridStyle(Qt::DashLine);
        sendToVendor = new QPushButton(inventoryTab);
        sendToVendor->setObjectName("sendToVendor");
        sendToVendor->setGeometry(QRect(950, 590, 151, 29));
        itemID_add = new QLineEdit(inventoryTab);
        itemID_add->setObjectName("itemID_add");
        itemID_add->setGeometry(QRect(0, 600, 61, 28));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itemID_add->sizePolicy().hasHeightForWidth());
        itemID_add->setSizePolicy(sizePolicy);
        itemID_add->setMaximumSize(QSize(167772, 16777215));
        itemName_add = new QLineEdit(inventoryTab);
        itemName_add->setObjectName("itemName_add");
        itemName_add->setGeometry(QRect(70, 600, 171, 28));
        itemCatagory_add = new QLineEdit(inventoryTab);
        itemCatagory_add->setObjectName("itemCatagory_add");
        itemCatagory_add->setGeometry(QRect(250, 600, 111, 28));
        itemPrice_add = new QLineEdit(inventoryTab);
        itemPrice_add->setObjectName("itemPrice_add");
        itemPrice_add->setGeometry(QRect(370, 600, 51, 28));
        sizePolicy.setHeightForWidth(itemPrice_add->sizePolicy().hasHeightForWidth());
        itemPrice_add->setSizePolicy(sizePolicy);
        itemSalePrice_add = new QLineEdit(inventoryTab);
        itemSalePrice_add->setObjectName("itemSalePrice_add");
        itemSalePrice_add->setGeometry(QRect(430, 600, 61, 28));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(itemSalePrice_add->sizePolicy().hasHeightForWidth());
        itemSalePrice_add->setSizePolicy(sizePolicy1);
        itemSalePrice_add->setMaximumSize(QSize(16777, 16777215));
        addItem = new QPushButton(inventoryTab);
        addItem->setObjectName("addItem");
        addItem->setGeometry(QRect(498, 600, 121, 29));
        itemCatagory_forCart = new QComboBox(inventoryTab);
        itemCatagory_forCart->setObjectName("itemCatagory_forCart");
        itemCatagory_forCart->setGeometry(QRect(180, 560, 151, 31));
        itemCatagory_forCart->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"    color: #4da6ff;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 30px;\n"
"    border-left-width: 0px;\n"
"    border-top-right-radius: 20px;\n"
"    border-bottom-right-radius: 20px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(icons/down-arrow.png);\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    selection-background-color: transparent;\n"
"    selection-color: white;\n"
"    background-color: white;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"    color: black;\n"
"    border: none;\n"
"    outline: none;\n"
"    scrollbar-color: #CCCCCC #F5F5F5;\n"
"    font-weight: regular;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 30px;\n"
"}\n"
"\n"
"QComboBox QAbs"
                        "tractItemView::item:hover {\n"
"    background-color: white;\n"
"    border-radius: 15px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    border-radius: 15px;\n"
"    color: #4da6ff;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:focus {\n"
"    background-color: transparent;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QComboBox::focus {\n"
"    border: none;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::scrollbar {\n"
"    background-color: #F5F5F5;\n"
"    width: 10px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::scrollbar:vertical {\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::scrollbar-handle:vertical {\n"
"    background-color: #CCCCCC;\n"
"    border-radius: 5px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::scrollbar-handle:vertical:hover {\n"
"    background-color: #BBBBBB;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::scrollbar:horizontal {\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
""
                        "QComboBox QAbstractItemView::scrollbar-handle:horizontal {\n"
"    min-width: 20px;\n"
"}\n"
""));
        selectedItem_forCart = new QLineEdit(inventoryTab);
        selectedItem_forCart->setObjectName("selectedItem_forCart");
        selectedItem_forCart->setGeometry(QRect(0, 560, 171, 31));
        selectedItem_forCart->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 15px;\n"
"    background-color: white;\n"
"	padding-left: 10px;\n"
"    padding-right: 10px; \n"
"	font-size: 14px;\n"
" 	color: #4da6ff;\n"
"    font-weight: bold;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QLineEdit:focus, QLineEdit:hover {\n"
"    border: 1px solid #4da6ff;\n"
"}"));
        addToCart_forCart = new QPushButton(inventoryTab);
        addToCart_forCart->setObjectName("addToCart_forCart");
        addToCart_forCart->setGeometry(QRect(410, 560, 111, 31));
        addToCart_forCart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2196F3;\n"
"    color: #FFFFFF;\n"
"    border-radius: 14px;\n"
"    padding: 4px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1976D2;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        itemQuantity_forCart = new QSpinBox(inventoryTab);
        itemQuantity_forCart->setObjectName("itemQuantity_forCart");
        itemQuantity_forCart->setGeometry(QRect(340, 560, 61, 31));
        itemQuantity_forCart->setMinimumSize(QSize(61, 31));
        itemQuantity_forCart->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"                           background-color: rgb(85, 170, 255);\n"
"                           color: #FFFFFF;\n"
"                           border-radius: 15px;\n"
"                           padding: 8px;\n"
"		font-size: 14px;\n"
"                           font-weight: bold;\n"
"}\n"
" QSpinBox::up-button, QSpinBox::down-button \n"
"{\n"
"	background-color: white;\n"
"	border-radius: 6px;\n"
"	padding: 5px;\n"
"	padding-right: 10px;\n"
"}\n"
" QSpinBox::up-button:hover, QSpinBox::down-button:hover \n"
"{\n"
"	background-color: #0D47A1;\n"
"	padding-right: 10px;\n"
" }\n"
" QSpinBox::up-button:pressed, QSpinBox::down-button:pressed \n"
"{\n"
"	background-color: #0D47A1;\n"
"	padding-right: 10px;\n"
" }"));
        itemQuantity_Cart = new QSpinBox(inventoryTab);
        itemQuantity_Cart->setObjectName("itemQuantity_Cart");
        itemQuantity_Cart->setGeometry(QRect(850, 520, 71, 29));
        selectedItem_Cart = new QLineEdit(inventoryTab);
        selectedItem_Cart->setObjectName("selectedItem_Cart");
        selectedItem_Cart->setGeometry(QRect(630, 520, 211, 28));
        removeFromCart = new QPushButton(inventoryTab);
        removeFromCart->setObjectName("removeFromCart");
        removeFromCart->setGeometry(QRect(1040, 520, 101, 29));
        refeshCart = new QPushButton(inventoryTab);
        refeshCart->setObjectName("refeshCart");
        refeshCart->setGeometry(QRect(930, 520, 101, 29));
        removeItem = new QPushButton(inventoryTab);
        removeItem->setObjectName("removeItem");
        removeItem->setGeometry(QRect(530, 560, 91, 31));
        removeItem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2196F3;\n"
"    color: #FFFFFF;\n"
"    border-radius: 14px;\n"
"    padding: 4px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1976D2;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        tabWidget->addTab(inventoryTab, QString());
        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(300, 30, 151, 20));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(20, 30, 151, 20));
        nameLabel->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"	 text-align: right;\n"
" 	color:black;\n"
"}"));
        logOut = new QPushButton(centralwidget);
        logOut->setObjectName("logOut");
        logOut->setGeometry(QRect(1050, 30, 121, 31));
        logOut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2196F3;\n"
"    color: #FFFFFF;\n"
"    border-radius: 14px;\n"
"    padding: 4px 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1976D2;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        AdminMenu->setCentralWidget(centralwidget);

        retranslateUi(AdminMenu);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMenu)
    {
        AdminMenu->setWindowTitle(QCoreApplication::translate("AdminMenu", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AdminMenu", "Item Sold", nullptr));
        label_6->setText(QCoreApplication::translate("AdminMenu", "Total Cost", nullptr));
        label_7->setText(QCoreApplication::translate("AdminMenu", "Total profit", nullptr));
        label_8->setText(QCoreApplication::translate("AdminMenu", "Item Purchase", nullptr));
        label_9->setText(QCoreApplication::translate("AdminMenu", "Total Cost", nullptr));
        label_10->setText(QCoreApplication::translate("AdminMenu", "Net Total", nullptr));
        ofYear->setText(QCoreApplication::translate("AdminMenu", "Year", nullptr));
        odMonth->setText(QCoreApplication::translate("AdminMenu", "Month", nullptr));
        ofDay->setText(QCoreApplication::translate("AdminMenu", "Day", nullptr));
        label_11->setText(QCoreApplication::translate("AdminMenu", "Revenue", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allUsers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allUsers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allUsers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminMenu", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allUsers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminMenu", "Special User", nullptr));
        label_12->setText(QCoreApplication::translate("AdminMenu", "Customer Managment", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = allEmployee->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = allEmployee->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = allEmployee->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminMenu", "Email", nullptr));
        checkSpecical->setText(QCoreApplication::translate("AdminMenu", "Special", nullptr));
        deleteUser->setText(QCoreApplication::translate("AdminMenu", "Delete User", nullptr));
        deleteEmployee->setText(QCoreApplication::translate("AdminMenu", "Delete Employee", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(report), QCoreApplication::translate("AdminMenu", "Report", nullptr));
        label_2->setText(QCoreApplication::translate("AdminMenu", "All Items", nullptr));
        label_5->setText(QCoreApplication::translate("AdminMenu", "Total Price", nullptr));
        label_4->setText(QCoreApplication::translate("AdminMenu", "Total Items", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = vendorCart->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AdminMenu", "item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = vendorCart->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = vendorCart->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("AdminMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = vendorCart->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("AdminMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = vendorCart->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("AdminMenu", "Quantity", nullptr));
        label_3->setText(QCoreApplication::translate("AdminMenu", "Cart", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = allItems->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("AdminMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = allItems->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = allItems->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("AdminMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = allItems->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("AdminMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = allItems->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("AdminMenu", "Sale Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = allItems->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("AdminMenu", "Quantity", nullptr));
        sendToVendor->setText(QCoreApplication::translate("AdminMenu", "Send to Vendor", nullptr));
        itemID_add->setText(QCoreApplication::translate("AdminMenu", "ID", nullptr));
        itemName_add->setText(QCoreApplication::translate("AdminMenu", "Name", nullptr));
        itemCatagory_add->setText(QCoreApplication::translate("AdminMenu", "Catagory", nullptr));
        itemPrice_add->setText(QCoreApplication::translate("AdminMenu", "Price", nullptr));
        itemSalePrice_add->setText(QCoreApplication::translate("AdminMenu", "Sale", nullptr));
        addItem->setText(QCoreApplication::translate("AdminMenu", "Add Item", nullptr));
        selectedItem_forCart->setText(QCoreApplication::translate("AdminMenu", "Selected Item", nullptr));
        addToCart_forCart->setText(QCoreApplication::translate("AdminMenu", "Add to Cart", nullptr));
        removeFromCart->setText(QCoreApplication::translate("AdminMenu", "Remove", nullptr));
        refeshCart->setText(QCoreApplication::translate("AdminMenu", "Refresh", nullptr));
        removeItem->setText(QCoreApplication::translate("AdminMenu", "Remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(inventoryTab), QCoreApplication::translate("AdminMenu", "Inventory", nullptr));
        emailLabel->setText(QCoreApplication::translate("AdminMenu", "email", nullptr));
        nameLabel->setText(QCoreApplication::translate("AdminMenu", "name", nullptr));
        logOut->setText(QCoreApplication::translate("AdminMenu", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
