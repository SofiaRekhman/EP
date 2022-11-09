#include"HillsFile.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

void HillsFile::ReadHillsFromFile(Hill**& hills, int& count)
{
	ifstream fin("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Hills.txt");
	hills = new Hill*[100]; count = 0;

	string name, size, color;
	int height;
	while (!fin.eof())
	{
		fin >> name >> size >> color >> height;
		hills[count++] = new Hill(name, size, color, height);
	}
	fin.close();
}

void HillsFile::WriteHillsToFile(Hill** hills, int count)
{
	ofstream fout("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Hills.txt");

	for (int i = 0; i < count; i++)
	{
		fout << hills[i]->GetName() << " " << hills[i]->GetSize() << " " << hills[i]->GetColor() << " " << hills[i]->GetHeight();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}

void HillsFile::ReadHillsFromFile(Hill*& hills, int& count)
{
	ifstream fin("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Hills.txt");
	hills = new Hill[100]; 
	count = 0;

	string name, size, color;
	int height;
	while (!fin.eof())
	{
		fin >> name >> size >> color >> height;
		hills[count++] = Hill(name, size, color, height);
	}
	fin.close();
}

void HillsFile::WriteHillsToFile(Hill* hills, int count)
{
	ofstream fout("C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Hills.txt");

	for (int i = 0; i < count; i++)
	{
		fout << hills[i].GetName() << " " << hills[i].GetSize() << " " << hills[i].GetColor() << " " << hills[i].GetHeight();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}