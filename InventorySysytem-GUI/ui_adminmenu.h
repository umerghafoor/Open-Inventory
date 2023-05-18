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
    QWidget *report;
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
    QTableWidget *itemCart;
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

    void setupUi(QMainWindow *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName("AdminMenu");
        AdminMenu->resize(1195, 759);
        centralwidget = new QWidget(AdminMenu);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 70, 1161, 681));
        tabWidget->setMovable(false);
        report = new QWidget();
        report->setObjectName("report");
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

        itemCart = new QTableWidget(inventoryTab);
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
        itemCart->setGeometry(QRect(630, 50, 511, 451));
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
        label_3 = new QLabel(inventoryTab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(630, 20, 63, 20));
        allItems = new QTableWidget(inventoryTab);
        if (allItems->columnCount() < 6)
            allItems->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        allItems->setObjectName("allItems");
        allItems->setEnabled(true);
        allItems->setGeometry(QRect(0, 50, 621, 491));
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
        AdminMenu->setCentralWidget(centralwidget);

        retranslateUi(AdminMenu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMenu)
    {
        AdminMenu->setWindowTitle(QCoreApplication::translate("AdminMenu", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(report), QCoreApplication::translate("AdminMenu", "Report", nullptr));
        label_2->setText(QCoreApplication::translate("AdminMenu", "All Items", nullptr));
        label_5->setText(QCoreApplication::translate("AdminMenu", "Total Price", nullptr));
        label_4->setText(QCoreApplication::translate("AdminMenu", "Total Items", nullptr));
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
        QTableWidgetItem *___qtablewidgetitem9 = allItems->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("AdminMenu", "Sale Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = allItems->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("AdminMenu", "Quantity", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
