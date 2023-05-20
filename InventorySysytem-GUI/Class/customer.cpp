#include "customer.h"

Customer::Customer(int _ID, std::string password)
{
	this->ID = _ID;

	logedIn = false;
    std::ifstream customerDataBase(customerDataBaseFile);
    std::string _id, _name, _email, _password, _specialUser;
	std::string line;
	while (std::getline(customerDataBase, line))
	{
		std::stringstream ss(line);
		std::getline(ss, _id, ',');
		std::getline(ss, _name, ',');
		std::getline(ss, _email, ',');
        std::getline(ss, _password, ',');
        std::getline(ss, _specialUser, '\n');

		int id = std::stoi(_id);
		if (id == _ID && checkID(_password, password))
		{
			ID = id;
			name = _name;
			email = _email;
			password = _password;
            specialUser=_specialUser == "1";
			logedIn = true;
			break;
		}
	}
	customerDataBase.close();
	if (!logedIn)
	{
		ID = -1;
		name = '\0';
		email = '\0';
		password = '\0';
	}
}
bool Customer::UserSignUp(int _ID, std::string _name, std::string _email, std::string _password, bool specialCustomer)
{
	this->ID = _ID;
	this->name = _name;
	this->email = _email;
	this->password = _password;

	std::ifstream customerDataBase(customerDataBaseFile);
	std::string line;
	bool customerExists = false;
	while (std::getline(customerDataBase, line))
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
	customerDataBase.close();

	if (!customerExists)
	{
		std::ofstream customerDataBase(customerDataBaseFile, std::ios::app);
		customerDataBase << ID << "," << name << "," << email << "," << password << ',' << specialCustomer << "\n";
		customerDataBase.close();
        return true;
	}
	logedIn = false;
    return false;
}

int Customer::getID()
{
	return ID;
}
std::string Customer::getName()
{
	return name;
}
std::string Customer::getEmail()
{
	return email;
}
bool Customer::isSpecialCustomer()
{
	return specialUser;
}

float Customer::totalAmount()
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
bool Customer::doneShoping(float cash, float change, float received)
{
    std::vector<Item> allItems = ReturnAllItems();
	if (logedIn)
    {
        std::ofstream logFile(logDataBaseFile, std::ios::app);

        // Boilerplate code for ctime library
        std::time_t t = std::time(0);
        std::tm now;
        localtime_s(&now, &t);

        int availableItemCount = 0; // Counter for available items

        for (int i = 0; i < cart.size(); i++)
        {
            bool itemAvailable = false;
            for (int j = 0; j < allItems.size(); j++)
            {
                if (allItems[j].itemNo == cart[i].itemNo && allItems[j].quantity >= cart[i].quantity)
                {
                    itemAvailable = true;
                    break;
                }
            }
            if (!itemAvailable)
            {
                cart.erase(cart.begin() + i);
                i--;
            }
            else
            {
                logFile
                    // useful information
                    << cart[i].salePrice << "," << cart[i].price << "," << cart[i].quantity << "," << cart[i].itemName << ","
                    // user details
                    << ID << "," << name << ","
                    // time and date
                    << now.tm_mday << '/' << now.tm_mon + 1 << '/' << now.tm_year + 1900 << ' ' << now.tm_hour << ':' << now.tm_min
                    << std::endl;
                availableItemCount++;
            }
        }
        logFile.close();
        if (availableItemCount == cart.size())
        {
            return true;
        }
        else
        {
            return false;
        }

		logFile.close();
	}
	else
        return false;
}

bool Customer::addToCartbyNo(int itemNo, int quantity)
{
	if (logedIn && quantity!=0)
	{
		for (int i = 0; i < cart.size(); ++i)
		{
			if (cart[i].itemNo == itemNo)
			{
				cart[i].quantity += quantity;
				return true;
			}
		}


		Item item = ReturnItemByNo(itemNo);
		item.quantity = quantity;
		cart.push_back(item);
		return true;
	}
	else
	{
		return false;
	}
}
bool Customer::addToCartbyName(std::string itemName, int quantity)
{
	if (logedIn && quantity != 0)
	{
		for (int i = 0; i < cart.size(); ++i)
		{
			if (cart[i].itemName == itemName)
			{
				cart[i].quantity += quantity;
				return true;
			}
		}
		Item item = ReturnItemByName(itemName);
		if (item.itemName == "\0")
		{
			return false;
		}
		item.quantity = quantity;
		cart.push_back(item);
		return true;
	}
	else
	{
		return false;
	}
}
bool Customer::removeFromCart(int itemNo)
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
bool Customer::editQuantity(int itemNo, int newQuantity)
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

std::vector<Item> Customer::displayAll()
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
std::vector<Item> Customer::displayCart()
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
std::vector<std::string> Customer::getCategoryFromItems(std::vector<Item> items)
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

bool Customer::emptyCart()
{
    cart.erase(cart.begin(),cart.end());
    return true;
}

bool Customer::checkID(std::string password, std::string newpassword)
{
	if (password == newpassword)
		return true;
	else
		return false;
}

void Customer::logOut()
{
	logedIn = false;
}

