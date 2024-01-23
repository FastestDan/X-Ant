//
// The Craussie race
// 

#ifndef XANT_GAMEOBJECTS_PLAYER_CRAUSSIE_H_
#define XANT_GAMEOBJECTS_PLAYER_CRAUSSIE_H_

#include "../Player.h"

class Craussie : public Player
{
public:
	Craussie(Dungeon &dungeon);
	~Craussie();

private:
	void levelUp();
	void draw(WINDOW *win);
};

#endif // XANT_GAMEOBJECTS_PLAYER_CRAUSSIE_H_