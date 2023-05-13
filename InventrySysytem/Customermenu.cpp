#include<iostream>
#include"Class/customer.h"

void CustomerMenu()
{
	/*Customer c1(11,"Asad","asadabdullah@gmail.com","asad123");*/
	/*yaha pe sign up ka poochna ha*/
	Customer c2(11);
	std::cout << c2.getName();
}

int main2()
{
	CustomerMenu();
	return 0;
}