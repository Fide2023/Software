#ifndef GAME_H
#define GAME_H
#include <string>
#include "Scene.h"
#include "GameObjectRepository.h"
#include "GameObject.h"
using namespace std;

class Game
{
private:
	GameObjectRepository myGameObjects[10];
	Scene currentScene;
	Scene playerInventory;
public:
	Game();
	virtual ~Game();
	void selectGameObject(string name);
	void selectInteraction(GameObject theGameObject, string theInteraction);
	void setInteractionOptions(string theOptions);
	void startInteraction();
	void abortInteraction();

};



#endif