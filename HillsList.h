#pragma once

#include"AHillsList.h"
#include"Hills.h"
#include"EntertainmentList.h"

//namespace InheritanceLists
//{
	class HillsList : public EntertainmentList, public AHillList
	{
	public:
		HillsList();
		~HillsList();
		void Add(Hill& hill);
		void WriteHillsFromInputSize(string inputsize);
		void WriteAllToConsole() const;
	};
//}
