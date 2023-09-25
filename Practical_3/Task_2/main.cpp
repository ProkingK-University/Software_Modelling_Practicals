#include <iostream>
#include "Tile.h"
#include "LairPlayground.h"
#include "StoryTeller.h"
#include "PlayerInteraction.h"
#include "CreateTileCommand.h"
#include "AddTrapCommand.h"
#include "RemoveTileCommand.h"
#include "ResearchNewTrapCommand.h"
#include "ViewCurrentWealthCommand.h"
#include "TeleportTrap.h"
#include "KillHeroTrap.h"
#include "SlowDownTrap.h"
#include "Engine.h"
#include "GameEngine.h"
#include "Warrior.h"

void testingIteratorPattern();
void testingCommandAndMediatorPattern();

int main() 
{
    // testingIteratorPattern();
    testingCommandAndMediatorPattern();
    // testingMediatorPattern();
    return 0;
}

void testingIteratorPattern()
{
    Lair* lairPlayground = new LairPlayground();

    std::vector<Tile*> tiles;
    for (int i = 0; i < 25; i++) {
        Tile* tile = new Tile(i % 5, i / 5);
        lairPlayground->addTile(tile);
        tiles.push_back(tile);
    }

    std::cout << "All Tiles:" << std::endl;
    for (int i = 0; i < tiles.size(); i++) 
    {
        std::cout << "Tile[" << i << "]\t[" << tiles[i]->getXCoord() << "," << tiles[i]->getYCoord() << "]\n";
    }

    // Add edges between adjacent Tiles
    for (int i = 0; i < 25; i++) {
        Tile* currentTile = tiles[i];
        int x = currentTile->getXCoord();
        int y = currentTile->getYCoord();

        // Connect to the right neighbor if it exists
        if (x < 4) {
            Tile* rightNeighbor = tiles[i + 1];
            lairPlayground->addEdge(currentTile, rightNeighbor);
        }

        // Connect to the bottom neighbor if it exists
        if (y < 4) {
            Tile* bottomNeighbor = tiles[i + 5];
            lairPlayground->addEdge(currentTile, bottomNeighbor);
        }
    }

    StoryTeller storyteller(lairPlayground);

    // Create BreadthFirstIterator and DepthFirstIterator
    LairIterator* bfsIterator = lairPlayground->createIterator(true, tiles[0]); // Starting from the first tile
    LairIterator* dfsIterator = lairPlayground->createIterator(false, tiles[0]); // Starting from the first tile

    // Perform Breadth-First traversal
    std::cout << "Breadth-First Traversal:" << std::endl;
    storyteller.traversal(bfsIterator);

    // Perform Depth-First traversal
    std::cout << "\nDepth-First Traversal:" << std::endl;
    storyteller.traversal(dfsIterator);

    // Remove some tiles from the Lair
    lairPlayground->removeTile(tiles[1]);
    lairPlayground->removeTile(tiles[6]);
    lairPlayground->removeTile(tiles[18]);

    // Create BreadthFirstIterator and DepthFirstIterator again
    bfsIterator = lairPlayground->createIterator(true, tiles[0]);
    dfsIterator = lairPlayground->createIterator(false, tiles[0]);

    // Perform Breadth-First traversal after removing tiles
    std::cout << "\nBreadth-First Traversal after removing tiles:" << std::endl;
    storyteller.traversal(bfsIterator);

    // Perform Depth-First traversal after removing tiles
    std::cout << "\nDepth-First Traversal after removing tiles:" << std::endl;
    storyteller.traversal(dfsIterator);

    // Add some new tiles to the Lair
    Tile* newTile1 = new Tile(4, 5);
    Tile* newTile2 = new Tile(3, -1);
    lairPlayground->addTile(newTile1);
    lairPlayground->addTile(newTile2);

    // Create BreadthFirstIterator and DepthFirstIterator again
    bfsIterator = lairPlayground->createIterator(true, tiles[0]);
    dfsIterator = lairPlayground->createIterator(false, tiles[0]);

    // Perform Breadth-First traversal after adding new tiles
    std::cout << "\nBreadth-First Traversal after adding new tiles:" << std::endl;
    storyteller.traversal(bfsIterator);

    // Perform Depth-First traversal after adding new tiles
    std::cout << "\nDepth-First Traversal after adding new tiles:" << std::endl;
    storyteller.traversal(dfsIterator);

    // Clean up - delete tiles
    for (Tile* tile : tiles) {
        delete tile;
    }
    delete newTile1;
    delete newTile2;
}

// void testingCommandPattern()
// {
//    // Create receiver objects as pointers
//     Lair* lairPlayground = new LairPlayground();
//     Tile* tiles[25];
//     Bank* bank = new Bank(nullptr, 500);
//     Trap* trap = new KillHeroTrap(nullptr, nullptr, bank, 100, 100, 2);

//     CreateTileCommand* createTileCommands[25];
//     for (int i = 0; i < 25; ++i) {
//         tiles[i] = new Tile(i % 5, i / 5);
//         createTileCommands[i] = new CreateTileCommand(lairPlayground, tiles[i]); // Create a command for each Tile
//     }

//     RemoveTileCommand removeTileCommand(lairPlayground, tiles[0]);
//     AddTrapCommand addTrapCommand(lairPlayground, tiles[1], trap);
//     ViewCurrentWealthCommand viewWealthCommand(bank);
//     ResearchNewTrapCommand researchTrapCommand(trap, bank);

//     PlayerInteraction* playerInteraction = new PlayerInteraction(nullptr);

//     playerInteraction->assignCommandToButton(&addTrapCommand);
//     playerInteraction->assignCommandToButton(createTileCommands[0]); 
//     playerInteraction->assignCommandToButton(&removeTileCommand);
//     playerInteraction->assignCommandToButton(&viewWealthCommand);
//     playerInteraction->assignCommandToButton(&researchTrapCommand);

//     // Simulate button presses for the first Tile
//     playerInteraction->addTrapButtonPushed();
//     playerInteraction->createTileButtonPushed();
//     playerInteraction->removeTileButtonPushed();
//     playerInteraction->viewCurrentWealthButtonPushed();
//     playerInteraction->researchTrapButtonPushed();

//     // Cleanup: Delete dynamically allocated objects
//     delete lairPlayground;
//     for (int i = 0; i < 25; ++i) {
//         delete tiles[i];
//     }
//     delete trap;
//     delete bank;
//     delete playerInteraction;

// }

void testingCommandAndMediatorPattern()
{
    Engine* engine = new GameEngine();
    Lair* lairPlayground = new LairPlayground();
    int numberOfTiles = 25;
    int numberOfTraps = 3;
    std::vector<Tile*> tiles;
    for (int i = 0; i < numberOfTiles; i++) {
        Tile* tile = new Tile(i % 5, i / 5);
        tiles.push_back(tile);
    }

    // Create a Bank instance
    Bank* bank = new Bank(engine, 5000);
    GameComponent* bankComponent = bank;

    // Create some traps
    Trap** traps = new Trap*[3];
    traps[0] = new TeleportTrap(engine, nullptr, bank, 0, 0, 20, 1);
    GameComponent* teleportTrapComponent = traps[0];
    traps[1] = new SlowDownTrap(engine, nullptr, bank, 3, 60, 2);
    GameComponent* slowDownTrapComponent = traps[1];
    traps[2] = new KillHeroTrap(engine, nullptr, bank, 100, 100, 3);
    GameComponent* killHeroTrapComponent = traps[2];

    // Create a PlayerInteraction instance
    PlayerInteraction* playerInteraction = new PlayerInteraction(engine);

    // Create some commands
    Command** createTileCommand = new Command*[numberOfTiles];
    Command** removeTileCommand = new Command*[numberOfTiles];
    for (int i = 0; i < numberOfTiles; i++)
    {
        createTileCommand[i] = new CreateTileCommand(lairPlayground, tiles[i]);
        removeTileCommand[i] = new RemoveTileCommand(lairPlayground, tiles[i]);
    }
    Command* viewWealthCommand = new ViewCurrentWealthCommand(bank);

    Command** researchTrapCommand = new Command*[numberOfTraps];
    researchTrapCommand[0] = new ResearchNewTrapCommand(traps[0], bank, traps[0]->getResearchCost(), traps[0]->getResearchTime());
    researchTrapCommand[1] = new ResearchNewTrapCommand(traps[1], bank, traps[1]->getResearchCost(), traps[1]->getResearchTime());
    researchTrapCommand[2] = new ResearchNewTrapCommand(traps[2], bank, traps[2]->getResearchCost(), traps[2]->getResearchTime());

    Command*** addTrapCommand = new Command**[numberOfTiles];
    for (int i = 0; i < numberOfTraps; i++)
    {
        addTrapCommand[i] = new Command*[numberOfTiles];
        for (int j = 0; j < numberOfTiles; j++)
        {
            addTrapCommand[i][j] = new AddTrapCommand(lairPlayground, tiles[j], traps[i]);
        }
    }

    playerInteraction->assignCommandToButton(viewWealthCommand);

    for (int i = 0; i < numberOfTiles; i++)
    {
        playerInteraction->assignCommandToButton(createTileCommand[i]);
        playerInteraction->createTileButtonPushed();
        playerInteraction->removeCommandFromButton(1);
    }

    for (int i = 0; i < 6; i++)
    {
        int randomIndex1 = rand() % 3;
        int randomIndex2 = rand() % 25;
        playerInteraction->assignCommandToButton(researchTrapCommand[randomIndex1]);
        playerInteraction->researchTrapButtonPushed();
        playerInteraction->removeCommandFromButton(1);
        playerInteraction->viewCurrentWealthButtonPushed();
        playerInteraction->assignCommandToButton(addTrapCommand[randomIndex1][0]);
        playerInteraction->addTrapButtonPushed();
        playerInteraction->removeCommandFromButton(1);
    }
    
    for (int i = 0; i < numberOfTiles; i++)
    {
        playerInteraction->assignCommandToButton(removeTileCommand[i]);
        playerInteraction->removeTileButtonPushed();
        playerInteraction->removeCommandFromButton(1);
    }

    // Create a Hero instance
    Hero* hero = new Warrior("Warrior", 1, 0,0,100);

    // Create a StoryTeller instance
    StoryTeller* storyTeller = new StoryTeller(lairPlayground);

    // Display the story
    // LairIterator* iterator = lairPlayground->createIterator(true, tile1); // You can change the iterator type as needed
    // storyTeller->traversal(iterator);

   
}