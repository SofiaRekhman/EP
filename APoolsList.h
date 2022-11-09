#pragma once

#include"Pools.h"
#include"HelpersT.h"
#include"AList.h"

class APoolList : public AList<Pool>
{
public:
	virtual void WritePoolsFromInputSize(string inputsize) = 0;
	virtual ~APoolList() {}
};
