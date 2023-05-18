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

class Admin :public user, public inventory
{
	//private data
	std::vector<user> allUser;
    std::vector<Item> cart;
	//private funtions
	std::vector<Log> returnReport();
	//std::vector<user> returnAllUser();
	//std::vector<user> returnAllEmployee();

public:
	Admin(int, std::string);
	Admin(int, std::string, std::string, std::string);

	//getter
	int getID();
	std::string getName();
	std::string getEmail();

    std::vector<Item> displayAll();
    std::vector<std::string> getCategoryFromItems(std::vector<Item>);

	//Cart managment to be send to venderor
    std::vector<Item> displayCart();
	bool addToCartbyNo(int, int);
	bool addToCartbyName(std::string, int);
	bool removeFromCart(int);
	bool editCartQuantity(int, int);
	bool sendToVendor();
    float totalAmount();

	//Customer managment
	bool deleteCustomer(int);
	bool markSpecial(int,bool);

	//Inventory mangment
    bool addItem(int,std::string,std::string,float,float,int);
	bool deleteItem(int);
	bool editQuantity(int, int);
    bool itemExistsInDatabase(int);

	//Report managment
	bool SaleLog(int&, float&, float&, float&, std::string);
	bool PurchaseLog(int&, float&, float&, std::string);

	bool checkID(std::string, std::string);
	void logOut();
};


#endif // ADMIN_H
