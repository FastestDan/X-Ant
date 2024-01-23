//
// A class representing a skeleton in the map
// 

#ifndef XANT_GAMEOBJECTS_ENEMIES_SKELETON_H_
#define XANT_GAMEOBJECTS_ENEMIES_SKELETON_H_

#include "../Enemy.h"

class Skeleton : public Enemy
{
public:
	Skeleton(Dungeon &dungeon, int x, int y, int score, int exp);
	~Skeleton();

	void levelUp();
};

#endif // XANT_GAMEOBJECTS_ENEMIES_SKELETON_H_