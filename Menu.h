#pragma once
#pragma once
#include"PriceList.h"
#include"AHillsList.h"
#include"APoolsList.h"
#include"HillsTList.h"
#include"PoolsTList.h"
#include"Reading.h"

class Menu
{
	PriceList priceList;
	AHillList* hillsList;
	APoolList* poolsList;
	//TemplatedLists::PoolList poolsList;
	//TemplatedLists::HillList hillsList;
	Reading reading;
public:
	Menu();
	~Menu();

	void RereadHillsList();
	void RereadPoolsList();

	void NameMenu();
	void MainMenu();
	void ShowMenu();

	void UserMenu();
	void ShowUserMenu();
	void UserPriceMenu();
	void UserHillsMenu();
	void UserPoolsMenu();

	void handleShowAllPrices();

	void handleShowAllHills();

	void handleShowAllPools();
};