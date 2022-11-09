#include "Pools.h"
#include<iostream>
#include<string>
using namespace std;

Pool::Pool(string name, string size, double height):Entertainment(name, size, height)
{
}

void Pool::WriteToConsole()
{
	cout << name << " " << size << " " << height << endl;
}
