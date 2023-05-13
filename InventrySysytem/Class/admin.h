#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include"user.h"

class Admin :public user
{
public:
	Admin()
	{
		this->ID = ID;
		this->password = password;
	}
	Admin(int ID, std::string password)
	{
		this->ID = ID;
		this->password = password;
	}
	bool verifyAdmin(int ID, std::string password);
};
bool Admin::verifyAdmin(int ID, std::string password)
{
	std::ifstream admindatabase("Admindatabase.csv", std::ios::in);
	bool logedIn = false;
	std::string vID = "", line;
	std::string vpassword = "";
	if (admindatabase.is_open())
	{
		while (getline(admindatabase, line))
		{
			std::stringstream ss(line);
			std::getline(ss, vID, ',');
			std::getline(ss, vpassword);
			int id = std::stoi(vID);
			if (ID == id && password == password)
			{
				std::cout << "We welcome the Admin Himself" << std::endl;
				logedIn = true;
				return logedIn;
			}
			else
			{
				std::cout << "Either ID or password is wrong" << std::endl;
				logedIn = false;
				return logedIn;
			}
		}
	}
}