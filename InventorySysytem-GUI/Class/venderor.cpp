#include"venderor.h"

Vendor::Vendor(int _ID, std::string password)
{
	this->ID = _ID;

	logedIn = false;
	std::ifstream vendorDataBase(employeeDataBaseFile);
	std::string _id, _name, _email, _password;
	std::string line;
	while (std::getline(vendorDataBase, line))
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
	vendorDataBase.close();
	if (!logedIn)
	{
		ID = -1;
		name = '\0';
		email = '\0';
		password = '\0';
		logedIn = false;
	}

}
bool Vendor::UserSignUp(int _ID, std::string _name, std::string _email, std::string _password,bool specialUser)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;

	std::ifstream vendorDataBase(employeeDataBaseFile);
	std::string line;
	bool customerExists = false;
	while (std::getline(vendorDataBase, line))
	{
		std::stringstream ss(line);
		std::string _ID;
		std::getline(ss, _ID, ',');

		int existingID = std::stoi(_ID);
		if (existingID == ID)
		{
			customerExists = true;
			break;
		}
	}
	vendorDataBase.close();

	if (!customerExists)
	{
		std::ofstream vendorDataBase(employeeDataBaseFile, std::ios::app);
		vendorDataBase << ID << "," << name << "," << email << "," << password << "\n";
		vendorDataBase.close();
        return true;
	}
	logedIn = false;
    return false;
}

int Vendor::getID()
{
    return ID;
}
std::string Vendor::getName()
{
    return name;
}
std::string Vendor::getEmail()
{
    return email;
}

bool Vendor::editQuantity(int itemNo, int changeQuantity)
{
	if (logedIn && changeQuantity > 0)
	{
		std::ifstream itemDataBase(itemDataBaseFile);
		std::ofstream tempDataBase(tempDataBaseFile);
		std::ofstream logFile(logDataBaseFile, std::ios::app);

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

			int dbItemNo = std::stoi(_itemNo);
			//Boilerplate code for ctime library
			std::time_t t = std::time(0);
			std::tm now;
			localtime_s(&now, &t);


			if (dbItemNo == itemNo)
			{
				int dbQuantity = std::stoi(_quantity);
				dbQuantity += changeQuantity;
				tempDataBase << dbItemNo << "," << _itemName << "," << _price << "," << dbQuantity << ',' << _category << ',' << _salePrice << '\n';
				logFile
					//usefull information
					<< _salePrice << "," << -stof(_price) << "," << changeQuantity << "," << _itemName << ","
					//user details
					<< ID << "," << name << ","
					//time and date
					<< now.tm_mday << '/' << now.tm_mon + 1 << '/' << now.tm_year + 1900 << ' ' << now.tm_hour << ':' << now.tm_min
					<< std::endl;
                removeFromRequest(itemNo);
			}
			else
			{
				tempDataBase << line << "\n";
			}
		}

		itemDataBase.close();
		tempDataBase.close();
		std::remove(itemDataBaseFile.c_str());
		std::rename(tempDataBaseFile.c_str(), itemDataBaseFile.c_str());
		return true;
	}
	return false;
}

bool Vendor::addItemsFromLog()
{
	std::ifstream logFile(VendorMessageFile);
	std::string line;

    while (std::getline(logFile, line))
    {
		std::stringstream ss(line);
		std::string _quantity, _itemNo, _itemName;

		std::getline(ss, _quantity, ',');
		std::getline(ss, _itemNo, ',');
		std::getline(ss, _itemName, ',');

		int quantity = std::stoi(_quantity);
		int itemNo = std::stoi(_itemNo);

	}

	logFile.close();
	return true;
}
std::vector<Item> Vendor::showItemsFromLog()
{
    Item _item;
    if(logedIn)
    {
    std::ifstream logFile(VendorMessageFile);
    std::string line;
    cart.clear();
    while (std::getline(logFile, line))
    {
        std::stringstream ss(line);
        std::string _quantity, _itemNo, _itemName;

        std::getline(ss, _quantity, ',');
        std::getline(ss, _itemNo, ',');
        std::getline(ss, _itemName, ',');

        int quantity = std::stoi(_quantity);
        int itemNo = std::stoi(_itemNo);
        _item = ReturnItemByNo(itemNo);

        cart.push_back(Item(itemNo,_itemName,_item.price,_item.salePrice,quantity,"\0"));
    }

    logFile.close();
    return cart;
    }
    std::vector<Item> emptyItem;
    emptyItem.push_back(Item());
    return emptyItem;
}

std::vector<Item> Vendor::displayAll()
{
    if (logedIn)
    {
        std::vector<Item> dispalyItems = ReturnAllItems();
        return dispalyItems;
    }
    else
    {
        std::vector<Item> emptyItem;
        return emptyItem;
    }
}
float Vendor::totalAmount()
{
    float total = 0;
    if (logedIn)
    {
        for (int i=0;i<cart.size(); i++)
        {
            total += cart[i].salePrice * cart[i].quantity;
        }
        return total;
    }
    else
    {
        return 0;
    }
}

bool Vendor::checkID(std::string password, std::string newpassword)
{
	if (password == newpassword)
		return true;
	else
		return false;
}

void Vendor::logOut()
{
	logedIn = false;
}

bool Vendor::removeFromRequest(int itemNo)
{
    if (logedIn)
    {
        std::ofstream outputFile(VendorMessageFile);

        for (int i = 0 ; i<cart.size();i++)
        {
            std::cout<<i;
            if(itemNo != cart[i].itemNo)
                outputFile <<  cart[i].quantity  << "," << cart[i].itemNo << "," << cart[i].itemName << '\n';
        }
            outputFile.close();
            return true;
    }
    else
        return false;
}
