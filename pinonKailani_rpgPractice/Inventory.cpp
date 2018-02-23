#include "Inventory.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


Inventory::Inventory(){
	
}

Inventory::~Inventory(){

}

void Inventory::InventoryItems() {
	int itemIndex = 2;
	const char* name[] = {"item01", "item02", "item03"};
	string myItem = name[itemIndex];
	printf("You check your inventory\n");
}
	//struct Person {
	//	int health;
	//	int damage;
	//};

	//Person person;
	//Person *personPtr = &person;

	//person.health = 0;

	//(*personPtr).health = 0;
	//personPtr->health = 0;
	
	//This is how you create array on stack...
	//const char name[] = { 'u', 'j', 'i' };

	//This is how you creat a variable to store a memory address...
	//const char *name;

	//How you create array or memory chunk on heap,
	//	returns memory address of array/chunk... 
	//char *name = (char*)malloc(3);
