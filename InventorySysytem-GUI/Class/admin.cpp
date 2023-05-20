#include "admin.h"

Admin::Admin(int _ID, std::string password)
{
	this->ID = _ID;

	logedIn = false;
	std::ifstream adminDataBase(adminDataBaseFile);
	std::string _id, _name, _email, _password;
	std::string line;
	while (std::getline(adminDataBase, line))
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
	adminDataBase.close();
	if (!logedIn)
	{
		ID = -1;
		name = '\0';
		email = '\0';
		password = '\0';
	}
}
bool Admin::UserSignUp(int _ID, std::string _name, std::string _email, std::string _password,bool specialUser)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;

	std::ifstream adminDataBase(adminDataBaseFile);
	std::string line;
	bool adminExists = false;
	while (std::getline(adminDataBase, line))
	{
		std::stringstream ss(line);
		std::string _ID;
		std::getline(ss, _ID, ',');

		int existingID = std::stoi(_ID);
		if (existingID == ID)
		{
			adminExists = true;
			break;
		}
	}
	adminDataBase.close();

	if (!adminExists)
	{
		std::ofstream adminDataBase(adminDataBaseFile, std::ios::app);
		adminDataBase << ID << "," << name << "," << email << "," << password << "\n";
		adminDataBase.close();
        return true;
	}
	logedIn = false;
    return false;
}

int Admin::getID()
{
	return ID;
}
std::string Admin::getName()
{
	return name;
}
std::string Admin::getEmail()
{
	return email;
}

bool Admin::addToCartbyNo(int itemNo, int quantity)
{
	if (logedIn)
	{
		Item itemTemp = ReturnItemByNo(itemNo);
		itemTemp.quantity = quantity;
		cart.push_back(itemTemp);
		return true;
	}
	else
	{
		return false;
	}
}
bool Admin::addToCartbyName(std::string _itemName, int _quantity)
{
    if (logedIn)
    {
        for (int i=0;i<cart.size();i++)
        {
            if (cart[i].itemName == _itemName)
            {
                cart[i].quantity += _quantity;
                return true;
            }
        }

        Item itemTemp = ReturnItemByName(_itemName);
        itemTemp.quantity = _quantity;
        cart.push_back(itemTemp);
        return true;
    }
    else
    {
        return false;
    }
}

bool Admin::removeFromCart(int itemNo)
{
	if (logedIn)
	{
		if (itemNo < cart.size())
		{
			cart.erase(cart.begin() + itemNo);
			return true;
		}
		else
			return false;
	}
	else
		return false;
}
bool Admin::editCartQuantity(int itemNo, int newQuantity)
{
	if (logedIn)
	{
		if (itemNo < cart.size())
		{
			cart[itemNo].quantity = newQuantity;
			return true;
		}
		else
			return false;
	}
	else
		return false;
}
bool Admin::sendToVendor()
{
	if (logedIn)
	{
		std::ofstream logFile(VendorMessageFile, std::ios::app);

		for (int i = 0; i < cart.size(); i++)
		{
			logFile
				//usefull information
				<< cart[i].quantity << "," << cart[i].itemNo << ',' << cart[i].itemName << "\n";
		}
		logFile.close();
        cart.clear();
        return true;
	}
	else
        return false;
}
float Admin::totalAmount()
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

std::vector<Item> Admin::displayAll()
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
std::vector<std::string> Admin::getCategoryFromItems(std::vector<Item> items)
{
    if (logedIn)
    {
        std::vector<Item> dispalyItems = ReturnAllItems();
        std::vector<std::string> categories;
        for (int i=0;i< dispalyItems.size();i++ )
        {
            if (std::find(categories.begin(), categories.end(), dispalyItems[i].category) == categories.end())
            {
                categories.push_back(dispalyItems[i].category);
            }
        }
        return categories;
    }
    else
    {
        std::vector<std::string> emptyItem;
        return emptyItem;
    }
}

std::vector<Item> Admin::displayCart()
{
    if (logedIn)
    {
        return cart;
    }
    else
    {
        std::vector<Item> emptyItem;
        return emptyItem;
    }
}

std::vector<Log> Admin::returnReport()
{
	if (logedIn)
	{
		std::vector<Log> allLog;
		Log _log;
		std::string _price, _salePrice, _quantity, _item, _buffer, _day, _month, _year;
		std::ifstream log(logDataBaseFile);
		std::string line;
		while (std::getline(log, line))
		{
			std::stringstream ss(line);

			std::getline(ss, _salePrice, ',');
			std::getline(ss, _price, ',');
			std::getline(ss, _quantity, ',');

			std::getline(ss, _item, ',');
			std::getline(ss, _buffer, ',');
			std::getline(ss, _buffer, ',');

			std::getline(ss, _day, '/');
			std::getline(ss, _month, '/');
			std::getline(ss, _year, ' ');

			_log.price = std::stof(_price);
			_log.salePrice = std::stof(_salePrice);
			_log.quantity = std::stoi(_quantity);

			_log.item = _item;
			_log.day = std::stoi(_day);
			_log.month = std::stoi(_month);
			_log.year = std::stoi(_year);

			allLog.push_back(_log);
		}
		log.close();
		return allLog;
	}
}

std::vector<users> Admin::returnAllUser()
{
    if (logedIn)
    {
        std::vector<users> allUser;
        users *temp;
        std::string _ID, _name, _email, _password, _specialUser;
        std::ifstream customer(customerDataBaseFile);
        std::string line;
        while (std::getline(customer, line))
        {
            std::stringstream ss(line);

            std::getline(ss, _ID, ',');
            std::getline(ss, _name, ',');
            std::getline(ss, _email, ',');
            std::getline(ss, _password, ',');
            std::getline(ss, _specialUser, ',');

            int ID = stoi(_ID);
            bool specialUser = _specialUser == "1";
            temp = new users(ID, _name, _email, specialUser);
            allUser.push_back(*temp);
            delete temp;
        }
        customer.close();
        return allUser;
    }
}
std::vector<users> Admin::returnAllEmployee()
{
    if (logedIn)
    {
        std::vector<users> allUser;
        users *temp;
        std::string _ID, _name, _email, _password;
        std::ifstream employee(employeeDataBaseFile);
        std::string line;
        while (std::getline(employee, line))
        {
            std::stringstream ss(line);

            std::getline(ss, _ID, ',');
            std::getline(ss, _name, ',');
            std::getline(ss, _email, ',');
            std::getline(ss, _password, ',');

            int ID = stoi(_ID);
            temp = new users(ID, _name, _email, 0);
            allUser.push_back(*temp);
            delete temp;
        }
        employee.close();
        return allUser;
    }
}

bool Admin::deleteCustomer(int deleteID)
{
	if (logedIn)
	{
		std::ofstream tempCustomerDataBase(tempDataBaseFile);

		std::ifstream customerDataBase(customerDataBaseFile);
		std::string line;
		while (getline(customerDataBase, line))
		{
			std::istringstream ss(line);
			std::string id;
			getline(ss, id, ',');

			if (stoi(id) == deleteID)
			{
				continue;
			}
			else
			{
				tempCustomerDataBase << line << "\n";
			}
		}
		customerDataBase.close();
		tempCustomerDataBase.close();

		std::remove(customerDataBaseFile.c_str());
		std::rename(tempDataBaseFile.c_str(), customerDataBaseFile.c_str());
		return true;
	}
	else
	{
		return false;
	}
}
bool Admin::deleteEmployee(int deleteID)
{
    if (logedIn)
    {
        std::ofstream tempDataBase(tempDataBaseFile);

        std::ifstream employeeDataBase(employeeDataBaseFile);
        std::string line;
        while (getline(employeeDataBase, line))
        {
            std::istringstream ss(line);
            std::string id;
            getline(ss, id, ',');

            if (stoi(id) == deleteID)
            {
                continue;
            }
            else
            {
                tempDataBase << line << "\n";
            }
        }
        employeeDataBase.close();
        tempDataBase.close();

        std::remove(employeeDataBaseFile.c_str());
        std::rename(tempDataBaseFile.c_str(), employeeDataBaseFile.c_str());
        return true;
    }
    else
    {
        return false;
    }
}
bool Admin::markSpecial(int markID, bool special = true)
{
	if (logedIn)
	{
		std::ofstream tempCustomerDataBase(tempDataBaseFile);
		std::ifstream customerDataBase(customerDataBaseFile);

		std::string line;
		while (getline(customerDataBase, line))
		{
			std::istringstream ss(line);
			std::string id;
			getline(ss, id, ',');

			if (stoi(id) == markID)
			{
				std::string name, email, password;
				getline(ss, name, ',');
				getline(ss, email, ',');
				getline(ss, password, ',');
                tempCustomerDataBase << id << "," << name << "," << email << "," << password << ',' << special << '\n';
				continue;
			}
			else
			{
				tempCustomerDataBase << line << "\n";
			}
		}
		customerDataBase.close();
		tempCustomerDataBase.close();

		std::remove(customerDataBaseFile.c_str());
		std::rename(tempDataBaseFile.c_str(), customerDataBaseFile.c_str());
		return true;
	}
	else
	{
		return false;
	}
}

bool Admin::addItem(int _ID,std::string _name,std::string _category,float _salePrice,float _price,int _quantity = 0)
{
    if (logedIn)
    {
        if (itemExistsInDatabase(_ID))
        {
            return false;
        }

        std::ofstream itemDataBase(itemDataBaseFile, std::ios::app);

        itemDataBase << _ID << "," << _name << "," << _salePrice << "," << _quantity << "," << _category << "," << _price << std::endl;

        itemDataBase.close();

        return true;
    }
    return false;
}
bool Admin::deleteItem(int deleteID)
{
	if (logedIn)
	{
		std::ifstream itemDataBase(itemDataBaseFile);
		std::ofstream tempDataBase(tempDataBaseFile);

		std::string line;
		bool itemDeleted = false;

		while (std::getline(itemDataBase, line)) {
			std::stringstream ss(line);
			std::string _ID;

			std::getline(ss, _ID, ',');
			int id = std::stoi(_ID);

			if (id == deleteID)
			{
				itemDeleted = true;
			}
			else
			{
				tempDataBase << line << "\n";
			}
		}
		itemDataBase.close();
		tempDataBase.close();

		if (!itemDeleted)
		{
			return false;
		}
		std::remove(itemDataBaseFile.c_str());
		std::rename(tempDataBaseFile.c_str(), itemDataBaseFile.c_str());
		return true;
	}
	return false;
}
bool Admin::editQuantity(int itemNo, int changeQuantity)
{
	if (logedIn && changeQuantity < 0)
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
					<< _salePrice << "," << 0 << "," << changeQuantity << "," << _itemName << ","
					//user details
					<< ID << "," << name + "(admin)" << ","
					//time and date
					<< now.tm_mday << '/' << now.tm_mon + 1 << '/' << now.tm_year + 1900 << ' ' << now.tm_hour << ':' << now.tm_min
					<< std::endl;
			}
			else
			{
				tempDataBase << line << "\n";
			}
		}
		itemDataBase.close();
		tempDataBase.close();
		logFile.close();
		std::remove(itemDataBaseFile.c_str());
		std::rename(tempDataBaseFile.c_str(), itemDataBaseFile.c_str());
		return true;
	}
	return false;
}

/*
* @param ofTime are optional
*	For day		d01
*	For mount	m01
*	For Year	y2023
*/
bool Admin::SaleLog(int& totalItemSold, float& totalRevenue, float& totalCost, float& profit, std::string ofTime = "DateType(date)")
{
    int option = 0;
    if (ofTime[0] == 'd')
        option = 1;
    else if (ofTime[0] == 'm')
        option = 2;
    else if (ofTime[0] == 'y')
        option = 3;
    else
        option = 0;
    ofTime.erase(0,1);

    int firstSlash = ofTime.find('/');
    int secondSlash = ofTime.find('/', firstSlash + 1);

    std::string dayString = ofTime.substr(0, firstSlash);
    std::string monthString = ofTime.substr(firstSlash + 1, secondSlash - firstSlash - 1);
    std::string yearString = ofTime.substr(secondSlash + 1);

    int day = std::stoi(dayString);
    int month = std::stoi(monthString);
    int year = std::stoi(yearString);



	if (logedIn)
	{
		std::vector<Log> log = returnReport();
		int _totalItemSold = 0;
		float _totalRevenue = 0;
		float _totalCost = 0;
		for (int i = 0; i < log.size(); i++)
		{
			if (log[i].price > 0)
            {
                if (log[i].day == day && option == 1 && log[i].month == month && log[i].year==year)
				{
					_totalItemSold += log[i].quantity;
					_totalRevenue += (log[i].salePrice * log[i].quantity);
					_totalCost += (log[i].price * log[i].quantity);
				}
                else if (log[i].month == month && option == 2 && log[i].year==year)
				{
					_totalItemSold += log[i].quantity;
					_totalRevenue += (log[i].salePrice * log[i].quantity);
					_totalCost += (log[i].price * log[i].quantity);
				}
                else if (log[i].year == year && option == 3)
				{
					_totalItemSold += log[i].quantity;
					_totalRevenue += (log[i].salePrice * log[i].quantity);
					_totalCost += (log[i].price * log[i].quantity);
				}
				else if (option == 0)
				{
					_totalItemSold += log[i].quantity;
					_totalRevenue += (log[i].salePrice * log[i].quantity);
					_totalCost += (log[i].price * log[i].quantity);
				}
			}
		}
		totalItemSold = _totalItemSold;
		totalRevenue = _totalRevenue;
		totalCost = _totalCost;
		profit = _totalRevenue - totalCost;
		return true;
	}
	return false;
}
bool Admin::PurchaseLog(int& totalItemPurchased, float& totalCost, float& netTotal, std::string ofTime = "DateType(date)")
{

    int option = 0;
    if (ofTime[0] == 'd')
        option = 1;
    else if (ofTime[0] == 'm')
        option = 2;
    else if (ofTime[0] == 'y')
        option = 3;
    else
        option = 0;
    ofTime.erase(0,1);

    int firstSlash = ofTime.find('/');
    int secondSlash = ofTime.find('/', firstSlash + 1);

    std::string dayString = ofTime.substr(0, firstSlash);
    std::string monthString = ofTime.substr(firstSlash + 1, secondSlash - firstSlash - 1);
    std::string yearString = ofTime.substr(secondSlash + 1);

    int day = std::stoi(dayString);
    int month = std::stoi(monthString);
    int year = std::stoi(yearString);


	if (logedIn)
	{
		std::vector<Log> log = returnReport();
		int _totalItemPurchased = 0;
		float _totalCost = 0;
		float _netTotal = 0;
		for (int i = 0; i < log.size(); i++)
		{
			if (log[i].price < 0)
			{
                if (log[i].day == day && option == 1 && log[i].month == month && log[i].year==year)
				{
					_totalItemPurchased += log[i].quantity;
					_totalCost += (log[i].salePrice * log[i].quantity);
					_netTotal += -(log[i].price * log[i].quantity);
				}
                else if (log[i].month == month && option == 2 && log[i].year==year)
				{
					_totalItemPurchased += log[i].quantity;
					_totalCost += (log[i].salePrice * log[i].quantity);
					_netTotal += -(log[i].price * log[i].quantity);
				}
                if (log[i].year == year && option == 3)
				{
					_totalItemPurchased += log[i].quantity;
					_totalCost += (log[i].salePrice * log[i].quantity);
					_netTotal += -(log[i].price * log[i].quantity);
				}
				if (option == 0)
				{
					_totalItemPurchased += log[i].quantity;
					_totalCost += (log[i].salePrice * log[i].quantity);
					_netTotal += -(log[i].price * log[i].quantity);
				}

			}
		}
		totalItemPurchased = _totalItemPurchased;
		totalCost = _totalCost;
		netTotal = _netTotal;
		return true;
	}
	return false;
}

bool Admin::checkID(std::string password, std::string newpassword)
{
	if (password == newpassword)
		return true;
	else
		return false;
}
bool Admin::itemExistsInDatabase(int _ID)
{
    std::ifstream itemDataBase(itemDataBaseFile);

    if (itemDataBase)
    {
        std::string line;
        while (std::getline(itemDataBase, line))
        {
            std::istringstream iss(line);
            std::string idString;
            std::getline(iss, idString, ',');

            // Convert the ID string to an integer
            int id = std::stoi(idString);

            if (id == _ID)
            {
                itemDataBase.close();
                return true;
            }
        }
    }

    itemDataBase.close();
    return false;
}


void Admin::logOut()
{
	logedIn = false;
}
