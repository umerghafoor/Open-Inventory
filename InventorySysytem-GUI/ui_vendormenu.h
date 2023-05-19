/********************************************************************************
** Form generated from reading UI file 'vendormenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDORMENU_H
#define UI_VENDORMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VendorMenu
{
public:
    QWidget *centralwidget;
    QTableWidget *allItems;
    QLabel *label;
    QTableWidget *venderCart;
    QPushButton *aprove;
    QPushButton *reload;
    QPushButton *deny;
    QLineEdit *totalNo;
    QLabel *label_2;
    QLineEdit *totalPrice;
    QLabel *label_3;
    QPushButton *logOut;
    QLabel *emailLabel;
    QLabel *nameLabel;
    QLabel *label_4;

    void setupUi(QMainWindow *VendorMenu)
    {
        if (VendorMenu->objectName().isEmpty())
            VendorMenu->setObjectName("VendorMenu");
        VendorMenu->resize(1280, 724);
        VendorMenu->setStyleSheet(QString::fromUtf8("background-color:rgb(214, 231, 243);"));
        centralwidget = new QWidget(VendorMenu);
        centralwidget->setObjectName("centralwidget");
        allItems = new QTableWidget(centralwidget);
        if (allItems->columnCount() < 6)
            allItems->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        allItems->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        allItems->setObjectName("allItems");
        allItems->setEnabled(true);
        allItems->setGeometry(QRect(10, 90, 621, 621));
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 63, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"}\n"
""));
        venderCart = new QTableWidget(centralwidget);
        if (venderCart->columnCount() < 5)
            venderCart->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        venderCart->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        venderCart->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        venderCart->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        venderCart->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        venderCart->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        venderCart->setObjectName("venderCart");
        venderCart->setEnabled(true);
        venderCart->setGeometry(QRect(640, 90, 621, 551));
        venderCart->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        venderCart->setShowGrid(false);
        venderCart->setGridStyle(Qt::DashLine);
        aprove = new QPushButton(centralwidget);
        aprove->setObjectName("aprove");
        aprove->setGeometry(QRect(1182, 678, 81, 31));
        aprove->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        reload = new QPushButton(centralwidget);
        reload->setObjectName("reload");
        reload->setGeometry(QRect(1100, 678, 71, 31));
        reload->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        deny = new QPushButton(centralwidget);
        deny->setObjectName("deny");
        deny->setGeometry(QRect(1030, 678, 61, 31));
        deny->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        totalNo = new QLineEdit(centralwidget);
        totalNo->setObjectName("totalNo");
        totalNo->setGeometry(QRect(710, 677, 113, 31));
        totalNo->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(650, 680, 63, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"}\n"
""));
        totalPrice = new QLineEdit(centralwidget);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setGeometry(QRect(910, 677, 113, 31));
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(840, 680, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"}\n"
""));
        logOut = new QPushButton(centralwidget);
        logOut->setObjectName("logOut");
        logOut->setGeometry(QRect(1050, 10, 121, 31));
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
        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(300, 10, 421, 41));
        emailLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:32px;\n"
"}\n"
""));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(20, 10, 281, 41));
        nameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	font-size:32px;\n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(640, 60, 241, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"}\n"
""));
        VendorMenu->setCentralWidget(centralwidget);

        retranslateUi(VendorMenu);

        QMetaObject::connectSlotsByName(VendorMenu);
    } // setupUi

    void retranslateUi(QMainWindow *VendorMenu)
    {
        VendorMenu->setWindowTitle(QCoreApplication::translate("VendorMenu", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allItems->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("VendorMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allItems->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("VendorMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allItems->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("VendorMenu", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allItems->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("VendorMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = allItems->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("VendorMenu", "Sale Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = allItems->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("VendorMenu", "Quantity", nullptr));
        label->setText(QCoreApplication::translate("VendorMenu", "All Items", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = venderCart->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("VendorMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = venderCart->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("VendorMenu", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = venderCart->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("VendorMenu", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = venderCart->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("VendorMenu", "Sale Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = venderCart->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("VendorMenu", "Quantity", nullptr));
        aprove->setText(QCoreApplication::translate("VendorMenu", "Aprove", nullptr));
        reload->setText(QCoreApplication::translate("VendorMenu", "Reload", nullptr));
        deny->setText(QCoreApplication::translate("VendorMenu", "Deny", nullptr));
        label_2->setText(QCoreApplication::translate("VendorMenu", "Total", nullptr));
        label_3->setText(QCoreApplication::translate("VendorMenu", "Price", nullptr));
        logOut->setText(QCoreApplication::translate("VendorMenu", "Log Out", nullptr));
        emailLabel->setText(QCoreApplication::translate("VendorMenu", "email", nullptr));
        nameLabel->setText(QCoreApplication::translate("VendorMenu", "name", nullptr));
        label_4->setText(QCoreApplication::translate("VendorMenu", "Requested by Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VendorMenu: public Ui_VendorMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDORMENU_H
