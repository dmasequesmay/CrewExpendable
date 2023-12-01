#ifndef __COMBAT_H__
#define __COMBAT_H__

#include <string>
#include "../lib/Character.h"

using namespace std;

class Combat {

 public:
 	void attack(Character &, Character &);
    void block(Character &, Character &);
 };

#endif