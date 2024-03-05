#include "GameObjectRepository.h"

GameObjectRepository::GameObjectRepository()
{
}

GameObjectRepository::~GameObjectRepository()
{
}

GameObject GameObjectRepository::getGameObject(string gameElementName)
{
    return objectInventory[0];
}
