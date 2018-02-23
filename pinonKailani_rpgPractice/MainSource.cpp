#include <iostream>
#include <string>
#include <vector>
#include "Actor.h"
#include "Inventory.h"
#include "Item.h"
using namespace std;
//#define FUNCTION_THINGY IntroMessage();

/* + + + Variables + + + */
extern Actor character01;
extern Actor character02;
Inventory itemInventory;

Actor character03;	//char3 object
Actor* ptrCharacter03 = &character03;

int responseOption;
/* + + + + + + + + + + + */

void IntroMessage() {
	//INTRO
	printf("Two combatants have entered the field.\n");
	printf("Enter the name of combatant ONE (you):\n");
	cin >> character01.characterName;

	cout << character01.characterName << " has arrived!" << endl;

	printf("Enter the name of combatant TWO (opponent):\n");
	cin >> character02.characterName;

	cout << character02.characterName << " has arrived!\n" << endl;
}

void StartingAttributes() {
	character01.maxHealth = 120;
	character02.maxHealth = 100;

	character01.currentHealth = character01.maxHealth;
	character02.currentHealth = character02.maxHealth;
	//check health
	//cout << character01.currentHealth << " , " << character02.currentHealth << endl;
}

void ResponseCheckHealth() {
	cout << character01.characterName << " (you) : " << character01.currentHealth << " / " << character01.maxHealth << " health remaining.\n";
	cout << character02.characterName << " (opponent) : " << character02.currentHealth << " / " << character02.maxHealth << " health remaining.\n\n";

}
void ResponseAttack(int damage) {
	cout << character01.characterName << " (you) " << " attack!" << endl;

	character02.TakeDamage(character02, damage);
	ResponseCheckHealth();
}

void ResponseCowerCringe() {
	printf("You cringe and cower at the blow! How pathetic!\n");
}

void ResponseCheckInventory() {
	itemInventory.InventoryItems();
	cout << itemInventory.myItem << endl;
}

//int main() {
//	//print Item ONE
////	itemInventory.InventoryItems();
//
////	ptrCharacter03.f();
//
//	IntroMessage();
//	StartingAttributes();
//	ResponseCheckHealth();
//
//	while (character01.currentHealth > 0 || character02.currentHealth > 0) {
//
//		printf("How should you respond?\n");
//		cout << "(1) ATTACK\n" << "(2) CRINGE & COWER\n" << "(3) CHECK INVENTORY\n" << "(4) CHECK HEALTH\n"<< endl;
//		cin >> responseOption;
//
//		cout << character02.characterName << " launches a attack!" << endl;
//		character01.TakeDamage(character01, 10);
//		ResponseCheckHealth();
//
//		if (!responseOption > 4 || !responseOption < 1) {
//			if (responseOption == 1) { 
//				printf("You retaliate!\n");
//				ResponseAttack(10); 
//			}
//			if (responseOption == 2) { 
//				ResponseCowerCringe(); 
//			}
//			if (responseOption == 3) { 
//				ResponseCheckInventory(); 
//			}
//			if (responseOption == 4) {
//				ResponseCheckHealth();
//			}
//		} else {
//			printf("END");
//			cin >> responseOption;
//		}
//		
//	}
//	system("Pause");
//}