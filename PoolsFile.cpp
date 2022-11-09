#include"PoolsFile.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

void PoolsFile::ReadPoolsFromFile(Pool**& pools, int& count)
{
	ifstream fin("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Pools.txt");
	pools = new Pool * [1000]; 
	count = 0;

	string name, size;
	int height;
	while (!fin.eof())
	{
		fin >> name >> size >> height;
		pools[count++] = new Pool(name,size,height);
	}
	fin.close();
}

void PoolsFile::WritePoolsToFile(Pool** pools, int count)
{
	ofstream fout("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Pools.txt");

	for (int i = 0; i < count; i++)
	{
		fout << pools[i]->GetName() << " " << pools[i]->GetSize() << " " << pools[i]->GetHeight();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}

void PoolsFile::ReadPoolsFromFile(Pool*& pools, int& count)
{
	ifstream fin("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Pools.txt");
	pools = new Pool[100]; 
	count = 0;

	string name, size;
	int height;
	while (!fin.eof())
	{
		fin >> name >> size >> height;
		pools[count++] = Pool(name, size, height);
	}

	fin.close();
}

void PoolsFile::WritePoolsToFile(Pool* pools, int count)
{
	ofstream fout("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Pools.txt");

	for (int i = 0; i < count; i++)
	{
		fout << pools[i].GetName() << " " << pools[i].GetSize() << " " << pools[i].GetHeight();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}