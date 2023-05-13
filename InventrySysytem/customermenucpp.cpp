#include<iostream>
#include"Class/customer.h"

void CustomerMenu()
{
//	Customer c1(2,"user2","user1@gmail.com","12345678");
	/*yaha pe sign up ka poochna ha*/
	Customer c2(2,"12345678");
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
	return 0;
}