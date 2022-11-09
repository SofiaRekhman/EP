#pragma once
#include "HillsTList.h"
#include "HelpersT.h"
#include"HillsFile.h"
#include"AHillsList.h"
#include"Hills.h"
#include"List.h"

namespace TemplatedLists
{
	class HillList : public List<Hill>, public AHillList
	{
	public:
		HillList()
		{
			HillsFile::ReadHillsFromFile(items, current);
		}
		~HillList()
		{
			HillsFile::WriteHillsToFile(items, current);
		}
		void Add(Hill& item)
		{
			List<Hill>::Add(item);
		}
		void WriteAllToConsole() const
		{
			List<Hill>::WriteAllToConsole();
		}
		void WriteHillsFromInputSize(string inputsize)
		{
			WriteFromInputSize(items, current, inputsize);
		}
	};
}

