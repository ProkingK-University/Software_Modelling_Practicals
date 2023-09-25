#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "Engine.h"

class GameEngine : public Engine
{
public:
    GameEngine() {}
    virtual ~GameEngine() {}
    virtual void notify(GameComponent* sender, std::string message) {std::cout << message;}
};

#endif