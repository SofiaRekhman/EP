#pragma once

#include"APoolsList.h"
#include"Pools.h"
#include"EntertainmentList.h"

//namespace InheritanceLists
//{
	class PoolsList : public EntertainmentList, public APoolList
	{
	public:
		PoolsList();
		~PoolsList();
		void Add(Pool& poll);
		void WritePoolsFromInputSize(string inputsize);
		void WriteAllToConsole() const;
	};
//}