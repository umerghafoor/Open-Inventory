#include<stdlib.h>
#include<Windows.h>
#include"Class/customer.h"
//#include"Class/admin.h"
//#include"Class/venderor.h"
using namespace std;
int main()
{
	std::cout << "\033[1;31m";
	cout << "                **************************************************************************************" << endl;
	cout << "                                              Welcome to Awara Shopping Centre                        " << endl;
	cout << "                **************************************************************************************" << endl;
	std::cout << "\033[0m";
	int ch = 0;
	while (1)
	{
		//while loop to keep the user interacted
		cout << "Please select your role" << endl;
		cout << "1. User        :" << endl;
		cout << "2. Admin       :" << endl;
		cout << "3. Vendor      :" << endl;
		cout << "4. Exit        :" << endl;
		cin >> ch;
		if (ch == 1)
		{
			//making customer menu
			int chc = 0;
			cout << "Welcome to cutomer menu!" << endl;
			cout << "PRESS" << endl;
			cout << "1. New Customer            :" << endl;
			cout << "2. Existing Customer       :" << endl;
			cin >> chc;
			if (chc == 1)
			{
				int id;
				string name;
				string email;
				string password;
				cout << "Enter your ID              : ";
				cin >> id;
				cout << "Enter your name            : ";
				getline(cin, name);
				cin.ignore();
				cout << "Enter your email           : ";
				getline(cin, email);
				cin.ignore();
				cout << "Enter a password           : ";
				getline(cin, password);
				cin.ignore();
				Customer(id,name,email,password, 1);
				break;
			}
		}
		else if (ch == 2)
		{
			cout << "Check for 2" << endl;
		}
		else if (ch == 3)
		{
			cout << "Check for 3" << endl;
		}
		else if (ch == 4)
		{
			cout << "HAVE A NICE DAY!" << endl;
			break;
		}
	}
	return 0;
}