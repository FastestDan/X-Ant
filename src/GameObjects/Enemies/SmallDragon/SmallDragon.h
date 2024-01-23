//
// A class representing a small dragon in the map
// 

#ifndef XANT_GAMEOBJECTS_ENEMIES_SMALLDRAGON_H_
#define XANT_GAMEOBJECTS_ENEMIES_SMALLDRAGON_H_

#include "../Enemy.h"

class SmallDragon : public Enemy
{
public:
	SmallDragon(Dungeon &dungeon, int x, int y, int score, int exp);
	~SmallDragon();

	void levelUp();
};

#endif // XANT_GAMEOBJECTS_ENEMIES_SMALLDRAGON_H_