#include<iostream>
#include"Class/customer.h"

void CustomerMenu()
{
	Customer c2(3,"user3","user3@gmail.com","12345678",0);
//	Customer c2(3,"12345678");
	std::cout << c2.getName() << std::endl;
	
	c2.displayAll();

	std::cout << "Add to cart" << std::endl;
	c2.addToCartbyNo(1,12);
	c2.addToCartbyName("item2", 4);
	std::cout << '\n';


	std::cout << "cart" << std::endl;
	c2.displayCart();
	c2.editQuantity(1 - 1, 6);
	std::cout << "cart after edit quantity" << std::endl;
	c2.displayCart();


	std::cout << "remove from cart" << std::endl;
	c2.removeFromCart(1 - 1);
	c2.displayCart();

	std::cout << "Toatal : " << c2.totalAmount() << std::endl;
	c2.doneShoping(500, 150, 350);
}

int main()
{

	CustomerMenu();
	return 0;
}

