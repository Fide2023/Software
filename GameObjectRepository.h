#ifndef GAMEOBJECTREPOSITORY_H
#define GAMEOBJECTREPOSITORY_H
#include <string>
#include "GameObject.h"
using namespace std;

class GameObjectRepository
{
private:
	GameObject objectInventory[10];
public:
	GameObjectRepository();
	virtual ~GameObjectRepository();
	GameObject getGameObject(string gameElementName);

};



#endif