#pragma once

#include"Entertainment.h"
#include <string>
using namespace std;

class Hill : public Entertainment
{
	string color;
public:
	Hill(string name = " ", string size = " ", string color = " ", double height = 0.0);
	string GetColor();
	void WriteToConsole();
};