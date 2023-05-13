#include<iostream>
#include"Class/admin.h"

void AdminMenu()
{
	/*Customer c1(11,"Asad","asadabdullah@gmail.com","asad123");*/
	/*yaha pe sign up ka poochna ha*/
	Admin ad(11);
	std::cout << ad.getAdminID();
}

int main2()
{
	AdminMenu();
	return 0;
}