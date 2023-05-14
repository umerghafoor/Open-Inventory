#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include <vector>

#include"user.h"
#include"../comman/constants.h"

struct Log
{
	float salePrice;
	float price;
	int quantity;
	std::string item;
	int day;
	int month;
	int year;
};

class Admin :private user
{
	std::vector<Log> returnReport();
public:
	Admin(int, std::string);
	Admin(int, std::string, std::string, std::string);

	void SaleLog(int&, float&, float&, float&);
	void PurchaseLog(int&, float&, float&);
};

Admin::Admin(int _ID, std::string password)
{
	this->ID = _ID;

	logedIn = false;
	std::ifstream adminDataBase(adminDataBaseFile);
	std::string _id, _name, _email, _password;
	std::string line;
	while (std::getline(adminDataBase, line))
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
	adminDataBase.close();
	if (!logedIn)
	{
		ID = -1;
		name = '\0';
		email = '\0';
		password = '\0';
	}
}
Admin::Admin(int _ID, std::string _name, std::string _email, std::string _password)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;

	std::ifstream adminDataBase(adminDataBaseFile);
	std::string line;
	bool adminExists = false;
	while (std::getline(adminDataBase, line))
	{
		std::stringstream ss(line);
		std::string _ID;
		std::getline(ss, _ID, ',');

		int existingID = std::stoi(_ID);
		if (existingID == ID)
		{
			adminExists = true;
			break;
		}
	}
	adminDataBase.close();

	if (!adminExists)
	{
		std::ofstream adminDataBase(adminDataBaseFile, std::ios::app);
		adminDataBase << ID << "," << name << "," << email << "," << password << "\n";
		adminDataBase.close();
	}
	logedIn = false;
}

std::vector<Log> Admin::returnReport()
{
	if (logedIn)
	{
		std::vector<Log> allLog;
		Log _log;
		std::string _price, _salePrice, _quantity, _item, _buffer, _day, _month, _year;
		std::ifstream log(logDataBaseFile);
		std::string line;
		while (std::getline(log, line))
		{
			std::stringstream ss(line);

			std::getline(ss, _salePrice, ',');
			std::getline(ss, _price, ',');
			std::getline(ss, _quantity, ',');

			std::getline(ss, _item, ',');
			std::getline(ss, _buffer, ',');
			std::getline(ss, _buffer, ',');

			std::getline(ss, _day, '/');
			std::getline(ss, _month, '/');
			std::getline(ss, _year, ' ');

			_log.price = std::stof(_price);
			_log.salePrice = std::stof(_salePrice);
			_log.quantity = std::stoi(_quantity);

			_log.item = _item;
			_log.day = std::stoi(_day);
			_log.month = std::stoi(_month);
			_log.year = std::stoi(_year);

			allLog.push_back(_log);
		}
		log.close();
		return allLog;
	}
}

void Admin::SaleLog(int& totalItemSold,float& totalRevenue,float& totalCost,float& profit)
{
	std::vector<Log> log = returnReport();
	int _totalItemSold = 0;
	float _totalRevenue = 0;
	float _totalCost = 0;
	for (int i = 0;i < log.size();i++)
	{
		if (log[i].price > 0)
		{
			_totalItemSold += log[i].quantity;
			_totalRevenue += (log[i].salePrice * log[i].quantity);
			_totalCost += (log[i].price * log[i].quantity);
		}
	}
	totalItemSold = _totalItemSold;
	totalRevenue = _totalRevenue;
	totalCost = _totalCost;
	profit = _totalRevenue - totalCost;
}

void Admin::PurchaseLog(int& totalItemPurchased, float& totalCost, float& netTotal)
{
	std::vector<Log> log = returnReport();
	int _totalItemPurchased = 0;
	float _totalCost = 0;
	float _netTotal = 0;
	for (int i = 0;i < log.size();i++)
	{
		if (log[i].price < 0)
		{
			_totalItemPurchased += log[i].quantity;
			_totalCost += (log[i].salePrice * log[i].quantity);
			_netTotal += -(log[i].price * log[i].quantity);
		}
	}
	totalItemPurchased = _totalItemPurchased;
	totalCost = _totalCost;
	netTotal = _netTotal;
}