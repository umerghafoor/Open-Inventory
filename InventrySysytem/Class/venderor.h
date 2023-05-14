#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include <vector>
#include <ctime>

#include"user.h"
#include"Inventory.h"

class Vendor :public user, public inventory
{
	std::vector<Item> cart;
public:
    Vendor(int, std::string);
    Vendor(int, std::string, std::string, std::string);
};
Vendor::Vendor(int _ID, std::string password)
{
	this->ID = _ID;

	logedIn = false;
	std::ifstream vendorDataBase("vendorDataBase.csv");
	std::string _id, _name, _email, _password;
	std::string line;
	while (std::getline(vendorDataBase, line))
	{
		std::stringstream ss(line);
		std::getline(ss, _id, ',');
		std::getline(ss, _name, ',');
		std::getline(ss, _email, ',');
		std::getline(ss, _password, ',');

		int id = std::stoi(_id);
		if (id == _ID && checkID(_password, password))
		{
			ID = id;
			name = _name;

			email = _email;
			password = _password;
			logedIn = true;
			break;
		}
	}
	vendorDataBase.close();
	if (!logedIn)
	{
		ID = -1;
		name = '\0';
		email = '\0';
		password = '\0';
	}
}
Vendor::Vendor(int _ID, std::string _name, std::string _email, std::string _password)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;

	std::ifstream vendorDataBase("vendorDataBase.csv");
	std::string line;
	bool customerExists = false;
	while (std::getline(vendorDataBase, line))
	{
		std::stringstream ss(line);
		std::string _ID;
		std::getline(ss, _ID, ',');

		int existingID = std::stoi(_ID);
		if (existingID == ID)
		{
			customerExists = true;
			break;
		}
	}
	vendorDataBase.close();

	if (!customerExists)
	{
		std::ofstream vendorDataBase("vendorDataBase.csv", std::ios::app);
		vendorDataBase << ID << "," << name << "," << email << "," << password << "\n";
		vendorDataBase.close();
	}
	logedIn = false;
}
