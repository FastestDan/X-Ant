//
// A class representing a goblin in the map
// 

#ifndef XANT
#define XANT

#include "../Enemy.h"

class Goblin : public Enemy
{
public:
	Goblin(Dungeon &dungeon, int x, int y, int score, int exp);
	~Goblin();

	void levelUp();
};

#endif // XANT