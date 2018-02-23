#include <iostream>
#include <string>
using namespace std;

#include "Actor.h"

/* + + + Variables + + + */
	Actor character01;
	Actor character02;
/* + + + + + + + + + + + */

void Actor::TakeDamage(Actor name, int damage) {
//	printf("TAKE DMG executed\n");
	currentHealth -= damage;
	cout << name.characterName << " receives " << damage << " damage!" << endl;

}

void Actor::GiveDamage(Actor*) {
//	printf("GIVE DMG executed\n");
}

Actor::Actor(){

}


Actor::~Actor(){

}
