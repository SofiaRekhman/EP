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
		<< "Admin\n";
}

void Menu::ShowMenu()
{
	NameMenu();
	MainMenu();
	ShowAdminMenu();

}

/*void Menu::handleAddNewPrice()
{
	Price tem;
	double cost;
	int time;
	string age, dayOfWeek;
	cout << endl << "Enter price details:\n" << "time: ";
	cin >> time;
	cout << "adult/child: "; cin >> age;
	cout << "workday/weekend: "; cin >> dayOfWeek;
	cout << "price: "; cin >> cost;
	cout << "duration: " << tem-time << endl;;

	try
	{
		Price price(time, age, dayOfWeek, cost, tem-time);
		priceList.Add(price);
		cout << "Price added successfully!" << endl;
	}
	catch (const char* err)
	{
		cout << "Price is not added!!" << endl << err << endl;
	}

	cout << endl;
}*/

void Menu::handleAddNewWorkdayPrice()
{
	PriceWorkday tem;
	double cost;
	int time;
	string age;
	string dayOfWeek = "workday";
	cout << endl << "Enter price details:\n" << "time: ";
	cin >> time;
	cout << "adult/child: "; cin >> age;
	cout << "workday/weekend: " << dayOfWeek << endl;;
	cout << "price: "; cin >> cost;
	cout << "duration: " << tem - time << endl;;

	try
	{
		PriceWorkday priceWorkday(time, age, dayOfWeek, cost, tem - time);
		priceList.Add(priceWorkday);
		cout << "Price added successfully!" << endl;
	}
	catch (const char* err)
	{
		cout << "Price is not added!!" << endl << err << endl;
	}

	cout << endl;
}

void Menu::handleAddNewWeekdayPrice()
{
	PriceWeekday tem;
	double cost;
	double tempcost;
	int time;
	string age;
	string dayOfWeek = "weekday";
	string holiday;
	cout << endl << "Enter price details:\n" << "time: ";
	cin >> time;
	cout << "adult/child: "; cin >> age;
	cout << "workday/weekend: " << dayOfWeek << endl;
	cout << "price: "; cin >> tempcost;
	cout << "if it's holiday? "; cin >> holiday;
	if (holiday == "yes") cost = tempcost * 1.5;
	else if (holiday == "no") cost = tempcost;
	cout << "duration: " << tem - time << endl;

	try
	{
		PriceWeekday priceWeekday(time, age, dayOfWeek, cost, tem - time);
		priceList.Add(priceWeekday);
		cout << "Price added successfully!" << endl;
	}
	catch (const char* err)
	{
		cout << "Price is not added!!" << endl << err << endl;
	}

	cout << endl;
}

void Menu::handleShowAllPrices()
{
	cout << "All prices:\n";

	priceList.WriteAllToConsole();
	cout << endl;
}

void Menu::handleAddNewHills()
{
	string name, size, color;
	double height;
	cout << endl << "Enter hill details:\n" << "name:\n";
	cin >> name;
	cout << "size:\n"; cin >> size;
	cout << "color:\n"; cin >> color;
	cout << "height:\n"; cin >> height;

	try
	{
		Hill hill(name, size, color, height);
		hillsList->Add(hill);
		//hillsList.Add(hill);
		cout << "Hill added successfully!" << endl;
	}
	catch (const char* err)
	{
		cout << "Hill is not added!!" << endl << err << endl;
	}

	cout << endl;
}

void Menu::handleShowAllHills()
{
	cout << "All Hills:\n";

	hillsList->WriteAllToConsole();
	//hillsList.WriteAllToConsole();
	cout << endl;
}

void Menu::handleAddNewPools()
{
	string name, size;
	double height;
	cout << endl << "Enter pool details:\n" << "name:\n";
	cin >> name;
	cout << "size:\n"; cin >> size;
	cout << "height:\n"; cin >> height;

	try
	{
		Pool pool(name, size, height);
		poolsList->Add(pool);
		//poolsList.Add(pool);
		cout << "Pool added successfully!" << endl;
	}
	catch (const char* err)
	{
		cout << "Pool is not added!!" << endl << err << endl;
	}

	cout << endl;
}

void Menu::handleShowAllPools()
{
	cout << "All Pools:\n";

	poolsList->WriteAllToConsole();
	//poolsList.WriteAllToConsole();
	cout << endl;
}

void Menu::AdminMenu()
{
	cout << "1.Price\n"
		<< "2.Hills\n"
		<< "3.Pools\n"
		<< "4.Vacancy\n"
		<< "0.Return to the main menu\n" << endl;
}

void Menu::AdminPriceMenu()
{

	char input;
	do
	{
		cout << "1.All list\n"
			"2.Add new\n"
			"0.Back\n";
		cin >> input;
		if (input == '1')
		{
			handleShowAllPrices();
			continue;
		}
		if (input == '2')
		{
			cout << "1.Workday\n"
				"2.Weekday\n"
				"0.Back\n";
			cin >> input;
			if (input == '1')
			{
				handleAddNewWorkdayPrice();
				continue;
			}
			if (input == '2')
			{
				handleAddNewWeekdayPrice();
				continue;
			}
			continue;
		}
	} while (input != '0');
}

void Menu::AdminHillsMenu()
{

	char input;
	do
	{
		cout << "1.All list\n"
			"2.Add new\n"
			"0.Back\n";
		cin >> input;
		if (input == '0')
		{
			AdminMenu();
			return;
		}
		if (input == '1')
		{
			handleShowAllHills();
			continue;
		}
		if (input == '2')
		{
			handleAddNewHills();
			continue;
		}
	} while (input == '0');
}

void Menu::AdminPoolsMenu()
{

	char input;
	do
	{
		cout << "1.All list\n"
			"2.Add new\n"
			"0.Back\n";
		cin >> input;
		if (input == '0')
		{
			//AdminMenu();
			return;
		}
		if (input == '1')
		{
			handleShowAllPools();
			continue;
		}
		if (input == '2')
		{
			handleAddNewPools();
			continue;
		}
	} while (input == '0');
}

void Menu::ShowAdminMenu()
{
	char input;
	do
	{
		AdminMenu();
		cin >> input;
		if (input == '0')
		{
			MainMenu();
			return;
		}
		if (input == '1')
		{
			AdminPriceMenu();
			continue;
		}
		if (input == '2')
		{
			AdminHillsMenu();
			continue;
		}
		if (input == '3')
		{
			AdminPoolsMenu();
			continue;
		}
		if (input == '4')
		{
			reading / "C:\\Users\\ой\\source\\repos\\Aquapark\\Aquapark\\Vacancy.txt";
			continue;
		}
	} while (input != '0');
}