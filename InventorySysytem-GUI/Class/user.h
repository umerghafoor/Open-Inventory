#pragma once
#include <string>

class user
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
	user() {}
	user(int, std::string, std::string, std::string, bool);

	//virtual funtions
	virtual bool editQuantity(int itemId, int quantity) = 0;
	virtual bool checkID(std::string, std::string) = 0;
    virtual void logOut() = 0;
    virtual int getID() = 0;
    virtual std::string getName() = 0;
    virtual std::string getEmail() = 0;
    virtual bool UserSignUp(int _ID, std::string, std::string, std::string,bool) = 0;

};
