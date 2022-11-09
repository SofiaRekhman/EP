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

	void NameMenu();
	void MainMenu();
	void ShowMenu();

	void AdminMenu();
	void ShowAdminMenu();
	void AdminPriceMenu();
	void AdminHillsMenu();
	void AdminPoolsMenu();

	//void handleAddNewPrice();
	void handleAddNewWorkdayPrice();
	void handleAddNewWeekdayPrice();
	void handleShowAllPrices();

	void handleShowAllHills();
	void handleAddNewHills();

	void handleShowAllPools();
	void handleAddNewPools();
};