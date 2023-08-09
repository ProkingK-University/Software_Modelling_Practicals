#include <stack>
#include "CargoShip.h"
#include "MilitaryShip.h"

void testShips();
void testMemento();
void testPrototype();

int main()
{
    testShips();
    testMemento();

    return 0;
}

void testShips()
{
    std::cout << "======================= Test Cargo Ship =======================" << std::endl;

    CargoShip cargoShip(1, "Cargo Vessel", 1000);

    cargoShip.addItem("Boxes");
    cargoShip.addItem("Crates");
    cargoShip.addItem("Barrels");

    std::cout << "Ship name: " << cargoShip.getShipName() << std::endl;
    std::cout << "Capacity: " << cargoShip.getCapacity() << std::endl;
    std::cout << "Current load: " << cargoShip.getCurrentLoad() << std::endl;

    std::cout << "Items on board: ";
    std::string *items = cargoShip.getItems();
    for (int i = 0; i < cargoShip.getCurrentLoad(); i++)
    {
        std::cout << items[i] << " ";
    }
    std::cout << std::endl;

    cargoShip.removeItem("Boxes");
    std::cout << cargoShip.toString() << std::endl;

    std::cout << "======================= Test Military Ship =======================" << std::endl;

    MilitaryShip *militaryShip = new MilitaryShip(1, "Destroyer", 500);

    militaryShip->addWeapon("Guns");
    militaryShip->addWeapon("Missiles");
    militaryShip->addWeapon("Torpedoes");

    std::cout << "Ship name: " << militaryShip->getShipName() << std::endl;
    std::cout << "Capacity: " << militaryShip->getCapacity() << std::endl;
    std::cout << "Current load: " << militaryShip->getCurrentLoad() << std::endl;

    std::cout << "Weapons on board: ";
    std::string *weapons = militaryShip->getWeapons();
    for (int i = 0; i < militaryShip->getCurrentLoad(); i++)
    {
        std::cout << weapons[i] << " ";
    }
    std::cout << std::endl;

    militaryShip->removeWeapon("Missiles");

    std::cout << militaryShip->toString() << std::endl;

    delete militaryShip;
}

void testMemento()
{
    std::stack<CargoMemento> cargoHistory;
    std::stack<MilitaryMemento> militaryHistory;

    CargoShip *cargoship = new CargoShip(1, "SS Pacific Star", 5);
    cargoship->addItem("Boxes");
    cargoship->addItem("Cargo");
    cargoship->addItem("Crates");
    cargoship->addItem("Containers");

    MilitaryShip *militaryship = new MilitaryShip(2, "HMS Ark Royal", 4);
    militaryship->addWeapon("Guns");
    militaryship->addWeapon("Nuke");
    militaryship->addWeapon("Torpedo");
    militaryship->addWeapon("Missiles");

    std::cout << cargoship->toString() << std::endl;
    std::cout << militaryship->toString() << std::endl;

    cargoHistory.push(cargoship->save(1));
    militaryHistory.push(militaryship->save(1));

    cargoship->setCapacity(10);
    cargoship->setShipName("MV Golden Eagle");

    std::string* weapons = new std::string[3];

    weapons[0] = "Knives";
    weapons[1] = "Big Guns";
    weapons[2] = "Huge Nukes";

    militaryship->setWeapons(weapons, 3, 3);

    std::cout << cargoship->toString() << std::endl;
    std::cout << militaryship->toString() << std::endl;

    cargoship->restore(cargoHistory.top());
    militaryship->restore(militaryHistory.top());

    std::cout << cargoship->toString() << std::endl;
    std::cout << militaryship->toString() << std::endl;

    delete cargoship;
    delete militaryship;

    //termination error
}

void testPrototype()
{
}
