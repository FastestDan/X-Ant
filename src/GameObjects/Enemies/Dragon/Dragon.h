//
// A class representing a dragon in the map
// 

#ifndef XANT
#define XANT

#include "../Enemy.h"

class Dragon : public Enemy
{
public:
	Dragon(Dungeon &dungeon, int x, int y, int score, int exp);
	~Dragon();

	void levelUp();
};

#endif // XANT