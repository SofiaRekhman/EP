#pragma once
#include<string>
#include<iostream>
using namespace std;
class Name 
{
protected:
	string userName;
	string userSurname;
public:
	Name() {}
	Name(string userName, string userSurname) 
	{
		userName = userName;
		userSurname = userSurname;
	}
	~Name() {};
	friend ostream& operator<< (ostream& os, Name& person) 
	{
		os << person.userName << " " << person.userSurname << ", " << "welcome to ";
		return os;
	}
	friend istream& operator>> (istream& is, Name& person) {
		cout << "What is your name?\n";
		is >> person.userName >> person.userSurname;
		return is;
	}
};