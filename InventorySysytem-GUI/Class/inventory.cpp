#include "inventory.h"

bool inventory::addItem(int itemNo, std::string itemName, float price, float salePrice, int Quantity, std::string category)
{
    std::ifstream itemDataBase("ItemDataBase.csv");
    std::string line;
    while (std::getline(itemDataBase, line))
    {
        std::stringstream ss(line);
        std::string _itemNo;
        std::getline(ss, _itemNo, ',');
        int dbItemNo = std::stoi(_itemNo);
        if (dbItemNo == itemNo)
        {
            itemDataBase.close();
            return false;
        }
    }
    std::ofstream itemDataBaseOut("ItemDataBase.csv", std::ios::app);
    itemDataBaseOut << itemNo << "," << itemName << "," << salePrice << "," << Quantity << ',' << category << ',' << price << '\n';
    itemDataBaseOut.close();
    return true;
}

Item inventory::ReturnItemByNo(int itemNo)
{
    std::ifstream itemDataBase(itemDataBaseFile);
    std::string line;
    while (std::getline(itemDataBase, line)) {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _salePrice, _quantity, _category;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        std::getline(ss, _category, ',');
        std::getline(ss, _salePrice, ',');
        int dbItemNo = std::stoi(_itemNo);
        if (dbItemNo == itemNo)
        {
            item.itemNo = itemNo;
            item.itemName = _itemName;
            item.price = std::stof(_price);
            item.salePrice = std::stof(_salePrice);
            item.quantity = std::stoi(_quantity);
            item.category = _category;
            return item;
        }
    }
    return Item();
}
Item inventory::ReturnItemByName(std::string itemName)
{
    std::ifstream itemDataBase(itemDataBaseFile);
    std::string line;
    while (std::getline(itemDataBase, line))
    {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _salePrice, _quantity, _category;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _price, ',');
        std::getline(ss, _quantity, ',');
        std::getline(ss, _category, ',');
        std::getline(ss, _salePrice, ',');

        if (itemName == _itemName)
        {
            item.itemNo = (std::stoi(_itemNo));
            item.itemName = _itemName;
            item.price = std::stof(_price);
            item.salePrice = std::stof(_salePrice);
            item.quantity = std::stoi(_quantity);
            item.category = _category;
            return item;
        }
    }
    return Item();
}
std::vector<Item> inventory::ReturnAllItems()
{
    std::vector<Item> allItems;
    std::ifstream itemDataBase(itemDataBaseFile);
    std::string line;
    while (std::getline(itemDataBase, line))
    {
        std::stringstream ss(line);
        std::string _itemNo, _itemName, _price, _salePrice, _quantity, _category;
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');
        std::getline(ss, _salePrice, ',');
        std::getline(ss, _quantity, ',');
        std::getline(ss, _category, ',');
        std::getline(ss, _price, '\n');

        int itemNo = std::stoi(_itemNo);
        float price = std::stof(_price);
        int quantity = std::stoi(_quantity);
        float salePrice = std::stof(_salePrice);
        Item item(itemNo, _itemName, price, salePrice, quantity, _category);
        allItems.push_back(item);
    }
    itemDataBase.close();
    return allItems;
}

//bool inventory::buyItem(int itemNo,int quantity)
//{
//    std::ifstream itemDataBase(itemDataBaseFile);
//    std::string line;
//    while (std::getline(itemDataBase, line)) 
//    {
//        std::stringstream ss(line);
//        std::string _itemNo, _itemName, _price, _quantity;
//        std::getline(ss, _itemNo, ',');
//        std::getline(ss, _itemName, ',');
//        std::getline(ss, _price, ',');
//        std::getline(ss, _quantity, ',');
//        int dbItemNo = std::stoi(_itemNo);
//        if (dbItemNo == itemNo)
//        {
//            item.itemNo = itemNo;
//            item.itemName = _itemName;
//            item.price = std::stoi(_price);
//            item.quantity = std::stoi(_quantity);
//            return true;
//        }
//    }
//}

//bool inventory::editItemQuantity(int itemNo, int changeQuantity)
//{
//    std::ifstream itemDataBase(itemDataBaseFile);
//    std::ofstream tempDataBase(tempDataBaseFile);
//
//    std::string line;
//    while (std::getline(itemDataBase, line))
//    {
//        std::stringstream ss(line);
//        std::string _itemNo, _itemName, _price, _salePrice, _quantity, _category;
//        std::getline(ss, _itemNo, ',');
//        std::getline(ss, _itemName, ',');
//        std::getline(ss, _price, ',');
//        std::getline(ss, _quantity, ',');
//        std::getline(ss, _category, ',');
//        std::getline(ss, _salePrice, ',');
//
//        int dbItemNo = std::stoi(_itemNo);
//
//        if (dbItemNo == itemNo)
//        {
//            int dbQuantity = std::stoi(_quantity);
//            dbQuantity += changeQuantity;
//            tempDataBase << dbItemNo << "," << _itemName << "," << _price << "," << dbQuantity << ',' << _category << ',' << _salePrice << '\n';
//        }
//        else
//        {
//            tempDataBase << line << "\n";
//        }
//    }
//    itemDataBase.close();
//    tempDataBase.close();
//    std::cout << "uhfu";
//    std::remove(itemDataBaseFile.c_str());
//    std::rename(tempDataBaseFile.c_str(), itemDataBaseFile.c_str());
//    std::cout << "uhfu";
//    return true;
//}
