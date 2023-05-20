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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignInMenu
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
    QLabel *picture;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QMainWindow *SignInMenu)
    {
        if (SignInMenu->objectName().isEmpty())
            SignInMenu->setObjectName("SignInMenu");
        SignInMenu->resize(749, 442);
        SignInMenu->setStyleSheet(QString::fromUtf8("background-color:rgb(214, 231, 243);\n"
""));
        centralWidget = new QWidget(SignInMenu);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(320, 70, 321, 281));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border-radius: 15px;\n"
"	background-color: #c2dcf2;\n"
"	\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QGroupBox:hover, QGroupBox:focus {\n"
"    border: 1px solid #4da6ff;\n"
"}\n"
""));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        userType = new QComboBox(groupBox);
        userType->addItem(QString());
        userType->addItem(QString());
        userType->addItem(QString());
        userType->setObjectName("userType");
        userType->setGeometry(QRect(180, 40, 131, 31));
        userType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"	padding-left: 14px;\n"
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
""
                        "}\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
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
"    margin-bot"
                        "tom: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::scrollbar-handle:horizontal {\n"
"    min-width: 20px;\n"
"}\n"
""));
        ID = new QLineEdit(groupBox);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(110, 110, 171, 31));
        ID->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 15px;\n"
"    background-color: white;\n"
"	font-size: 16px;\n"
"	padding-left: 10px;\n"
"    padding-right: 10px; \n"
"}\n"
"\n"
"QLineEdit:focus, QLineEdit:hover {\n"
"    border: 1px solid #4da6ff;\n"
"}"));
        ID->setFrame(false);
        UserID_text = new QLabel(groupBox);
        UserID_text->setObjectName("UserID_text");
        UserID_text->setGeometry(QRect(10, 120, 71, 16));
        UserID_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	background-color: transparent;\n"
"}\n"
""));
        Pass_text = new QLabel(groupBox);
        Pass_text->setObjectName("Pass_text");
        Pass_text->setGeometry(QRect(10, 170, 81, 16));
        Pass_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	background-color: transparent;\n"
"}\n"
""));
        logIn_button = new QPushButton(groupBox);
        logIn_button->setObjectName("logIn_button");
        logIn_button->setGeometry(QRect(210, 200, 91, 41));
        logIn_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setGeometry(QRect(110, 160, 171, 31));
        password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-radius: 15px;\n"
"    background-color: white;\n"
"	font-size: 16px;\n"
"	padding-left: 10px;\n"
"    padding-right: 10px; \n"
"}\n"
"\n"
"QLineEdit:focus, QLineEdit:hover {\n"
"    border: 1px solid #4da6ff;\n"
"}"));
        password->setFrame(false);
        password->setEchoMode(QLineEdit::Password);
        picture = new QLabel(centralWidget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(40, 100, 241, 251));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(370, 350, 221, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"	background-color: transparent;\n"
"}"));

        horizontalLayout->addWidget(label_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    color: blue;\n"
"    padding: 0px 0px;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton);

        SignInMenu->setCentralWidget(centralWidget);

        retranslateUi(SignInMenu);

        QMetaObject::connectSlotsByName(SignInMenu);
    } // setupUi

    void retranslateUi(QMainWindow *SignInMenu)
    {
        SignInMenu->setWindowTitle(QCoreApplication::translate("SignInMenu", "InventorySysytemGUI", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignInMenu", "Login", nullptr));
        userType->setItemText(0, QCoreApplication::translate("SignInMenu", "Admin", nullptr));
        userType->setItemText(1, QCoreApplication::translate("SignInMenu", "Customer", nullptr));
        userType->setItemText(2, QCoreApplication::translate("SignInMenu", "Employee", nullptr));

        ID->setText(QString());
        ID->setPlaceholderText(QString());
        UserID_text->setText(QCoreApplication::translate("SignInMenu", "UserID :", nullptr));
        Pass_text->setText(QCoreApplication::translate("SignInMenu", "Password :", nullptr));
        logIn_button->setText(QCoreApplication::translate("SignInMenu", "LogIn", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QString());
        picture->setText(QString());
        label_5->setText(QCoreApplication::translate("SignInMenu", "donot have an accocunt", nullptr));
        pushButton->setText(QCoreApplication::translate("SignInMenu", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignInMenu: public Ui_SignInMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYSYSYTEMGUI_H
