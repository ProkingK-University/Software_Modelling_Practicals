#ifndef ENGINE_H
#define ENGINE_H

#include <vector>

#include "GameComponent.h"

class Engine
{
private:
    std::vector<GameComponent*> components;

public:
    Engine();
    ~Engine();
    virtual void notify(GameComponent* component) = 0;
};

#endif