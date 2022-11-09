#pragma once
#include<string>
using namespace std;

class Price
{
	int time;
	string age;
	string dayOfWeek;
	double cost;
	double countOfTime;
	bool isValid(int time, string age, string dayOfWeek, double cost, int countOfTime);
public:
	Price(int time = 0, string age = " ", string dayOfWeek = " ", double cost = 0.0, int countOfTime = 0);
	int GetTime();
	string GetAge();
	string GetDayOfWeek();
	double GetCost();
	int GetCountOfTime();
	int operator-(int);
	void WriteToConsole();
};