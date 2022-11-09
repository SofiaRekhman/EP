#include"Menu.h"
#include"Price.h"
#include"PriceWorkday.h"
#include"PriceWeekday.h"
#include"Pools.h"
#include"Hills.h"
#include"Reading.h"
#include"Name.h"
#include"Factory.h"
#include<iostream>
using namespace std;

Menu::Menu()
{
	ListFactoryProvider factoryProvider;
	AListFactory* listFactory = factoryProvider.GetListFactory();

	poolsList = listFactory->GetPoolList();
	hillsList = listFactory->GetHillList();
}

void Menu::RereadPoolsList()
{
	ListFactoryProvider factoryProvider;
	AListFactory* listFactory = factoryProvider.GetListFactory();

	poolsList = listFactory->GetPoolList();
}

void Menu:: RereadHillsList()
{
	ListFactoryProvider factoryProvider;
	AListFactory* listFactory = factoryProvider.GetListFactory();

	hillsList = listFactory->GetHillList();
}

Menu::~Menu()
{
	delete poolsList;
	delete hillsList;
}

void Menu::NameMenu()
{
	Name person;
	cin >> person;
	cout << person;
}

void Menu::MainMenu()
{
	cout << "Aquapark 'Happy Day'\n"
		<< "User\n";
}

void Menu::ShowMenu()
{
	NameMenu();
	MainMenu();
	ShowUserMenu();
}


void Menu::handleShowAllPrices()
{
	cout << "All prices:\n";

	priceList.WriteAllToConsole();
	cout << endl;
}

void Menu::handleShowAllHills()
{

	cout << "All Hills:\n";

	hillsList->WriteAllToConsole();
	//hillsList.WriteAllToConsole();
	cout << endl;
}

void Menu::handleShowAllPools()
{

	cout << "All Pools:\n";

	poolsList->WriteAllToConsole();
	//poolsList.WriteAllToConsole();
	cout << endl;
}

void Menu::UserMenu()
{
	cout << "1.Price\n"
		<< "2.Hills\n"
		<< "3.Pools\n"
		<< "4.WARNING!\n"
		<< "0.Return to the main menu\n" << endl;
}

void Menu::UserPriceMenu()
{

	char input;
	do
	{
		cout << "1.All price\n"
			"2.The highest price\n"
			"3.The lowest price\n"
			"4.Search by day of the week\n"
			"5.Search by time\n"
			"0.Back\n" << endl;
		cin >> input;
		if (input == '0')
		{
			return;
		}
		if (input == '1')
		{
			handleShowAllPrices();
			cout << endl;
			continue;
		}
		if (input == '2')
		{
			priceList.WriteTheHighestPrice();
			continue;
		}
		if (input == '3')
		{
			priceList.WriteTheLowestPrice();
			continue;
		}
		if (input == '4')
		{
			string day;
			cout << "Ented workday/weekend: ";
			cin >> day;
			priceList.WritePriceFromInputDayOfWeek(day);
			continue;
		}
		if (input == '5')
		{
			double time;
			cout << "Ented time: ";
			cin >> time;
			priceList.WritePriceFromInputTime(time);
			continue;
		}
	} while (input != '0');
}

void Menu::UserHillsMenu()
{

	char input;
	do
	{
		cout << "1.All hills\n"
			"2.Search by size\n"
			"0.Back\n" << endl;
		cin >> input;
		if (input == '0')
		{
			return;
		}
		if (input == '1')
		{
			RereadHillsList();
			handleShowAllHills();
			cout << endl;
			continue;
		}
		if (input == '2')
		{
			RereadHillsList();
			string size;
			cout << "Enter size: ";
			cin >> size;
			hillsList->WriteHillsFromInputSize(size);
			//hillsList.WriteHillsFromInputSize(size);
			continue;
		}

	} while (input != '0');

}

void Menu::UserPoolsMenu()
{

	char input;
	do
	{
		cout << "1.All pools\n"
			"2.Search by size\n"
			"0.Back\n" << endl;
		cin >> input;
		if (input == '0')
		{
			return;
		}
		if (input == '1')
		{
			RereadPoolsList();
			handleShowAllPools();
			cout << endl;
			continue;
		}
		if (input == '2')
		{
			RereadPoolsList();
			string size;
			cout << "Enter size: ";
			cin >> size;
			poolsList->WritePoolsFromInputSize(size);
			//poolsList.WritePoolsFromInputSize(size);
			continue;
		}

	} while (input != '0');

}

void Menu::ShowUserMenu()
{
	char input;

	do
	{
		UserMenu();
		cin >> input;
		if (input == '0')
		{
			//MainMenu();
			return;
		}
		if (input == '1')
		{
			UserPriceMenu();
			continue;
		}
		if (input == '2')
		{
			UserHillsMenu();
			continue;
		}
		if (input == '3')
		{
			UserPoolsMenu();
			continue;
		}
		if (input == '4')
		{
			reading / "C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\WARNING.txt";
			continue;
		}

	} while (input != '0');
}