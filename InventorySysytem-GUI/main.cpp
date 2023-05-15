#include "InventorySysytemGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InventorySysytemGUI w;
    w.show();
    return a.exec();
    //main
}


class userqwerty
{
protected:
    int ID;
    std::string name;
    std::string email;
    std::string password;
    bool specialUser;
    bool logedIn;

    //Constructors
public:
    userqwerty() {}
    userqwerty(int, std::string, std::string, std::string, bool);

    //virtual funtions
    virtual bool editQuantity(int itemId, int quantity) = 0;
    virtual bool checkID(std::string, std::string) = 0;
    virtual void logOut() = 0;
};
userqwerty::userqwerty(int _ID, std::string _name, std::string _email, std::string _password, bool _specialUser)
{
    this->ID = _ID;
    this->name = _name;
    this->email = _email;
    this->password = _password;
    this->specialUser = _specialUser;
}
