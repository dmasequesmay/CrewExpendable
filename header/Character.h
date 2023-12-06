#include <string>

using namespace std;

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

enum CharacterType {PLAYER, ALIEN};

const double MAX_HEALTH = 100.0;

class Character {
 protected:
	CharacterType type;
	string name;
	double health;
	double attackDamage;

 public:
 	Character(CharacterType type, const string &name, double health, double attackDamage);
 	CharacterType getType() const;
 	const string & getName() const;
	//Returns the whole number of the health value (static_cast to int)
 	int getHealth() const;
    //Returns the whole number of the attack damage value (static_cast to int)
	int getAttackDamage() const;
	//Reduces health value by amount passed in
 	void damage(double d);
	//Returns true if getHealth() returns an integer greather than 0, otherwise force
 	bool isAlive() const;
 };

#endif