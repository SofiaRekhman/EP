#include"PriceList.h"
#include"PriceFile.h"
#include<iostream>
#include<string>
using namespace std;

PriceList::PriceList()
{
	PriceFile::ReadPricesFromFile(prices, current);
}

PriceList:: ~PriceList()
{
	//PriceFile::WritePricesToFile(prices, current);
	delete[] prices;
}

void PriceList::Add(Price& price)
{
	prices[current] = price;
	current++;
	PriceFile::WritePricesToFile(prices, current);
}

void PriceList::WriteTheHighestPrice()
{
	double temp, cur = 0;
	int index = 0;
	for (int i = 0; i < current; i++)
	{
		temp = prices[i].GetCost();
		if (temp > cur)
		{
			index=i;
			cur = temp;
		}
		else cur = cur;
	}
	cout << "The highest price: " << cur << endl;
	prices[index].WriteToConsole();
	cout << endl;
}

void PriceList::WriteTheLowestPrice()
{
	double temp, cur = prices[0].GetCost();
	int index = 0;

	for (int i = 1; i < current; i++)
	{
		temp = prices[i].GetCost();
		if (temp < cur)
		{
			cur = temp;
			index=i;
		}
		else cur = cur;
		temp = prices[i].GetCost();
	}
	cout << "The lowest price: " << cur << endl;
	prices[index].WriteToConsole();
	cout << endl;
}

void PriceList::WritePriceFromInputDayOfWeek(string dayofweek)
{
	int a = 0;
	for (int i = 0; i < current; i++)
	{
		if (prices[i].GetDayOfWeek() == dayofweek)
		{
			prices[i].WriteToConsole();
			a++;
		}
	}
	if (a == 0) cout << "There is no information about this day yet" << endl;
	cout << endl;
}

void PriceList::WritePriceFromInputTime(int Time)
{
	int a = 0;
	for (int i = 0; i < current; i++)
	{
		if (prices[i].GetTime() == Time)
		{
			prices[i].WriteToConsole();
			a++;
		}
	}
	if (a == 0) cout << "There are no tickets for this hour yet" << endl;
	cout << endl;
}

void PriceList::WriteAllToConsole() const
{

	for (int i = 0; i < current; i++)
	{
		prices[i].WriteToConsole();
	}
}