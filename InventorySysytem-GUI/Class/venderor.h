
#ifndef VENDOR_H
#define VENDOR_H

#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include <vector>
#include <ctime>

#include"user.h"
#include"Inventory.h"

class Vendor :public user, public inventory, public Item
{
	std::vector<Item> cart;
public:
    Vendor(int, std::string);
    bool UserSignUp(int _ID, std::string, std::string, std::string,bool);

	bool editQuantity(int, int);
	bool addItemsFromLog();
    std::vector<Item> showItemsFromLog();
    float totalAmount();
    bool removeFromRequest(int);

    int getID();
    std::string getName();
    std::string getEmail();

    std::vector<Item> displayAll();

	bool checkID(std::string, std::string);
	void logOut();
};
#endif // VENDOR_H
