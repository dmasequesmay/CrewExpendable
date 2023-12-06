#ifndef __COMBAT_H__
#define __COMBAT_H__

#include <string>
#include "../header/Character.h"

using namespace std;

class Combat {

 public:
 	void attack(Character &, Character &);
   void block(Character &, Character &);
   void dodge(Character &, Character &); 
 };

#endif