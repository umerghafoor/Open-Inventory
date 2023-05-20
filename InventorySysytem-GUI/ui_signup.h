/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QPushButton *SignUp_button;
    QLineEdit *ID;
    QLineEdit *Email;
    QLineEdit *Name;
    QLineEdit *password_1;
    QLineEdit *password_2;
    QLabel *picture;
    QLabel *UserID_text;
    QComboBox *userType;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(800, 600);
        SignUp->setStyleSheet(QString::fromUtf8("background-color:rgb(214, 231, 243);"));
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName("centralwidget");
        SignUp_button = new QPushButton(centralwidget);
        SignUp_button->setObjectName("SignUp_button");
        SignUp_button->setGeometry(QRect(510, 420, 111, 41));
        SignUp_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        ID = new QLineEdit(centralwidget);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(400, 180, 221, 31));
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
        ID->setEchoMode(QLineEdit::Normal);
        Email = new QLineEdit(centralwidget);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(400, 260, 221, 31));
        Email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        Email->setFrame(false);
        Email->setEchoMode(QLineEdit::Normal);
        Name = new QLineEdit(centralwidget);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(400, 220, 221, 31));
        Name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        Name->setFrame(false);
        Name->setEchoMode(QLineEdit::Normal);
        password_1 = new QLineEdit(centralwidget);
        password_1->setObjectName("password_1");
        password_1->setGeometry(QRect(400, 300, 221, 31));
        password_1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        password_1->setFrame(false);
        password_1->setEchoMode(QLineEdit::Password);
        password_2 = new QLineEdit(centralwidget);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(400, 340, 221, 31));
        password_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        password_2->setFrame(false);
        password_2->setEchoMode(QLineEdit::Password);
        picture = new QLabel(centralwidget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(90, 150, 241, 251));
        UserID_text = new QLabel(centralwidget);
        UserID_text->setObjectName("UserID_text");
        UserID_text->setGeometry(QRect(400, 140, 71, 16));
        UserID_text->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2196F3;\n"
"    font-weight: bold;\n"
"	background-color: transparent;\n"
"}\n"
""));
        userType = new QComboBox(centralwidget);
        userType->addItem(QString());
        userType->addItem(QString());
        userType->addItem(QString());
        userType->setObjectName("userType");
        userType->setGeometry(QRect(400, 380, 221, 31));
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
        SignUp->setCentralWidget(centralwidget);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        SignUp_button->setText(QCoreApplication::translate("SignUp", "SignUp", nullptr));
        ID->setText(QCoreApplication::translate("SignUp", "ID", nullptr));
        ID->setPlaceholderText(QString());
        Email->setText(QCoreApplication::translate("SignUp", "example@email.com", nullptr));
        Email->setPlaceholderText(QString());
        Name->setText(QCoreApplication::translate("SignUp", "Name", nullptr));
        Name->setPlaceholderText(QString());
        password_1->setText(QString());
        password_1->setPlaceholderText(QString());
        password_2->setText(QString());
        password_2->setPlaceholderText(QString());
        picture->setText(QString());
        UserID_text->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        userType->setItemText(0, QCoreApplication::translate("SignUp", "Admin", nullptr));
        userType->setItemText(1, QCoreApplication::translate("SignUp", "Customer", nullptr));
        userType->setItemText(2, QCoreApplication::translate("SignUp", "Employee", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
