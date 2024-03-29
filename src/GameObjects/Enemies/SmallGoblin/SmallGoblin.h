//
// A class representing a small goblin in the map
// 

#ifndef XANT_GAMEOBJECTS_ENEMIES_SMALLGOBLIN_H_
#define XANT_GAMEOBJECTS_ENEMIES_SMALLGOBLIN_H_

#include "../Enemy.h"

class SmallGoblin : public Enemy
{
public:
	SmallGoblin(Dungeon &dungeon, int x, int y, int score, int exp);
	~SmallGoblin();

	void levelUp();
};

#endif // XANT_GAMEOBJECTS_ENEMIES_SMALLGOBLIN_H_