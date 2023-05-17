/********************************************************************************
** Form generated from reading UI file 'doneshoping.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONESHOPING_H
#define UI_DONESHOPING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoneShoping
{
public:
    QTableWidget *itemCart;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLineEdit *totalItems;
    QLineEdit *totalPrice;
    QLineEdit *discount;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DoneShoping)
    {
        if (DoneShoping->objectName().isEmpty())
            DoneShoping->setObjectName("DoneShoping");
        DoneShoping->resize(728, 475);
        itemCart = new QTableWidget(DoneShoping);
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
        itemCart->setGeometry(QRect(20, 20, 551, 271));
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
        layoutWidget = new QWidget(DoneShoping);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 310, 211, 102));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        totalItems = new QLineEdit(layoutWidget);
        totalItems->setObjectName("totalItems");
        totalItems->setReadOnly(true);

        verticalLayout->addWidget(totalItems);

        totalPrice = new QLineEdit(layoutWidget);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setReadOnly(true);

        verticalLayout->addWidget(totalPrice);

        discount = new QLineEdit(layoutWidget);
        discount->setObjectName("discount");
        discount->setReadOnly(true);

        verticalLayout->addWidget(discount);


        horizontalLayout_2->addLayout(verticalLayout);

        widget = new QWidget(DoneShoping);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(300, 380, 271, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(DoneShoping);

        QMetaObject::connectSlotsByName(DoneShoping);
    } // setupUi

    void retranslateUi(QDialog *DoneShoping)
    {
        DoneShoping->setWindowTitle(QCoreApplication::translate("DoneShoping", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = itemCart->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DoneShoping", "item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = itemCart->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DoneShoping", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = itemCart->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DoneShoping", "Catagory", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = itemCart->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DoneShoping", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = itemCart->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DoneShoping", "Quantity", nullptr));
        label_5->setText(QCoreApplication::translate("DoneShoping", "Total Price", nullptr));
        label_4->setText(QCoreApplication::translate("DoneShoping", "Total Amount", nullptr));
        label_6->setText(QCoreApplication::translate("DoneShoping", "Change", nullptr));
        pushButton->setText(QCoreApplication::translate("DoneShoping", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DoneShoping", "Cancel my order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoneShoping: public Ui_DoneShoping {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONESHOPING_H
