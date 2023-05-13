#include<iostream>
#include"Class/admin.h"

int main()
{
	int totalItemSold = 0;
	float totalRevenue = 0;
	float totalCost = 0;
	float profit;
//	Admin ad(1, "umer", "email", "12345678");
	Admin ad2(1, "12345678");
	ad2.SaleLog(totalItemSold,totalRevenue, totalCost,profit);
	ad2.displayPurchaseLog();

	std::cout << "Total Item Sold      : " << totalItemSold << std::endl;
	std::cout << "Total Revenue        : $" << totalRevenue << std::endl;
	std::cout << "Total Cost           : $" << totalCost << std::endl;
	std::cout << "Profit               : $" << totalRevenue - totalCost << std::endl;
}