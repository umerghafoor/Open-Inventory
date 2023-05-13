#include<iostream>
#include"Class/customer.h"

void CustomerMenu()
{
	Customer c1(3,"user3","user3@gmail.com","12345678");
	Customer c2(3,"1234ddsad678");
	std::cout << c2.getName();
}

void ItemFunctions()
{
	inventory i1;
	std::cout << i1.addItem(2, "item2", 40.0, 99);
}

int main()
{
	ItemFunctions();
	/*CustomerMenu();*/
	return 0;
}