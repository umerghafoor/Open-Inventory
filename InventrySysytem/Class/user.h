#pragma once
class user
{
protected:
	int ID;
	std::string name;
	std::string email;
	std::string password;
	bool checkID(std::string, std::string);

};

bool user::checkID(std::string password, std::string newpassword)
{
	if (password == newpassword)
		return true;
	else
		return false;
}