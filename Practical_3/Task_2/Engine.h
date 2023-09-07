#ifndef ENGINE_H
#define ENGINE_H

#include <vector>

#include "GameComponent.h"

class Engine
{
private:
    std::vector<GameComponent> components;

public:
    Engine();

    void notify(GameComponent *component);

    ~Engine();
};

#endif