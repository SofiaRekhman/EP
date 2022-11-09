#include"PriceWeekday.h"

PriceWeekday::PriceWeekday(int time, string age, string dayOfWeek, double cost, int countOfTime, string holiday) : Price(time, age, dayOfWeek, cost, countOfTime)
{
	this->holiday = holiday;
}