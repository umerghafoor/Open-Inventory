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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerView
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CustomerView)
    {
        if (CustomerView->objectName().isEmpty())
            CustomerView->setObjectName("CustomerView");
        CustomerView->resize(800, 600);
        centralwidget = new QWidget(CustomerView);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 130, 63, 20));
        CustomerView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CustomerView);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        CustomerView->setMenuBar(menubar);
        statusbar = new QStatusBar(CustomerView);
        statusbar->setObjectName("statusbar");
        CustomerView->setStatusBar(statusbar);

        retranslateUi(CustomerView);

        QMetaObject::connectSlotsByName(CustomerView);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerView)
    {
        CustomerView->setWindowTitle(QCoreApplication::translate("CustomerView", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CustomerView", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerView: public Ui_CustomerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEW_H
