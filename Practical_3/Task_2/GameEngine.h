#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Engine.h"
class GameEngine : public Engine
{
public:
    GameEngine();
    ~GameEngine();
    void notify(GameComponent* component);
};

#endif