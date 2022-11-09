#pragma once
#include"Price.h"

class PriceWeekday : public Price
{
	string holiday;
public:
	PriceWeekday(int time = 0, string age = " ", string dayOfWeek = " ", double cost = 0.0, int countOfTime = 0, string holiday = " ");
};
