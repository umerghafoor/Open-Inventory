#pragma once

class user
{
protected:
	int ID;
	std::string name;
	std::string email;
	std::string password;
	bool specialUser;
	//functions
	bool logedIn;
	bool checkID(std::string, std::string);
	void logOut();
	//Constructors
public:
	user() {}
	user(int, std::string, std::string, std::string, bool);

};

user::user(int _ID, std::string _name, std::string _email, std::string _password,bool _specialUser)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;
	this->specialUser = _specialUser;
}

bool user::checkID(std::string password, std::string newpassword)
{
	if (password == newpassword)
		return true;
	else
		return false;
}

void user::logOut()
{
	logedIn = false;
}
