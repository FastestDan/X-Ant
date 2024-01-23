//
// The AntWarrior race
// 

#ifndef XANT_GAMEOBJECTS_PLAYER_ANT_H_
#define XANT_GAMEOBJECTS_PLAYER_ANT_H_

#include "../Player.h"

class AntWarrior : public Player
{
public:
	AntWarrior(Dungeon &dungeon);
	~AntWarrior();

private:
	void levelUp();
	void draw(WINDOW *win);
};

#endif // XANT_GAMEOBJECTS_PLAYER_ANT_H_