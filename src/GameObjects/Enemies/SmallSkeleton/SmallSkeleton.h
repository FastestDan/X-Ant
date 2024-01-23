//
// A class representing a small skeleton in the map
// 

#ifndef XANT_GAMEOBJECTS_ENEMIES_SMALLSKELETON_H_
#define XANT_GAMEOBJECTS_ENEMIES_SMALLSKELETON_H_

#include "../Enemy.h"

class SmallSkeleton : public Enemy
{
public:
	SmallSkeleton(Dungeon &dungeon, int x, int y, int score, int exp);
	~SmallSkeleton();

	void levelUp();
};

#endif // XANT_GAMEOBJECTS_ENEMIES_SMALLSKELETON_H_