#include"HillsList.h"
#include"HillsFile.h"
#include<iostream>
using namespace std;
//using namespace InheritanceLists;
HillsList::HillsList()
{
	Hill** hills;
	HillsFile::ReadHillsFromFile(hills, current);
	entertainments = (Entertainment**)hills;
}

HillsList:: ~HillsList()
{
	//HillsFile::WriteHillsToFile((Hill**)entertainments, current);
}

void HillsList::Add(Hill& hill)
{
	EntertainmentList::Add(new Hill(hill));
	HillsFile::WriteHillsToFile((Hill**)entertainments, current);
}

void HillsList::WriteHillsFromInputSize(string inputsize)
{

	WriteEntertainmentFromInputSize(inputsize);
}

void HillsList::WriteAllToConsole() const
{
	EntertainmentList::WriteAllToConsole();
}
