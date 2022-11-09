#include "Hills.h"
#include<iostream>
#include<string>
using namespace std;

Hill::Hill(string name, string size, string color, double height) :Entertainment(name, size, height)
{	
	this->color = color;
}

string Hill::GetColor()
{
	return color;
}

void Hill::WriteToConsole()
{
	cout << name << " " << size << " " << color << " " << height << endl;
}
