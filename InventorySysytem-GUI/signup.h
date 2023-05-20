#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

#include "Class/user.h"
#include "Class/admin.h"
#include "Class/customer.h"
#include "Class/venderor.h"

namespace Ui {
class SignUp;
}

class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
signals:
    void finished();
private:
    Ui::SignUp *ui;
    user *userPtr;

protected:
    void closeEvent(QCloseEvent* event) override;
private slots:
    void on_SignUp_button_clicked();
};

#endif // SIGNUP_H
