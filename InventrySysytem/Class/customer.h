#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include <vector>
#include"user.h"
#include"Inventory.h"

class Customer:private user
{	
	std::vector<Item> cart;
public:
	Customer(int,std::string);
	Customer(int _ID, std::string, std::string, std::string);
	int getID();
	std::string getName();
	std::string getEmail();
};

Customer::Customer(int _ID , std::string password)
{
	this->ID = _ID;

	bool customerFound = false;
	std::ifstream customerDataBase("customerDataBase.csv");
	std::string _id, _name, _email, _password;
	std::string line;
	while (std::getline(customerDataBase, line))
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
			customerFound = true;
			break;
		}
	}
	customerDataBase.close();
	if (!customerFound) 
	{
		ID = -1;
		name = '\0';
		email = '\0';
		password = '\0';
	}
}
Customer::Customer(int _ID, std::string _name, std::string _email, std::string _password)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;

	std::ifstream customerDataBase("customerDataBase.csv");
	std::string line;
	bool customerExists = false;
	while (std::getline(customerDataBase, line)) 
	{
		std::stringstream ss(line);
		std::string _ID;
		std::getline(ss, _ID, ',');
		std::cout << _ID;

		int existingID = std::stoi(_ID);
		if (existingID == ID) 
		{
			customerExists = true;
			break;
		}
	}
	customerDataBase.close();

	if (!customerExists) 
	{
		std::ofstream customerDataBase("customerDataBase.csv", std::ios::app);
		customerDataBase << ID << "," << name << "," << email << "," << password << "\n";
		customerDataBase.close();
	}
}

int Customer::getID()
{
	return ID;
}
std::string Customer::getName()
{
	return name;
}
std::string Customer::getEmail()
{
	return email;
}