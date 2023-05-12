#pragma once
#include"user.h"
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>

class Customer:public user
{
public:
	Customer(int);
	Customer(int _ID, std::string, std::string, std::string);
	int getID();
	std::string getName();
	std::string getEmail();
	bool verifyPassword(std::string);
};

Customer::Customer(int _ID)
{
	this->ID = _ID;
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
		if (id == _ID)
		{
			ID = id;
			name = _name;
			email = _email;
			password = _password;
			break;
		}
	}
	customerDataBase.close();
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
	while (std::getline(customerDataBase, line)) {
		std::stringstream ss(line);
		std::string field;
		std::getline(ss, field, ',');
		int existingID = std::stoi(field);
		if (existingID == ID) {
			customerExists = true;
			break;
		}
	}
	customerDataBase.close();
	if (!customerExists) {
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
bool Customer::verifyPassword(std::string _password)
{
	if (password == _password)
		return true;
	else
		return false;
}
