#include"Reading.h"
#include<fstream>
#include<iostream>
using namespace std;

void Reading::operator/(const char* nameFile) {
	ifstream fin(nameFile);
	char word;
	while (!fin.eof())
	{
		fin >> word;
		if (word == '_')
		{
			cout << " ";
		}
		else if (word == '!' || word == '.')
		{
			cout << "\n";
		}
		else cout << word;
	}
	fin.close();
}