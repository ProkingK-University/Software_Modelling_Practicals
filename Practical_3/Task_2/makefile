ofiles = AddTrapCommand.o Bank.o BreadthFirstIterator.o CreateTileCommand.o DepthFirstIterator.o KillHeroTrap.o LairPlayground.o main.o PlayerInteraction.o RemoveTileCommand.o ResearchNewTrapCommand.o SlowDownTrap.o StoryTeller.o TeleportTrap.o Tile.o Trap.o ViewCurrentWealthCommand.o Warrior.o
flags = g++ -std=c++11 -c -g

output: $(ofiles)
	g++ -o output $(ofiles)

$(ofiles): AddTrapCommand.h Bank.h BreadthFirstIterator.h Command.h CreateTileCommand.h DepthFirstIterator.h Engine.h GameComponent.h GameEngine.h Hero.h KillHeroTrap.h Lair.h LairIterator.h LairPlayground.h PlayerInteraction.h RemoveTileCommand.h ResearchNewTrapCommand.h SlowDownTrap.h StoryTeller.h TeleportTrap.h Tile.h Trap.h ViewCurrentWealthCommand.h Warrior.h

AddTrapCommand.o: AddTrapCommand.cpp
	$(flags) AddTrapCommand.cpp

Bank.o: Bank.cpp
	$(flags) Bank.cpp

BreadthFirstIterator.o: BreadthFirstIterator.cpp
	$(flags) BreadthFirstIterator.cpp

CreateTileCommand.o: CreateTileCommand.cpp
	$(flags) CreateTileCommand.cpp

DepthFirstIterator.o: DepthFirstIterator.cpp
	$(flags) DepthFirstIterator.cpp

KillHeroTrap.o: KillHeroTrap.cpp
	$(flags) KillHeroTrap.cpp

LairPlayground.o: LairPlayground.cpp
	$(flags) LairPlayground.cpp

main.o: main.cpp
	$(flags) main.cpp

PlayerInteraction.o: PlayerInteraction.cpp
	$(flags) PlayerInteraction.cpp

RemoveTileCommand.o: RemoveTileCommand.cpp
	$(flags) RemoveTileCommand.cpp

ResearchNewTrapCommand.o: ResearchNewTrapCommand.cpp
	$(flags) ResearchNewTrapCommand.cpp

SlowDownTrap.o: SlowDownTrap.cpp
	$(flags) SlowDownTrap.cpp

StoryTeller.o: StoryTeller.cpp
	$(flags) StoryTeller.cpp

TeleportTrap.o: TeleportTrap.cpp
	$(flags) TeleportTrap.cpp

Tile.o: Tile.cpp
	$(flags) Tile.cpp

Trap.o: Trap.cpp
	$(flags) Trap.cpp

ViewCurrentWealthCommand.o: ViewCurrentWealthCommand.cpp
	$(flags) ViewCurrentWealthCommand.cpp

Warrior.o: Warrior.cpp
	$(flags) Warrior.cpp

make:

run:
	./output

runv:
	valgrind --leak-check=full ./output

clean:
	rm -f *.o output
