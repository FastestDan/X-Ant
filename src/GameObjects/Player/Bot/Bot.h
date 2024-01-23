//
// The Bot race
// 

#ifndef XANT_GAMEOBJECTS_PLAYER_BOT_H_
#define XANT_GAMEOBJECTS_PLAYER_BOT_H_

#include "../Player.h"

class Bot : public Player
{
public:
	Bot(Dungeon &dungeon);
	~Bot();

private:
	void levelUp();
	void draw(WINDOW *win);
};

#endif // XANT_GAMEOBJECTS_PLAYER_BOT_H_