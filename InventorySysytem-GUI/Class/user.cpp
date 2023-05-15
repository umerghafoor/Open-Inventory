#include "user.h"

user::user(int _ID, std::string _name, std::string _email, std::string _password, bool _specialUser)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;
	this->specialUser = _specialUser;
}

