#pragma once

#include"APoolsList.h"
#include"Pools.h"
#include "PoolsTList.h"
#include "HelpersT.h"
#include"PoolsFile.h"
#include"List.h"

/*namespace TemplatedLists
{
	class PoolList : public List<Pool>, public APoolList
	{
	public:
		PoolList();
		~PoolList();
		void Add(Pool& item);
		void WriteAllToConsole() const;
		void WritePoolsFromInputSize(string inputsize) const;
	};
}*/

namespace TemplatedLists
{
	class PoolList : public List<Pool>, public APoolList
	{
	public:
		PoolList()
		{
			PoolsFile::ReadPoolsFromFile(items, current);
		}
		~PoolList()
		{
			PoolsFile::WritePoolsToFile(items, current);
		}
		void Add(Pool& item)
		{
			List<Pool>::Add(item);
		}
		void WriteAllToConsole() const
		{
			List<Pool>::WriteAllToConsole();
		}
		void WritePoolsFromInputSize(string inputsize)
		{
			WriteFromInputSize(items, current, inputsize);
		}
	};
}


