// #include "Bank.h"
#include "BreadthFirstIterator.h"
#include "DepthFirstIterator.h"
// #include "EliminateTrapResearch.h"
// #include "Enemy.h"
// #include "Engine.h"
// #include "GameComponent.h"
// #include "GameEngine.h"
#include "Lair.h"
#include "LairIterator.h"
#include "LairPlayground.h"
// #include "Mage.h"
// #include "PlayerInteraction.h"
// #include "ResearchLaboratory.h"
// #include "SlowDownTrapResearch.h"
// #include "StoryTeller.h"
// #include "TeleportTrapResearch.h"
#include "Tile.h"
// #include "Warrior.h"


void testingIteratorDesignPatternOnItsOwn();

int main()
{
    testingIteratorDesignPatternOnItsOwn();
    return 0;
}

void testingIteratorDesignPatternOnItsOwn()
{
    Lair* playGround = new LairPlayground();
    playGround->randomlyGenerateLair();
    playGround->displayLair();
}
