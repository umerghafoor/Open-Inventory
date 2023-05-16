#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
#include <vector>
#include <sstream>
#include<fstream>
#include "../comman/constants.h"

class Item
{
public:
    int itemNo;
    std::string itemName;
    float price;
    float salePrice;
    int quantity;
    std::string category;

    Item()
    {
        itemNo = 0;
        itemName = "\0";
        price = 0;
        salePrice = 0;
        quantity = 0;
        category='\0';
    }
    Item(int itemNo, std::string itemName,float price, float salePrice, int quantity, std::string category)
    {
        this->itemNo = itemNo;
        this->itemName = itemName;
        this->price = price;
        this->quantity = quantity;
        this->salePrice=salePrice;
        this->category=category;
    }
};

class inventory
{
    Item item;

protected:
    inventory() {}
    //venderor will use this to add new items
    bool addItem(int, std::string, float, float, int, std::string);

    //it will return item no one will be able to modify it in data base
    Item ReturnItemByNo(int);
    Item ReturnItemByName(std::string);
    std::vector<Item> ReturnAllItems();

//    bool buyItem(int, int);
//    bool editItemQuantity(int, int);
};

#endif // INVENTORY_H
