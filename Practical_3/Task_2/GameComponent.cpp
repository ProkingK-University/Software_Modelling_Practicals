#include "GameComponent.h"

GameComponent::GameComponent() 
{
    engine = nullptr;
}

GameComponent::~GameComponent()
{
    delete engine;
    engine = nullptr;
}


