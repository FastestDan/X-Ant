//
// A class representing a troll in the map
// 

#ifndef XANT_GAMEOBJECTS_ENEMIES_TROLL_H_
#define XANT_GAMEOBJECTS_ENEMIES_TROLL_H_

#include "../Enemy.h"

class Troll : public Enemy
{
public:
	Troll(Dungeon &dungeon, int x, int y, int score, int exp);
	~Troll();

	void levelUp();
};

#endif // XANT_GAMEOBJECTS_ENEMIES_TROLL_H_