#include<iostream>
#include"Class/admin.h"
#include"Class/inventory.h"
int main()
{
	int totalItem = 0;
	float totalRevenue = 0;
	float totalCost = 0;
	float profit;

//	Admin ad(1, "umer", "email", "12345678");
	Admin ad2(1, "12345678");

	//suply the Addresses and get the values in it
	ad2.SaleLog(totalItem,totalRevenue, totalCost,profit);
	std::cout << "Total Item Sold      : " << totalItem << std::endl;
	std::cout << "Total Revenue        : $" << totalRevenue << std::endl;
	std::cout << "Total Cost           : $" << totalCost << std::endl;
	std::cout << "Profit               : $" << profit << std::endl;

	//suply the Addresses and get the values in it
	ad2.PurchaseLog(totalItem, totalRevenue, totalCost);
	std::cout << "\nTotal Item purchase  : " << totalItem << std::endl;
	std::cout << "Total Cost             : $" << totalRevenue << std::endl;
	std::cout << "Net Total              : $" << totalCost << std::endl;

}