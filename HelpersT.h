#pragma once

#include<string>
#include<iostream>
using namespace std; 

template <class T>
void WriteFromInputSize(T* item, int count, string inputsize)
{
	int a = 0;
	for (int i = 0; i < count; i++)
	{
		if (item[i].GetSize() == inputsize)
		{
			item[i].WriteToConsole();
			a++;
		}
	}
	if (a == 0) cout << "There is no information about entertainment with this size yet" << endl;
	cout << endl;
}