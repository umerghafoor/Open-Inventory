#include<iostream>
#include"Class/admin.h"
int main()
{
	int totalItem = 0;
	float totalRevenue = 0;
	float totalCost = 0;
	float profit;

//	Admin ad(1, "umer", "email", "12345678");
	Admin ad2(1, "12345678");

	//suply the Addresses and get the values in it
	ad2.SaleLog(totalItem, totalRevenue, totalCost, profit, "y2022");
	std::cout << "Total Item Sold      : " << totalItem << std::endl;
	std::cout << "Total Revenue        : $" << totalRevenue << std::endl;
	std::cout << "Total Cost           : $" << totalCost << std::endl;
	std::cout << "Profit               : $" << profit << std::endl;

	//suply the Addresses and get the values in it
	ad2.PurchaseLog(totalItem, totalRevenue, totalCost, "d14");
	std::cout << "\nTotal Item purchase  : " << totalItem << std::endl;
	std::cout << "Total Cost             : $" << totalRevenue << std::endl;
	std::cout << "Net Total              : $" << totalCost << std::endl;

	//Customer managment
	ad2.deleteCustomer(1);
	ad2.markSpecial(4, 0);
	
	//cart mangment
	//ad2.deleteItem(35);
	ad2.editQuantity(4, -1);

	std::cout << ad2.getName() << std::endl;

	ad2.displayAll();

	std::cout << "Add to cart" << std::endl;
	ad2.addToCartbyNo(1, 12);
	ad2.addToCartbyName("item2", 4);
	std::cout << '\n';


	std::cout << "cart" << std::endl;
	ad2.displayCart();
	ad2.editQuantity(1 - 1, 6);
	std::cout << "cart after edit quantity" << std::endl;
	ad2.displayCart();


	std::cout << "remove from cart" << std::endl;
	ad2.removeFromCart(1 - 1);
	ad2.displayCart();

	ad2.sendToVendor();
};