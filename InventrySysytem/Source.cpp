#include "Header.h"
#include<iostream>
#include"Class/customer.h"


void CustomerMode()
{
//	Customer c1(13,"Umer","umerghafoor@gmail.com","password");
	Customer c2(13);
	std::cout << c2.getName();
}

int main()
{
	CustomerMode();
	return 0;
}
