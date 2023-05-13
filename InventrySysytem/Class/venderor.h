#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include"user.h"

class Vendor :public user
{
public:
	Vendor()
	{
		this->ID = 0;
		this->password = "\0";
	}
	Vendor(int ID, std::string password)
	{
		this->ID = ID;
		this->password = password;
	}
	void verifyvendor(int id, std::string password);
};

void Vendor::verifyvendor(int id, std::string password)
{
	std::ifstream vendordatabase("vendordatabase.csv", std::ios::in);
	bool logedIn = false;
	std::string vID = "", line;
	std::string vpassword = "";
	/*if (vendordatabase.is_open())
	{
		while (getline(vendordatabase, line))
		{
			std::stringstream ss(line);
			std::getline(ss, vID, ',');
			std::getline(ss, vpassword);
			int id = std::stoi(vID);
			if (ID == id && password == password)
			{
				std::cout << "We welcome the Vendor." << std::endl;
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
	}*/
}