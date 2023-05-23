#include "signup.h"
#include "ui_signup.h"

#include <QCloseEvent>
#include <QMessageBox>

SignUp::SignUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);

    QPixmap icon(QString::fromStdString(iconPath));
    ui->picture->setPixmap(icon);
}

SignUp::~SignUp()
{
    delete ui;
    delete userPtr;
}

void SignUp::closeEvent(QCloseEvent* event)
{
    emit finished();
    event->accept();
}

void SignUp::on_SignUp_button_clicked()
{
    try
    {
        std::stoi(ui->ID->text().toStdString());
    }
    catch (std::exception& e)
    {
        QMessageBox::warning(this, "SignUp Error", "ID must be Integer");
        return;
    }

    std::string userID = ui->ID->text().toStdString();
    std::string password = ui->password_1->text().toStdString();

    if(ui->userType->currentIndex() == 1)
    {
        if(ui->password_1->text()==ui->password_2->text())
        {
            userPtr = new Customer(1,"1");
            if(userPtr->UserSignUp(stoi(userID),ui->Name->text().toStdString(),ui->Email->text().toStdString(),password,0))
            {
                QMessageBox::information(this, "SignUp Succes", "User has been Created");
                this->close();
            }
            else
            {
                QMessageBox::warning(this, "SignUp Error", "UserAlreadyExist");
                delete userPtr;
            }
        }
        else
        {
            QMessageBox::warning(this, "SignUp Error", "Password donot match");
        }
    }
    else if(ui->userType->currentIndex() == 0)
    {
        if (ui->password_1->text() == ui->password_2->text())
        {
            userPtr = new  Admin(1, "1");
            if (userPtr->UserSignUp(stoi(userID), ui->Name->text().toStdString(), ui->Email->text().toStdString(), password, 0))
            {
                QMessageBox::information(this, "SignUp Succes", "User has been Created");
                this->close();
            }
            else
            {
                QMessageBox::warning(this, "SignUp Error", "UserAlreadyExist");
                delete userPtr;
            }
        }
        else
        {
            QMessageBox::warning(this, "SignUp Error", "Password donot match");
        }
    }
    else if(ui->userType->currentIndex() == 2)
    {
        if(ui->password_1->text()==ui->password_2->text())
        {
            userPtr = new Vendor(1,"1");
            if(userPtr->UserSignUp(stoi(userID),ui->Name->text().toStdString(),ui->Email->text().toStdString(),password,0))
            {
                QMessageBox::information(this, "SignUp Succes", "User has been Created");
                this->close();
            }
            else
            {
                QMessageBox::warning(this, "SignUp Error", "UserAlreadyExist");
                delete userPtr;
            }
        }
        else
        {
            QMessageBox::warning(this, "SignUp Error", "Password donot match");
        }
    }
    else
    {
        QMessageBox ::warning(this, "SignUp Type Error", "Please select the valid type");
    }

}

