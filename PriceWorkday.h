#pragma once
#include"Price.h"

class PriceWorkday : public Price
{
public:
	PriceWorkday(int time = 0, string age = " ", string dayOfWeek = " ", double cost = 0.0, int countOfTime = 0);
};