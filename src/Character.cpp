#include <iostream>

#include "../header/Character.h"

using namespace std;

Character::Character (CharacterType type, const string &name, double health, double stamina, double attackDamage) 
    :type(type), name(name), health(health), stamina(stamina), attackDamage(attackDamage)
{}

CharacterType Character::getType() const {
    return type;
}

const string & Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return static_cast<int>(health);
}

int Character::getStamina() const {
    return static_cast<int>(stamina);
}

int Character::getAttackDamage() const {
    return static_cast<int>(attackDamage);
}

void Character::damage(double d) {
    health -= d;
}

bool Character::isAlive() const {
    if (getHealth() > 0) {
        return true;
    }
    else {
        return false;
    }
}