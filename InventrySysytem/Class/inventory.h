#include<iostream>
#include <vector>

struct Item
{
    int itemNo;
    std::string itemName;
    float price;
    int quantity;
    Item()
    {
        itemNo = 0;
        itemName = "\0";
        price = 0;
        quantity = 0;
    }
    Item(int itemNo, std::string itemName, float price, int quantity)
    {
        this->itemNo = itemNo;
        this->itemName = itemName;
        this->price = price;
        this->quantity = quantity;
    }
};

class inventory
{
    Item item;
    
protected:
    inventory() {}
    //venderor will use this to add new items
    bool addItem(int, std::string, float, int);

    //it will return item no one will be able to modify it in data base
    Item ReturnItemByNo(int);
    Item ReturnItemByName(std::string);
    std::vector<Item> ReturnAllItems();

    //user will use this
    bool buyItem(int, int);

    // use to edit quantity
    bool editItemQuantity(int, int);
};

bool inventory::addItem(int itemNo, std::string itemName, float price, int Quantity)
{
    std::ifstream itemDataBase("ItemDataBase.csv");
    std::string line;
    while (std::getline(itemDataBase, line)) {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _quantity;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        int dbItemNo = std::stoi(_itemNo);
        if (dbItemNo == itemNo) 
        {
            itemDataBase.close();
            return false;
        }
    }

    std::ofstream itemDataBaseOut("ItemDataBase.csv", std::ios::app);
    itemDataBaseOut << itemNo << "," << itemName << "," << price << "," << Quantity << "\n";
    itemDataBaseOut.close();
    return true;
}

Item inventory::ReturnItemByNo(int itemNo)
{
    std::ifstream itemDataBase("ItemDataBase.csv");
    std::string line;
    while (std::getline(itemDataBase, line)) {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _quantity;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        int dbItemNo = std::stoi(_itemNo);
        if (dbItemNo == itemNo)
        {
            item.itemNo = itemNo;
            item.itemName = _itemName;
            item.price = std::stoi(_price);
            item.quantity = std::stoi(_quantity);
            return item;
        }
    }
}
Item inventory::ReturnItemByName(std::string itemName)
{
    std::ifstream itemDataBase("ItemDataBase.csv");
    std::string line;
    while (std::getline(itemDataBase, line)) {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _quantity;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        if (itemName == _itemName)
        {
            item.itemNo = (std::stoi(_itemNo));
            item.itemName = _itemName;
            item.price = std::stoi(_price);
            item.quantity = std::stoi(_quantity);
            return item;
        }
    }
}
std::vector<Item> inventory::ReturnAllItems()
{
    std::vector<Item> allItems;
    std::ifstream itemDataBase("ItemDataBase.csv");
    std::string line;
    while (std::getline(itemDataBase, line)) 
    {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _quantity;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        int itemNo = std::stoi(_itemNo);
        float price = std::stof(_price);
        int quantity = std::stoi(_quantity);
        Item item(itemNo, _itemName, price, quantity);
        allItems.push_back(item);
    }
    itemDataBase.close();
    return allItems;
}

bool inventory::buyItem(int itemNo,int quantity)
{
    std::ifstream itemDataBase("ItemDataBase.csv");
    std::string line;
    while (std::getline(itemDataBase, line)) 
    {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _quantity;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        int dbItemNo = std::stoi(_itemNo);
        if (dbItemNo == itemNo)
        {
            item.itemNo = itemNo;
            item.itemName = _itemName;
            item.price = std::stoi(_price);
            item.quantity = std::stoi(_quantity);
            return true;
        }
    }
}

/*
private memeber functions
*/
bool inventory::editItemQuantity(int itemNo, int newQuantity)
{
    std::ifstream itemDataBase("ItemDataBase.csv");
    std::ofstream tempDataBase("temp.csv");

    std::string line;
    while (std::getline(itemDataBase, line))
    {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _quantity;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        int dbItemNo = std::stoi(_itemNo);

        if (dbItemNo == itemNo)
        {
            int dbQuantity = std::stoi(_quantity);
            dbQuantity += newQuantity;
            tempDataBase << dbItemNo << "," << _itemName << "," << _price << "," << dbQuantity << "\n";
        }
        else
        {
            tempDataBase << line << "\n";
        }
    }
    itemDataBase.close();
    tempDataBase.close();

    std::remove("ItemDataBase.csv");
    std::rename("temp.csv", "ItemDataBase.csv");
    return true;
}