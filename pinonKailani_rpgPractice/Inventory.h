#pragma once
#include <vector>
#include <string>
class Inventory
{
public:
	Inventory();
	~Inventory();

	std::vector<int> items;		//empty vector of ints
	char *name;
	int itemIndex;
	std::string myItem;
	void InventoryItems();

private:


};

