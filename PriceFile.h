#pragma once

#include"Price.h"

class PriceFile
{
public:
	static void ReadPricesFromFile(Price*& prices, int& count);
	static void WritePricesToFile(Price* prices, int count);
};