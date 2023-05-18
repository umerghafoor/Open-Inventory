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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QVBoxLayout *title;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *SignInMenu)
    {
        if (SignInMenu->objectName().isEmpty())
            SignInMenu->setObjectName("SignInMenu");
        SignInMenu->resize(749, 442);
        SignInMenu->setStyleSheet(QString::fromUtf8("background-color:rgb(214, 231, 243);"));
        centralWidget = new QWidget(SignInMenu);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(320, 70, 321, 281));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        userType = new QComboBox(groupBox);
        userType->addItem(QString());
        userType->addItem(QString());
        userType->addItem(QString());
        userType->setObjectName("userType");
        userType->setGeometry(QRect(200, 40, 111, 31));
        userType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #4da6ff;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"    color: #FFFFFF;\n"
"    font-weight: bold;\n"
"	text-align: center;\n"
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
"QComboBox::down-arrow\n"
" {\n"
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
"}\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 30px;\n"
"	\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    background-color: white;\n"
"    border-radius: 15px;"
                        "\n"
"    font-weight: bold;\n"
"    \n"
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
"QComboBox::focus \n"
"{\n"
"    border: none;\n"
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
"    color: black;\n"
"}"));
        Pass_text = new QLabel(groupBox);
        Pass_text->setObjectName("Pass_text");
        Pass_text->setGeometry(QRect(10, 170, 81, 16));
        Pass_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"}"));
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 250, 212, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"}"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QFont font;
        font.setItalic(true);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: blue;\n"
"}"));

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
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"}"));
        label_3->setLineWidth(5);

        title->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"}"));
        label_4->setLineWidth(5);

        title->addWidget(label_4);

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
        label_5->setText(QCoreApplication::translate("SignInMenu", "donot have an accocunt", nullptr));
        label_6->setText(QCoreApplication::translate("SignInMenu", "SignUp", nullptr));
        label_3->setText(QCoreApplication::translate("SignInMenu", "Inventory", nullptr));
        label_4->setText(QCoreApplication::translate("SignInMenu", "System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignInMenu: public Ui_SignInMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYSYSYTEMGUI_H
