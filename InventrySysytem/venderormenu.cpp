#include<iostream>
#include"Class/venderor.h"

void venderor()
{
//	Vendor ven1(1, "Umer","umer@email.com", "12345678");
	Vendor ven(2,"12345678");
	ven.editQuantity(1, 4);
}

int main()
{
	venderor();
	return 0;
}
