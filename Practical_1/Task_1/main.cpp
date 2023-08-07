#include <stack>
#include "CargoShip.h"
#include "MilitaryShip.h"

void testShips();
void testMemento();
void testPrototype();

int main()
{
    //testShips();
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

/*
#include "CargoShip.h"
#include "Ship.h"

#include <iostream>

void protoTypeTesting();
void mementoTesting();
//void finalTesting();
void cloningUnitializedObjectTesting();
void cloningOneObjectTesting();
void cloningTwoObjectsTesting();
void deepCopyTesting();
//void invalidStateTesting();
// void partialRestorationTesting();

int main()
{
    //protoTypeTesting();
    mementoTesting();
    //finalTesting();
    return 0;
}

void protoTypeTesting()
{
    cloningUnitializedObjectTesting();
    cloningOneObjectTesting();
    cloningTwoObjectsTesting();
}

void cloningUnitializedObjectTesting()
{
    std::cout << "<----CREATE NEW CARGO SHIP 1 THAT IS UNINITIALIZED---->" << std::endl;
    CargoShip* cargoShip1 = new CargoShip();
    std::cout << std::endl;

    std::cout << "<----CLONING CARGO SHIP 1---->" << std::endl;
    CargoShip* cloneCargoShip1 = (CargoShip*) cargoShip1->clone();
    std::cout << "LOADING...." << std::endl;
    std::cout << "DONE!" << std::endl;
    std::cout << std::endl;

    std::cout << "<----TESTING CLONING---->" << std::endl;
    std::cout << "Original Ship Id: " << cargoShip1->getShipId() << std::endl;
    std::cout << "Cloned Ship id: " << cloneCargoShip1->getShipId() << std::endl;
    std::cout << "Original Ship Name: " << cargoShip1->getShipName() << std::endl;
    std::cout << "Cloned Ship Name: " << cloneCargoShip1->getShipName() << std::endl;
    std::cout << "Original Ship Capacity: " << cargoShip1->getCapacity() << std::endl;
    std::cout << "Cloned Ship Capacity: " << cloneCargoShip1->getCapacity() << std::endl;
    std::cout << "Original Ship Load: " << cargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Cloned Ship Load: " << cloneCargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Original Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << "Cloned Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << std::endl;

    std::cout << "<----DELETING SHIPS---->" << std::endl;
    delete cargoShip1;
    std::cout << "DELETED CARGO SHIP 1..." << std::endl;
    delete cloneCargoShip1;
    std::cout << "DELETED CLONED SHIP..." << std::endl;
    std::cout << std::endl;
}

void cloningOneObjectTesting()
{
    std::cout << "<----CREATE NEW CARGO SHIP 1---->" << std::endl;
    CargoShip* cargoShip1 = new CargoShip();
    cargoShip1->setShipId(1);
    cargoShip1->setShipName("Ship");
    cargoShip1->setCapacity(5);
    cargoShip1->setCurrentLoad(3);
    cargoShip1->setItems(cargoShip1->getCapacity());
    cargoShip1->addItem("Item 1");
    cargoShip1->addItem("Item 2");
    cargoShip1->addItem("Item 3");
    std::cout << std::endl;

    std::cout << "<----CLONING CARGO SHIP 1---->" << std::endl;
    CargoShip* cloneCargoShip1 = (CargoShip*) cargoShip1->clone();
    std::cout << "LOADING...." << std::endl;
    std::cout << "DONE!" << std::endl;
    std::cout << std::endl;

    std::cout << "<----TESTING CLONING---->" << std::endl;
    std::cout << "Original Ship Id: " << cargoShip1->getShipId() << std::endl;
    std::cout << "Cloned Ship id: " << cloneCargoShip1->getShipId() << std::endl;
    std::cout << "Original Ship Name: " << cargoShip1->getShipName() << std::endl;
    std::cout << "Cloned Ship Name: " << cloneCargoShip1->getShipName() << std::endl;
    std::cout << "Original Ship Capacity: " << cargoShip1->getCapacity() << std::endl;
    std::cout << "Cloned Ship Capacity: " << cloneCargoShip1->getCapacity() << std::endl;
    std::cout << "Original Ship Load: " << cargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Cloned Ship Load: " << cloneCargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Original Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << "Cloned Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << std::endl;

    std::cout << "<----DELETING SHIPS---->" << std::endl;
    delete cargoShip1;
    std::cout << "DELETED CARGO SHIP 1..." << std::endl;
    delete cloneCargoShip1;
    std::cout << "DELETED CLONED SHIP..." << std::endl;
    std::cout << std::endl;
}

void cloningTwoObjectsTesting()
{
    std::cout << "<----CREATE NEW CARGO SHIP 1---->" << std::endl;
    CargoShip* cargoShip1 = new CargoShip();
    cargoShip1->setShipId(1);
    cargoShip1->setShipName("Container Ship");
    std::cout << std::endl;

    std::cout << "<----CLONING CARGO SHIP 1---->" << std::endl;
    CargoShip* cloneCargoShip1 = (CargoShip*) cargoShip1->clone();
    std::cout << "LOADING...." << std::endl;
    std::cout << "DONE!" << std::endl;
    std::cout << std::endl;

    std::cout << "<----CLONING CARGO SHIP 1---->" << std::endl;
    CargoShip* cloneCargoShip2 = (CargoShip*) cargoShip1->clone();
    std::cout << "LOADING...." << std::endl;
    std::cout << "DONE!" << std::endl;
    std::cout << std::endl;

    std::cout << "<----TESTING CLONING FOR CARGO SHIP 1---->" << std::endl;
    std::cout << "Original Ship Id: " << cargoShip1->getShipId() << std::endl;
    std::cout << "Cloned Ship id: " << cloneCargoShip1->getShipId() << std::endl;
    std::cout << "Original Ship Name: " << cargoShip1->getShipName() << std::endl;
    std::cout << "Cloned Ship Name: " << cloneCargoShip1->getShipName() << std::endl;
    std::cout << "Original Ship Capacity: " << cargoShip1->getCapacity() << std::endl;
    std::cout << "Cloned Ship Capacity: " << cloneCargoShip1->getCapacity() << std::endl;
    std::cout << "Original Ship Load: " << cargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Cloned Ship Load: " << cloneCargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Original Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << "Cloned Ship Items: " << cloneCargoShip1->getItems() << std::endl;
    std::cout << std::endl;

    std::cout << "<----TESTING CLONING FOR CARGO SHIP 1---->" << std::endl;
    std::cout << "Original Ship Id: " << cargoShip1->getShipId() << std::endl;
    std::cout << "Cloned Ship id: " << cloneCargoShip2->getShipId() << std::endl;
    std::cout << "Original Ship Name: " << cargoShip1->getShipName() << std::endl;
    std::cout << "Cloned Ship Name: " << cloneCargoShip2->getShipName() << std::endl;
    std::cout << "Original Ship Capacity: " << cargoShip1->getCapacity() << std::endl;
    std::cout << "Cloned Ship Capacity: " << cloneCargoShip2->getCapacity() << std::endl;
    std::cout << "Original Ship Load: " << cargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Cloned Ship Load: " << cloneCargoShip2->getCurrentLoad() << std::endl;
    std::cout << "Original Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << "Cloned Ship Items: " << cloneCargoShip2->getItems() << std::endl;
    std::cout << std::endl;

    std::cout << "<----ADDING TRAITS TO CLONED VERSION OF CARGO SHIP 1---->" << std::endl;
    cloneCargoShip1->setCapacity(5);
    cloneCargoShip1->setCurrentLoad(3);
    cloneCargoShip1->setItems(cargoShip1->getCapacity());
    cloneCargoShip1->addItem("Item 1");
    cloneCargoShip1->addItem("Item 2");
    cloneCargoShip1->addItem("Item 3");

    std::cout << "<----ADDING TRAITS TO CLONED VERSION OF CARGO SHIP 1---->" << std::endl;
    cloneCargoShip2->setCapacity(4);
    cloneCargoShip2->setCurrentLoad(1);
    cloneCargoShip2->setItems(cargoShip1->getCapacity());
    cloneCargoShip2->addItem("Item 1");

    std::cout << "<----TESTING CLONING FOR CARGO SHIP 1 (UPDATED)---->" << std::endl;
    std::cout << "Original Ship Id: " << cargoShip1->getShipId() << std::endl;
    std::cout << "Cloned Ship id: " << cloneCargoShip1->getShipId() << std::endl;
    std::cout << "Original Ship Name: " << cargoShip1->getShipName() << std::endl;
    std::cout << "Cloned Ship Name: " << cloneCargoShip1->getShipName() << std::endl;
    std::cout << "Original Ship Capacity: " << cargoShip1->getCapacity() << std::endl;
    std::cout << "Cloned Ship Capacity: " << cloneCargoShip1->getCapacity() << std::endl;
    std::cout << "Original Ship Load: " << cargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Cloned Ship Load: " << cloneCargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Original Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << "Cloned Ship Items: " << cloneCargoShip1->getItems() << std::endl;
    std::cout << std::endl;

    std::cout << "<----TESTING CLONING FOR CARGO SHIP 1 (UPDATED)---->" << std::endl;
    std::cout << "Original Ship Id: " << cargoShip1->getShipId() << std::endl;
    std::cout << "Cloned Ship id: " << cloneCargoShip2->getShipId() << std::endl;
    std::cout << "Original Ship Name: " << cargoShip1->getShipName() << std::endl;
    std::cout << "Cloned Ship Name: " << cloneCargoShip2->getShipName() << std::endl;
    std::cout << "Original Ship Capacity: " << cargoShip1->getCapacity() << std::endl;
    std::cout << "Cloned Ship Capacity: " << cloneCargoShip2->getCapacity() << std::endl;
    std::cout << "Original Ship Load: " << cargoShip1->getCurrentLoad() << std::endl;
    std::cout << "Cloned Ship Load: " << cloneCargoShip2->getCurrentLoad() << std::endl;
    std::cout << "Original Ship Items: " << cargoShip1->getItems() << std::endl;
    std::cout << "Cloned Ship Items: " << cloneCargoShip2->getItems() << std::endl;
    std::cout << std::endl;

    std::cout << "<----DELETING SHIPS---->" << std::endl;
    delete cargoShip1;
    std::cout << "DELETED CARGO SHIP 1..." << std::endl;
    delete cloneCargoShip1;
    std::cout << "DELETED CLONED SHIP 1..." << std::endl;
    delete cloneCargoShip2;
    std::cout << "DELETED CLONED SHIP 2..." << std::endl;
    std::cout << std::endl;
}

void mementoTesting()
{
    deepCopyTesting();
    //invalidStateTesting();
    //partialRestorationTesting();
}

void deepCopyTesting()
{

}

// /*
// Attempt to restore the originator's state from an invalid or corrupted Memento.
// The pattern should gracefully handle such situations and avoid crashing or
// causing undefined behavior.
// */
// void invalidStateTesting()
// {

// }

// /*
// Try restoring the originator's state partially (e.g., only restoring certain
// attributes or fields). Ensure that the Memento pattern handles partial
// restoration correctly and maintains consistency.
// */
// void partialRestorationTesting()
// {

// }

// void finalTesting()
// {

// }