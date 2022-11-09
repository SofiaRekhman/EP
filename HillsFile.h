#pragma once
#include"Hills.h"

class HillsFile
{
public:
	static void ReadHillsFromFile(Hill**& hills, int& count);
	static void WriteHillsToFile(Hill** hills, int count);
	static void ReadHillsFromFile(Hill*& hills, int& count);
	static void WriteHillsToFile(Hill* hills, int count);
};