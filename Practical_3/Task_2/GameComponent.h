#ifndef GAMECOMPONENT_H
#define GAMECOMPONENT_H

#include "Engine.h"
class GameComponent
{
private:
    Engine* engine;
public:
    GameComponent();
    virtual ~GameComponent();
    virtual void queryGameComponent() = 0;
    virtual void updateGameComponent() = 0;
};

#endif