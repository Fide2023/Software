#include "GameObject.h"

GameObject::GameObject()
{
	this->name = "apple";
}

GameObject::~GameObject()
{
}

string GameObject::getName()
{
	return this->name;
}

void GameObject::listInteractionTypes()
{
}

void GameObject::startInteraction(string theInteractionType)
{
}

void GameObject::listCurrentInteractionOptions()
{
}

void GameObject::setCurrentInteractionOptions(string theOptions)
{
}

void GameObject::startCurrentInteraction()
{
}

void GameObject::abortCurrentInteraction()
{
}
