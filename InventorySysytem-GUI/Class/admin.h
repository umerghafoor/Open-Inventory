#ifndef ADMIN_H
#define ADMIN_H


#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include <vector>

#include"user.h"
#include"../comman/constants.h"
#include "inventory.h"

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

class Admin :private user, public inventory
{
	//private data
	std::vector<user> allUser;
	//private funtions
	std::vector<Log> returnReport();
	std::vector<Item> cart;
	//std::vector<user> returnAllUser();
	//std::vector<user> returnAllEmployee();

public:
	Admin(int, std::string);
	Admin(int, std::string, std::string, std::string);

	//getter
	int getID();
	std::string getName();
	std::string getEmail();

	void displayAll();

	//Cart managment to be send to venderor
	void displayCart();
	bool addToCartbyNo(int, int);
	bool addToCartbyName(std::string, int);
	bool removeFromCart(int);
	bool editCartQuantity(int, int);
	bool sendToVendor();

	//Customer managment
	bool deleteCustomer(int);
	bool markSpecial(int,bool);

	//Inventory mangment
	bool deleteItem(int);
	bool editQuantity(int, int);

	//Report managment
	bool SaleLog(int&, float&, float&, float&, std::string);
	bool PurchaseLog(int&, float&, float&, std::string);

	bool checkID(std::string, std::string);
	void logOut();
};


#endif // ADMIN_H