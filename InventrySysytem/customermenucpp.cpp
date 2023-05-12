#include<iostream>
#include"Class/customer.h"

void CustomerMenu()
{
	//	Customer c1(13,"Umer","umerghafoor@gmail.com","password");
	Customer c2(13);
	std::cout << c2.getName();


}

int main()
{
	CustomerMenu();
}