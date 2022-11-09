#pragma once
#include"Entertainment.h"
#include<string>
using namespace std;

class Pool : public Entertainment
{
public:
	Pool(string name = " ", string size = " ", double height = 0.0);
	void WriteToConsole();
};