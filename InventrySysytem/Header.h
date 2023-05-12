#pragma once
#include<iostream>
#include<string>
class user
{
private:
	string name;
	string email;
	string username;
	string password;
public:
	user()
	{
		name = "0/";
		email = "0/";
		username = "0/";
		password = "0/";
	}
	user(string n, string e, string u, string p)
	{
		this->name = n;
		this->email = e;
		this->username = u;
		this->password = p;
	}
	void setname(string name)
	{
		this->name = name;
	}
	void setname(string email)
	{
		this->email = email;
	}
	void setname(string usernname)
	{
		this->username = username;
	}
	void setname(string password)
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
};