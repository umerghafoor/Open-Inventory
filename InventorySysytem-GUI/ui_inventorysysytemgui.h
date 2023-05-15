/********************************************************************************
** Form generated from reading UI file 'inventorysysytemgui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYSYSYTEMGUI_H
#define UI_INVENTORYSYSYTEMGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InventorySysytemGUIClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *userType;
    QLineEdit *ID;
    QLabel *UserID_text;
    QLabel *Pass_text;
    QPushButton *logIn_button;
    QLineEdit *password;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QVBoxLayout *title;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *InventorySysytemGUIClass)
    {
        if (InventorySysytemGUIClass->objectName().isEmpty())
            InventorySysytemGUIClass->setObjectName("InventorySysytemGUIClass");
        InventorySysytemGUIClass->resize(749, 442);
        centralWidget = new QWidget(InventorySysytemGUIClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(310, 100, 321, 231));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        userType = new QComboBox(groupBox);
        userType->addItem(QString());
        userType->addItem(QString());
        userType->addItem(QString());
        userType->setObjectName("userType");
        userType->setGeometry(QRect(210, 40, 91, 22));
        ID = new QLineEdit(groupBox);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(110, 80, 161, 21));
        ID->setFrame(false);
        UserID_text = new QLabel(groupBox);
        UserID_text->setObjectName("UserID_text");
        UserID_text->setGeometry(QRect(10, 80, 49, 16));
        Pass_text = new QLabel(groupBox);
        Pass_text->setObjectName("Pass_text");
        Pass_text->setGeometry(QRect(10, 120, 49, 16));
        logIn_button = new QPushButton(groupBox);
        logIn_button->setObjectName("logIn_button");
        logIn_button->setGeometry(QRect(190, 160, 75, 24));
        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setGeometry(QRect(110, 120, 161, 21));
        password->setFrame(false);
        password->setEchoMode(QLineEdit::Password);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 200, 212, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QFont font;
        font.setItalic(true);
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(80, 180, 161, 97));
        title = new QVBoxLayout(layoutWidget1);
        title->setSpacing(6);
        title->setContentsMargins(11, 11, 11, 11);
        title->setObjectName("title");
        title->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(20);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setLineWidth(5);

        title->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setLineWidth(5);

        title->addWidget(label_4);

        InventorySysytemGUIClass->setCentralWidget(centralWidget);

        retranslateUi(InventorySysytemGUIClass);

        QMetaObject::connectSlotsByName(InventorySysytemGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *InventorySysytemGUIClass)
    {
        InventorySysytemGUIClass->setWindowTitle(QCoreApplication::translate("InventorySysytemGUIClass", "InventorySysytemGUI", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InventorySysytemGUIClass", "Login", nullptr));
        userType->setItemText(0, QCoreApplication::translate("InventorySysytemGUIClass", "Admin", nullptr));
        userType->setItemText(1, QCoreApplication::translate("InventorySysytemGUIClass", "Customer", nullptr));
        userType->setItemText(2, QCoreApplication::translate("InventorySysytemGUIClass", "Employee", nullptr));

        ID->setText(QString());
        ID->setPlaceholderText(QString());
        UserID_text->setText(QCoreApplication::translate("InventorySysytemGUIClass", "UserID :", nullptr));
        Pass_text->setText(QCoreApplication::translate("InventorySysytemGUIClass", "Password :", nullptr));
        logIn_button->setText(QCoreApplication::translate("InventorySysytemGUIClass", "LogIn", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QString());
        label_5->setText(QCoreApplication::translate("InventorySysytemGUIClass", "donot have an accocunt", nullptr));
        label_6->setText(QCoreApplication::translate("InventorySysytemGUIClass", "SignUp", nullptr));
        label_3->setText(QCoreApplication::translate("InventorySysytemGUIClass", "Inventory", nullptr));
        label_4->setText(QCoreApplication::translate("InventorySysytemGUIClass", "System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InventorySysytemGUIClass: public Ui_InventorySysytemGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYSYSYTEMGUI_H
