#include"Price.h"
#include<iostream>
#include<string>
using namespace std;

Price::Price(int time, string age, string dayOfWeek, double cost, int countOfTime)
{
    if (!isValid(time, age, dayOfWeek, cost, countOfTime))
        throw "Value aren`t correct. Change input data";

    this->time = time;
    this->age = age;
    this->dayOfWeek = dayOfWeek;
    this->cost = cost;
    this->countOfTime = countOfTime;
}

bool Price::isValid(int time, string age, string dayOfWeek, double cost, int countOfTime)
{
    if (cost > 0.0 && time > 6 && time < 19) {
        return true;
    }

}

int Price::GetTime()
{
    return time;
}

string Price::GetAge()
{
    return age;
}

string Price::GetDayOfWeek()
{
    return dayOfWeek;
}

double Price::GetCost()
{
    return cost;
}

int Price::GetCountOfTime()
{
    return countOfTime;
}

int Price::operator-(int time)
{
    return 19 - time;
}
void Price::WriteToConsole()
{
    cout << time << " " << age << " " << dayOfWeek << " " << cost << " " << countOfTime << endl;
}