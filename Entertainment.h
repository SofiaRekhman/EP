#pragma once

#include <string>
using namespace std;

class Entertainment
{
protected:
	string name;
	string size;
	double height;
	
public:
	Entertainment(string name = " ", string size = " ", double height = 0.0);
	string GetName();
	string GetSize();
	double GetHeight();
	bool isValid(string name, string size, double height);
	virtual void WriteToConsole();
};