#pragma once

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
};

user::user(int _ID, std::string _name, std::string _email, std::string _password,bool _specialUser)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;
	this->specialUser = _specialUser;
}

