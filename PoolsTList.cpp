/*#include "PoolsTList.h"
#include "HelpersT.h"
#include"PoolsFile.h"
#include<iostream>

using namespace std;
using namespace TemplatedLists;

PoolList::PoolList()
{
	PoolsFile::ReadPoolsFromFile(items, current);
}

PoolList::~PoolList()
{
	PoolsFile::WritePoolsToFile(items, current);
}

void PoolList::Add(Pool& item)
{
	List<Pool>::Add(item);
}

void PoolList::WriteAllToConsole() const
{
	List<Pool>::WriteAllToConsole();
}

void PoolList::WritePoolsFromInputSize(string inputsize) const
{
	WriteFromInputSize(items, current, inputsize);
}*/