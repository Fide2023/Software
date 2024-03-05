#ifndef SCENE_H
#define SCENE_H
#include <string>
using namespace std;


class Scene
{
public:
	Scene();
	virtual ~Scene();
	void listAvailableElements();
	bool isAvailable(string gameElementName);
	bool isGameObject(string gameElementName);
};



#endif