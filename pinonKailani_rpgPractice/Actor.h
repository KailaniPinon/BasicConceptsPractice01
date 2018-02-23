#pragma once

class Actor {
public:
	Actor();
	~Actor();
	std::string characterName;

	int maxHealth;
	int currentHealth;

	virtual void TakeDamage(Actor name, int damage);
	void GiveDamage(Actor*);

private:


};

