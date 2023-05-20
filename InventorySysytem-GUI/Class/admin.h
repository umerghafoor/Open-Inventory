#ifndef ADMIN_H
#define ADMIN_H


#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include <vector>
#include <ctime>

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
struct users
{
    int ID;
    std::string name;
    std::string email;
    bool specialUser;
    users(int ID,std::string _name,std::string _email,bool specialUser)
{
    this->ID=ID;
    this->name=_name;
    this->email=_email;
    this->specialUser=specialUser;
}
};
class Admin :public user, public inventory
{
	//private data
	std::vector<user> allUser;
    std::vector<Item> cart;
	//private funtions
	std::vector<Log> returnReport();

public:
	Admin(int, std::string);
     bool UserSignUp(int _ID, std::string, std::string, std::string,bool);

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
    bool deleteEmployee(int);
	bool markSpecial(int,bool);
    std::vector<users> returnAllUser();
    std::vector<users> returnAllEmployee();

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
