#include<string>
#include<iostream>
#include<fstream>

using namespace std;



class data
{
private:
	string name;
	string email;
	string username;
	string password;
public:
	data()
	{
		name = "";
		email = "";
		username = "";
		password = "";
	}
	data(string name, string email, string username, string password)
	{
		this->name = name;
		this->email = email;
		this->username = username;
		this->password = password;
	}
	void setname(string name)
	{
		this->name = name;
	}
	void setemail(string email)
	{
		this->email = email;
	}
	void setusername(string username)
	{
		this->username = username;
	}
	void setpassword(string password)
	{
		this->password = password;
	}

	string getname()
	{
		return name;
	}
	string getemail()
	{
		return email;
	}
	string getusername()
	{
		return username;
	}
	string getpassword()
	{
		return password;
	}
	void user()
	{
	
	}
};
class signup :public data
{

};


int main2()
{

	fstream file("user.txt", ios::app);
	int ch = 0;
	int cho = 0;
	while (1)
	{
		cout << "Press 1 if you are a user :" << endl;
		cout << "Press 2 if you are admin :" << endl;
		cout << "Press 3 if you are a vendor :" << endl;
		cin >> ch;
		if (ch == 1)
		{
			cout << "Press 1 to sign up :" << endl;
			cout << "Press 2 to sign in :" << endl;
			cin >> cho;
			if (cho == 1)
			{
				string name, email, username, password;
				signup q1;
				cout << "Enter your name : ";
				cin.ignore();
				getline(cin,name);
				q1.setname(name);
				cout << "Enter your email : ";
				getline(cin, email);
				q1.setemail(email);
				cout << "Create a username for youself :";
				getline(cin, username);
				q1.setusername(username);
				cout << "Create a password :";
				getline(cin, password);
				q1.setpassword(password);
				if (file.is_open())
				{
					file << name << "," << email << "," << username << "," << password << endl;
				}
				else
				{
					cout << "File is not open";
				}
			}
		}
		else if (ch == 2)
		{
			/*login data*/
		}
		else
			break;
	}

}
