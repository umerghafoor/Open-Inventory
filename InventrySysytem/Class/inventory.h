#include<iostream>

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
};

class inventory
{
    Item item;
public:
    inventory() {}
    //venderor will use this to add items
    bool addItem(int, std::string, float, int);

    //it will return item no one will be able to modify it in data base
    Item SearchByNo(int);

    //user will use this
    bool buyItem(int);

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
Item inventory::SearchByNo(int itemNo)
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
bool inventory::buyItem(int itemNo)
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
            return true;
        }
    }
}
