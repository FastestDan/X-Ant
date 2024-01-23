//
// A class representing a door in the map
// 

#ifndef XANT_GAMEOBJECTS_DOOR_H_
#define XANT_GAMEOBJECTS_DOOR_H_

#include "../../GameObject.h"

class Door : public GameObject
{
public:
	Door();
	~Door();

	void open();
};

#endif // XANT_GAMEOBJECTS_DOOR_H_