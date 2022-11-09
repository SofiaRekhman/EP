#pragma once
#include"Pools.h"

class PoolsFile
{
public:
	static void ReadPoolsFromFile(Pool**& pools, int& count);
	static void WritePoolsToFile(Pool** pools, int count);
	static void ReadPoolsFromFile(Pool*& pools, int& count);
	static void WritePoolsToFile(Pool* pools, int count);
};