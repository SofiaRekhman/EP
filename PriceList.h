#pragma once

#include"Price.h"
#include<string>

class PriceList
{

	Price* prices; 
	int current;

public:
	PriceList();
	~PriceList();
	void Add(Price& price);
	void WriteAllToConsole() const;
	void WriteTheHighestPrice();
	void WriteTheLowestPrice();
	void WritePriceFromInputDayOfWeek(string dayofweek);
	void WritePriceFromInputTime(int Time);
};