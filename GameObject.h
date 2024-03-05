#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
using namespace std;


class GameObject
{
private:
	string name;
public:
	GameObject();
	virtual ~GameObject();
	string getName();
	void listInteractionTypes();
	void startInteraction(string theInteractionType);
	void listCurrentInteractionOptions();
	void setCurrentInteractionOptions(string theOptions);
	void startCurrentInteraction();
	void abortCurrentInteraction();

};




#endif