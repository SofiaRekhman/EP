#include"PoolsList.h"
#include"PoolsFile.h"
#include<iostream>
using namespace std;
//using namespace InheritanceLists;

PoolsList::PoolsList() 
{
	Pool** pools;
	PoolsFile::ReadPoolsFromFile(pools, current);
	entertainments = (Entertainment**)pools;
}

PoolsList:: ~PoolsList()
{
	//PoolsFile::WritePoolsToFile((Pool**)entertainments, current);
}

void PoolsList::Add(Pool& pool)
{
	EntertainmentList::Add(new Pool(pool));
	PoolsFile::WritePoolsToFile((Pool**)entertainments, current);
}

void PoolsList::WritePoolsFromInputSize(string inputsize)
{
	WriteEntertainmentFromInputSize(inputsize);
}

void PoolsList::WriteAllToConsole() const
{
	EntertainmentList::WriteAllToConsole();
}