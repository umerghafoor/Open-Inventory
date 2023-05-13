#pragma once
class user
{
protected:
	int ID;
	std::string name;
	std::string email;
	std::string password;
	bool logedIn;
	bool checkID(std::string, std::string);
	void logOut();
};

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
