#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <ctime>

#include"Inventory.h"
#include"user.h"
#include "../comman/constants.h"


class Customer :public user, private inventory
{	
	std::vector<Item> cart;
public:
    Customer(int,std::string);
    bool UserSignUp(int _ID, std::string, std::string, std::string,bool);

	//getter
	int getID();
	std::string getName();
	std::string getEmail();
	bool isSpecialCustomer();

	std::vector<Item> displayAll();
    std::vector<std::string> getCategoryFromItems(std::vector<Item>);


	//Cart managment
	std::vector<Item> displayCart();
	bool addToCartbyNo(int,int);
	bool addToCartbyName(std::string, int);
	bool removeFromCart(int);
	bool editQuantity(int, int);
    bool emptyCart();

	//Billing
	float totalAmount();
	bool doneShoping(float,float,float);

	bool checkID(std::string, std::string);
	void logOut();
};

#endif // CUSTOMER_H

