#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <ctime>

#include"Inventory.h"
#include"user.h"
#include "../comman/constants.h"


class Customer :private user, private inventory
{	
	std::vector<Item> cart;
public:
	Customer(int,std::string);
	Customer(int _ID, std::string, std::string, std::string,bool);

	//getter
	int getID();
	std::string getName();
	std::string getEmail();

	void displayAll();

	//Cart managment
	void displayCart();
	bool addToCartbyNo(int,int);
	bool addToCartbyName(std::string, int);
	bool removeFromCart(int);
	bool editQuantity(int, int);

	//Billing
	float totalAmount();
	bool doneShoping(float,float,float);

	bool checkID(std::string, std::string);
	void logOut();
};

Customer::Customer(int _ID , std::string password)
{
	this->ID = _ID;

	logedIn = false;
	std::ifstream customerDataBase(customerDataBaseFile);
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
			logedIn = true;
			break;
		}
	}
	customerDataBase.close();
	if (!logedIn)
	{
		ID = -1;
		name = '\0';
		email = '\0';
		password = '\0';
	}
}
Customer::Customer(int _ID, std::string _name, std::string _email, std::string _password,bool specialCustomer)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;

	std::ifstream customerDataBase(customerDataBaseFile);
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
		std::ofstream customerDataBase(customerDataBaseFile, std::ios::app);
		customerDataBase << ID << "," << name << "," << email << "," << password<<','<< specialCustomer << "\n";
		customerDataBase.close();
	}
	logedIn = false;
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

float Customer::totalAmount()
{
	float total = 0;
	if (logedIn)
	{
		for (auto i = 0; i != cart.size(); i++)
		{
			total += cart[i].salePrice * cart[i].quantity;
		}
		return total;
	}
	else
	{
		return 0;
	}
}
bool Customer::doneShoping(float cash, float change, float received)
{
	if (logedIn)
	{
		std::ofstream logFile(logDataBaseFile, std::ios::app);

		//Boilerplate code for ctime library
		std::time_t t = std::time(0);
		std::tm now;
		localtime_s(&now, &t);

		for (int i = 0;i < cart.size();i++)
		{
			logFile
				//usefull information
				<< cart[i].salePrice << "," << cart[i].price << "," << cart[i].quantity << "," << cart[i].itemName << ","
				//user details
				<< ID << "," << name << ","
				//time and date
				<< now.tm_mday << '/' << now.tm_mon + 1 << '/' << now.tm_year + 1900 << ' ' << now.tm_hour << ':' << now.tm_min
				<< std::endl;
		}
		
		logFile.close();
	}
	else
		return true;
}

bool Customer::addToCartbyNo(int itemNo,int quantity)
{
	if (logedIn)
	{
		Item item = ReturnItemByNo(itemNo);
		item.quantity = quantity;
		cart.push_back(item);
		return true;
	}
	else
	{
		return false;
	}
}
bool Customer::addToCartbyName(std::string itemName, int quantity)
{
	if (logedIn)
	{
		Item item = ReturnItemByName(itemName);
		item.quantity = quantity;
		cart.push_back(item);
		return true;
	}
	else
	{
		return false;
	}
}
bool Customer::removeFromCart(int itemNo)
{
	if (logedIn)
	{
		if (itemNo < cart.size())
		{
			cart.erase(cart.begin() + itemNo);
			return true;
		}
		else
			return false;
	}
	else
		return false;
}
bool Customer::editQuantity(int itemNo, int newQuantity)
{
	if (logedIn)
	{
		if (itemNo < cart.size())
		{
			cart[itemNo].quantity = newQuantity;
			return true;
		}
		else
			return false;
	}
	else
		return false;
}

void Customer::displayAll()
{
	if (logedIn)
	{
		std::vector<Item> dispalyItems = ReturnAllItems();
		for (auto i = 0; i != dispalyItems.size(); i++)
		{
			std::cout << dispalyItems[i].itemNo << '\t' << dispalyItems[i].itemName << '\t' << dispalyItems[i].price << '\t' << dispalyItems[i].category << std::endl;
		}
	}
	else
	{
		std::cout << "Please Login\n";
	}
}
void Customer::displayCart()
{
	float total = 0;
	if (logedIn)
	{
		std::cout << "No." << '\t' << "Code" << '\t' << "Name"
			<< '\t' << "Price" << '\t' << "Quant" << '\t' << "Sub Total" << std::endl;
		for (auto i = 0; i != cart.size(); i++)
		{
			total = cart[i].price * cart[i].quantity;
			std::cout << i + 1 << '\t' << cart[i].itemNo << '\t' << cart[i].itemName
				<< '\t' << cart[i].price << '\t' << cart[i].quantity << '\t' << total << std::endl;
		}
	}
	else
	{
		std::cout << "Please Login\n";
	}
}

bool Customer::checkID(std::string password, std::string newpassword)
{
	if (password == newpassword)
		return true;
	else
		return false;
}

void Customer::logOut()
{
	logedIn = false;
}
