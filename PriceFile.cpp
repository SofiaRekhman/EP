#include"PriceFile.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

void PriceFile::ReadPricesFromFile(Price*& prices, int& count)
{
	ifstream fin("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Price.txt");
	prices = new Price[100]; count = 0;

	int time, countOfTime;
	double cost;
	string age, dayOfWeek;
	while (!fin.eof())
	{
		fin >> time >> age >> dayOfWeek >> cost >> countOfTime;
		prices[count++] = Price(time, age, dayOfWeek, cost, countOfTime);

	}
	fin.close();
}

void PriceFile::WritePricesToFile(Price* prices, int count)
{
	ofstream fout("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Price.txt");
	for (int i = 0; i < count; i++)
	{
		fout << prices[i].GetTime() << " " << prices[i].GetAge() << " " << prices[i].GetDayOfWeek() << " " << prices[i].GetCost() << " " << prices[i] - (prices[i].GetTime());

		if (i != count - 1)
			fout << endl;
	}
	fout.close();
}