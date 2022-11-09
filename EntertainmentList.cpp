#include"EntertainmentList.h"
#include<iostream>
using namespace std;

EntertainmentList::EntertainmentList()
{
	current = 0;
	entertainments = new Entertainment * [1000];
}

EntertainmentList:: ~EntertainmentList()
{
	for (int i = 0; i < current; i++)
		delete entertainments[i];
	delete[] entertainments;
}

void EntertainmentList::Add(Entertainment* entertainment)
{
	entertainments[current] = entertainment;
	current++;
}

void EntertainmentList::WriteEntertainmentFromInputSize(string inputsize)
{
	int a = 0;
	for (int i = 0; i < current; i++)
	{
		if (entertainments[i]->GetSize() == inputsize)
		{
			entertainments[i]->WriteToConsole();
			a++;
		}
	}
	if (a == 0) cout << "There is no information about entertainment with this size yet" << endl;
	cout << endl;
}

void EntertainmentList::WriteAllToConsole() const
{
	for (int i = 0; i < current; i++)
	{
		entertainments[i]->WriteToConsole();
	}
}

