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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerMenu
{
public:
    QWidget *centralwidget;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QTableWidget *allItems;
    QTableWidget *itemCart;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *doneShoping;
    QPushButton *addToCart;
    QSpinBox *itemQuantity;
    QLineEdit *selectedItem;
    QComboBox *itemCatagory;
    QLineEdit *selectedItem_Cart;
    QSpinBox *itemQuantity_2;
    QPushButton *removeFromCart;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *cash;
    QLineEdit *change;
    QLineEdit *totalItems;
    QLineEdit *totalPrice;
    QLineEdit *discount;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QFrame *line;
    QPushButton *logOut;

    void setupUi(QMainWindow *CustomerMenu)
    {
        if (CustomerMenu->objectName().isEmpty())
            CustomerMenu->setObjectName("CustomerMenu");
        CustomerMenu->resize(1072, 633);
        CustomerMenu->setStyleSheet(QString::fromUtf8("background-color:rgb(214, 231, 243);"));
        centralwidget = new QWidget(CustomerMenu);
        centralwidget->setObjectName("centralwidget");
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(20, 10, 451, 41));
        nameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:32px;\n"
"}\n"
""));
        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(500, 10, 411, 41));
        emailLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:32px;\n"
"}\n"
""));
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
        allItems->setGeometry(QRect(20, 100, 451, 451));
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
        itemCart->setGeometry(QRect(500, 100, 551, 271));
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
        label_2->setGeometry(QRect(20, 70, 63, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(500, 60, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"}\n"
""));
        doneShoping = new QPushButton(centralwidget);
        doneShoping->setObjectName("doneShoping");
        doneShoping->setGeometry(QRect(900, 570, 151, 41));
        doneShoping->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2196F3;\n"
"    color: #FFFFFF;\n"
"    border-radius: 20px;\n"
"    padding: 10px 20px;\n"
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
        addToCart = new QPushButton(centralwidget);
        addToCart->setObjectName("addToCart");
        addToCart->setGeometry(QRect(350, 560, 121, 31));
        addToCart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        itemQuantity = new QSpinBox(centralwidget);
        itemQuantity->setObjectName("itemQuantity");
        itemQuantity->setGeometry(QRect(280, 560, 61, 31));
        itemQuantity->setMinimumSize(QSize(61, 31));
        itemQuantity->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        selectedItem = new QLineEdit(centralwidget);
        selectedItem->setObjectName("selectedItem");
        selectedItem->setGeometry(QRect(20, 560, 131, 31));
        selectedItem->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        itemCatagory = new QComboBox(centralwidget);
        itemCatagory->setObjectName("itemCatagory");
        itemCatagory->setGeometry(QRect(160, 560, 111, 31));
        itemCatagory->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        selectedItem_Cart = new QLineEdit(centralwidget);
        selectedItem_Cart->setObjectName("selectedItem_Cart");
        selectedItem_Cart->setGeometry(QRect(500, 380, 231, 31));
        selectedItem_Cart->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        itemQuantity_2 = new QSpinBox(centralwidget);
        itemQuantity_2->setObjectName("itemQuantity_2");
        itemQuantity_2->setGeometry(QRect(740, 380, 51, 31));
        itemQuantity_2->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        removeFromCart = new QPushButton(centralwidget);
        removeFromCart->setObjectName("removeFromCart");
        removeFromCart->setGeometry(QRect(800, 380, 161, 31));
        removeFromCart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(970, 380, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(790, 440, 52, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"}\n"
""));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(790, 490, 71, 21));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"}\n"
""));
        cash = new QLineEdit(centralwidget);
        cash->setObjectName("cash");
        cash->setGeometry(QRect(870, 440, 166, 31));
        cash->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        cash->setReadOnly(false);
        change = new QLineEdit(centralwidget);
        change->setObjectName("change");
        change->setGeometry(QRect(870, 480, 166, 31));
        change->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        change->setReadOnly(true);
        totalItems = new QLineEdit(centralwidget);
        totalItems->setObjectName("totalItems");
        totalItems->setGeometry(QRect(620, 470, 74, 31));
        totalItems->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        totalItems->setReadOnly(true);
        totalPrice = new QLineEdit(centralwidget);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setGeometry(QRect(620, 430, 74, 31));
        totalPrice->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        totalPrice->setReadOnly(true);
        discount = new QLineEdit(centralwidget);
        discount->setObjectName("discount");
        discount->setGeometry(QRect(620, 510, 74, 31));
        discount->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        discount->setReadOnly(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(510, 430, 84, 28));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(510, 470, 84, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"}\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(510, 510, 79, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"}\n"
""));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(507, 544, 541, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        logOut = new QPushButton(centralwidget);
        logOut->setObjectName("logOut");
        logOut->setGeometry(QRect(930, 30, 121, 31));
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
        CustomerMenu->setCentralWidget(centralwidget);

        retranslateUi(CustomerMenu);

        QMetaObject::connectSlotsByName(CustomerMenu);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerMenu)
    {
        CustomerMenu->setWindowTitle(QCoreApplication::translate("CustomerMenu", "MainWindow", nullptr));
        nameLabel->setText(QCoreApplication::translate("CustomerMenu", "name", nullptr));
        emailLabel->setText(QCoreApplication::translate("CustomerMenu", "email", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allItems->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CustomerMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allItems->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CustomerMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allItems->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CustomerMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allItems->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CustomerMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = itemCart->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CustomerMenu", "item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = itemCart->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CustomerMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = itemCart->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CustomerMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = itemCart->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CustomerMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = itemCart->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("CustomerMenu", "Quantity", nullptr));
        label_2->setText(QCoreApplication::translate("CustomerMenu", "All Items", nullptr));
        label_3->setText(QCoreApplication::translate("CustomerMenu", "Cart", nullptr));
        doneShoping->setText(QCoreApplication::translate("CustomerMenu", "Done Shoping", nullptr));
        addToCart->setText(QCoreApplication::translate("CustomerMenu", "Add to Cart", nullptr));
        selectedItem->setText(QCoreApplication::translate("CustomerMenu", "Selected Item", nullptr));
        selectedItem_Cart->setText(QCoreApplication::translate("CustomerMenu", "Selected Item", nullptr));
        removeFromCart->setText(QCoreApplication::translate("CustomerMenu", "Remove From Cart", nullptr));
        pushButton->setText(QCoreApplication::translate("CustomerMenu", "Refresh", nullptr));
        label_8->setText(QCoreApplication::translate("CustomerMenu", "Cash", nullptr));
        label_10->setText(QCoreApplication::translate("CustomerMenu", "Change", nullptr));
        label_5->setText(QCoreApplication::translate("CustomerMenu", "Total Price", nullptr));
        label_4->setText(QCoreApplication::translate("CustomerMenu", "Total Items", nullptr));
        label_6->setText(QCoreApplication::translate("CustomerMenu", "Discount", nullptr));
        logOut->setText(QCoreApplication::translate("CustomerMenu", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerMenu: public Ui_CustomerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEW_H
