/*#include "HillsTList.h"
#include "HelpersT.h"
#include"HillsFile.h"
#include<iostream>

using namespace std;
using namespace TemplatedLists;

HillList::HillList()
{
	HillsFile::ReadHillsFromFile(items, current);
}

HillList::~HillList()
{
	HillsFile::WriteHillsToFile(items, current);
}

void HillList::Add(Hill& item)
{
	List<Hill>::Add(item);
}

void HillList::WriteAllToConsole() const
{
	List<Hill>::WriteAllToConsole();
}

void HillList::WriteHillsFromInputSize(string inputsize) const
{
	WriteFromInputSize(items, current, inputsize);
}*/