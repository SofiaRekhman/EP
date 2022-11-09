#include "Entertainment.h"
#include<iostream>
#include<string>
using namespace std;

Entertainment::Entertainment(string name, string size, double height)
{
	if (!isValid(name, size, height))
		throw "Height isn`t correct. Change input data";
	this->name = name;
	this->size = size;
	this->height = height;
}

bool Entertainment::isValid(string name, string size, double height)
{
	if (height < 0.0)
		return false;
	return true;
}

string Entertainment::GetName()
{
	return name;
}

string Entertainment::GetSize()
{
	return size;
}

double Entertainment::GetHeight()
{
	return height;
}

void Entertainment::WriteToConsole()
{
	cout << name << " " << size << " " << height << endl;
}