#pragma once
#include"Hills.h"
#include"HelpersT.h"
#include"AList.h"

class AHillList : public AList<Hill>
{
public:
	virtual void WriteHillsFromInputSize(string inputsize) = 0;
	virtual ~AHillList() {}
};