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
        SignInMenu->setStyleSheet(QString::fromUtf8("background:rgb(1, 3, 31);"));
        centralWidget = new QWidget(SignInMenu);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(310, 70, 331, 271));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"  /* GroupBox styles */\n"
"  background-color: rgba(0, 0, 0, 0.5);\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  font-size: 16px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"  /* Title styles */\n"
"  color: white;\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top center;\n"
"  padding: 5px;\n"
"}\n"
"\n"
"@keyframes glowing {\n"
"  0% { box-shadow: 0 0 5px #38FFD8; }\n"
"  50% { box-shadow: 0 0 20px #38FFD8; }\n"
"  100% { box-shadow: 0 0 5px #38FFD8; }\n"
"}\n"
"\n"
"QGroupBox:hover {\n"
"  /* Neon effect on hover */\n"
"  color: #38FFD8;\n"
"  border: 1px solid #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QGroupBox:focus {\n"
"  /* Neon effect when focused */\n"
"  color: #00E1FF;\n"
"  border: 1px solid #00E1FF;\n"
"  outline: none;\n"
"  animation: glowing 1s infinite;\n"
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
"  /* Combobox styles */\n"
"  background-color: black;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 5px;\n"
"  font-size: 14px;\n"
"}\n"
"\n"
"@keyframes glowing {\n"
"  0% { box-shadow: 0 0 5px #38FFD8; }\n"
"  50% { box-shadow: 0 0 20px #38FFD8; }\n"
"  100% { box-shadow: 0 0 5px #38FFD8; }\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"  /* Neon effect on hover */\n"
"  border: 1px solid #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"  color: white;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"  /* Neon effect when focused */\n"
"  color: #00E1FF;\n"
"  border: 1px solid #00E1FF;\n"
"  outline: none;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"  /* Dropdown arrow styles */\n"
"  image: url(down_arrow.png); /* Replace with your own arrow image */\n"
"  width: 12px;\n"
"  height: 12px;\n"
"  padding-right: 5px;\n"
"  padding-bottom: 2px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"  /* Dropdown button styles */\n"
"  width: 15px;\n"
"  height: 15px;\n"
"  border:"
                        " none;\n"
"  background-color: transparent;\n"
"  color: white;\n"
"}\n"
"\n"
"QComboBox::drop-down:hover {\n"
"  /* Neon effect on dropdown button hover */\n"
"  color: #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QComboBox::drop-down:on {\n"
"  /* Neon effect on dropdown button pressed */\n"
"  color: #00E1FF;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
""));
        ID = new QLineEdit(groupBox);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(130, 110, 171, 31));
        ID->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  /* Line edit styles */\n"
"  background-color: black;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 5px;\n"
"  font-size: 14px;\n"
"}\n"
"\n"
"@keyframes glowing {\n"
"  0% { box-shadow: 0 0 5px #38FFD8; }\n"
"  50% { box-shadow: 0 0 20px #38FFD8; }\n"
"  100% { box-shadow: 0 0 5px #38FFD8; }\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  /* Neon effect on hover */\n"
"  color: #38FFD8;\n"
"  border: 1px solid #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  /* Neon effect when focused */\n"
"  color: #00E1FF;\n"
"  border: 1px solid #00E1FF;\n"
"  outline: none;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
""));
        ID->setFrame(false);
        UserID_text = new QLabel(groupBox);
        UserID_text->setObjectName("UserID_text");
        UserID_text->setGeometry(QRect(30, 120, 71, 16));
        UserID_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  /* QLabel styles */\n"
"  color: white;\n"
"  font-size: 16px;\n"
"	background:transparent;\n"
"}\n"
"\n"
"@keyframes glowing {\n"
"  0% { box-shadow: 0 0 5px #38FFD8; }\n"
"  50% { box-shadow: 0 0 20px #38FFD8; }\n"
"  100% { box-shadow: 0 0 5px #38FFD8; }\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  /* Neon effect on hover */\n"
"  color: #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QLabel:focus {\n"
"  /* Neon effect when focused */\n"
"  color: #00E1FF;\n"
"  outline: none;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
""));
        Pass_text = new QLabel(groupBox);
        Pass_text->setObjectName("Pass_text");
        Pass_text->setGeometry(QRect(30, 170, 81, 16));
        Pass_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  /* QLabel styles */\n"
"  color: white;\n"
"  font-size: 16px;\n"
"	background:transparent;\n"
"}\n"
"\n"
"@keyframes glowing {\n"
"  0% { box-shadow: 0 0 5px #38FFD8; }\n"
"  50% { box-shadow: 0 0 20px #38FFD8; }\n"
"  100% { box-shadow: 0 0 5px #38FFD8; }\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  /* Neon effect on hover */\n"
"  color: #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QLabel:focus {\n"
"  /* Neon effect when focused */\n"
"  color: #00E1FF;\n"
"  outline: none;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
""));
        logIn_button = new QPushButton(groupBox);
        logIn_button->setObjectName("logIn_button");
        logIn_button->setGeometry(QRect(210, 200, 91, 41));
        logIn_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  /* Button styles */\n"
"  background-color: black;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px 20px;\n"
"  font-size: 16px;\n"
"  font-weight: bold;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  /* Neon effect on hover */\n"
"  color: #38FFD8;\n"
"  text-shadow: 0px 0px 10px #38FFD8;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  /* Neon effect when pressed */\n"
"  color: #00E1FF;\n"
"  text-shadow: 0px 0px 10px #00E1FF;\n"
"}\n"
""));
        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setGeometry(QRect(130, 160, 171, 31));
        password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  /* Line edit styles */\n"
"  background-color: black;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 5px;\n"
"  font-size: 14px;\n"
"}\n"
"\n"
"@keyframes glowing {\n"
"  0% { box-shadow: 0 0 5px #38FFD8; }\n"
"  50% { box-shadow: 0 0 20px #38FFD8; }\n"
"  100% { box-shadow: 0 0 5px #38FFD8; }\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  /* Neon effect on hover */\n"
"  color: #38FFD8;\n"
"  border: 1px solid #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  /* Neon effect when focused */\n"
"  color: #00E1FF;\n"
"  border: 1px solid #00E1FF;\n"
"  outline: none;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
""));
        password->setFrame(false);
        password->setEchoMode(QLineEdit::Password);
        picture = new QLabel(centralWidget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(40, 100, 241, 251));
        picture->setStyleSheet(QString::fromUtf8("background:transparent;"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(370, 350, 253, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setAcceptDrops(false);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  /* QLabel styles */\n"
"  color: white;\n"
"  font-size: 16px;\n"
"	background:transparent;\n"
"}\n"
"\n"
"@keyframes glowing {\n"
"  0% { box-shadow: 0 0 5px #38FFD8; }\n"
"  50% { box-shadow: 0 0 20px #38FFD8; }\n"
"  100% { box-shadow: 0 0 5px #38FFD8; }\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  /* Neon effect on hover */\n"
"  color: #38FFD8;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
"\n"
"QLabel:focus {\n"
"  /* Neon effect when focused */\n"
"  color: #00E1FF;\n"
"  outline: none;\n"
"  animation: glowing 1s infinite;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;\n"
"    color: blue;\n"
"    padding: 0px 0px;\n"
"  font-size: 16px;\n"
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
        ID->setPlaceholderText(QCoreApplication::translate("SignInMenu", "User ID (int)", "123"));
        UserID_text->setText(QCoreApplication::translate("SignInMenu", "UserID :", nullptr));
        Pass_text->setText(QCoreApplication::translate("SignInMenu", "Password :", nullptr));
        logIn_button->setText(QCoreApplication::translate("SignInMenu", "LogIn", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("SignInMenu", "Password", nullptr));
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
