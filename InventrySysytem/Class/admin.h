#pragma once
#include"user.h"
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>

class Admin :public user
{
public:
	Admin(int);
	Admin(int _ID,std::string);
	int getAdminID();
	std::string getAdminName();
	std::string getAdminEmail();
	bool verifyAdminPassword(std::string);
};
Admin::Admin(int _ID)
{
	this->ID = _ID;
	std::ifstream Admindatabase("Admindatabase.csv");
	std::string _id, _name, _email, _password;
	std::string line;
	while (std::getline(Admindatabase, line))
	{
		std::stringstream ss(line);
		std::getline(ss, _id, ',');
		std::getline(ss, _name, ',');
		std::getline(ss, _email, ',');
		std::getline(ss, _password, ',');

		int id = std::stoi(_id);
		if (id == _ID)
		{
			ID = id;
			name = _name;
			email = _email;
			password = _password;
			break;
		}
	}
	Admindatabase.close();
}
Admin::Admin(int _ID, std::string _password)
{
	this->ID = _ID;
	this->password = _password;
	std::ifstream Admindatabase("Admindatabase.csv");
	std::string line;
	bool adminExists = false;
	while (std::getline(Admindatabase, line)) 
	{
		std::stringstream ss(line);
		std::string field;
		std::getline(ss, field, ',');
		int existingID = std::stoi(field);
		if (existingID == ID) 
		{
			adminExists = true;
			break;
		}
	}
	Admindatabase.close();
	if (!adminExists) 
	{
		std::ofstream Admindatabase("Admindatabase.csv", std::ios::app);
		Admindatabase << ID << "," << name << "," << email << "," << password << "\n";
		Admindatabase.close();
	}
}
int Admin::getAdminID()
{
	return ID;
}
std::string Admin::getAdminName()
{
	return name;
}
std::string Admin::getAdminEmail()
{
	return email;
}
bool Admin::verifyAdminPassword(std::string _password)
{
	if (password == _password)
		return true;
	else
		return false;
}
