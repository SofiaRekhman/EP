#pragma once

#include"APoolsList.h"
#include"AHillsList.h"

#include"PoolsList.h"
#include"HillsList.h"

#include"PoolsTList.h"
#include"HillsTList.h"

class AListFactory
{
public:
	virtual APoolList* GetPoolList() = 0;
	virtual AHillList* GetHillList() = 0;
};

class InheritanceListFactory : public AListFactory
{
public:
	APoolList* GetPoolList()
	{
		return new PoolsList;
	}

	AHillList* GetHillList()
	{
		return new HillsList;
	}
};

class TemplatedListFactory : public AListFactory
{
public:
	APoolList* GetPoolList()
	{
		return new TemplatedLists::PoolList;
	}

	AHillList* GetHillList()
	{
		return new TemplatedLists::HillList;
	}
};

class ListFactoryProvider
{
public:
	AListFactory* GetListFactory()
	{

		return new InheritanceListFactory();
	}
};
