#include "CargoShip.h"
#include "Ship.h"

#include <iostream>

void protoTypeTesting();
//void mementoTesting();
//void finalTesting();
void circularReferenceTesting();
// void cloningUnitializedObjectsTesting();
// void protoTypeRegistrationAndManagement();
// void deepCopyTesting();
// void invalidStateTesting();
// void partialRestorationTesting();

int main() 
{
    protoTypeTesting();
    //mementoTesting();
    //finalTesting();
    return 0;
}

void protoTypeTesting() 
{
    circularReferenceTesting();
    //cloningUnitializedObjectsTesting();
    //protoTypeRegistrationAndManagement();
}

/*
Test the pattern with objects having circular references (object A references
object B, and object B references object A). Ensure that the prototype
cloning process handles circular references gracefully without entering an
infinite loop.
*/
void circularReferenceTesting() 
{
    CargoShip* cargoShip = new CargoShip();
    cargoShip->setCapacity(1000);
    cargoShip->setCurrentLoad(500);
    cargoShip->addItem("Item1");
    cargoShip->addItem("Item2");
    cargoShip->addItem("Item3");

    Ship* cloneShip = cargoShip->clone();

    std::cout << static_cast<void*>(cloneShip);



//    // Create a Ship object
//     Ship* ship;
//     ship->setShipId(1001);
//     ship->setShipName("Sample Ship");

//     // Create a CargoShip object
//     CargoShip cargoShip(2001, "Cargo Ship 1", 10);

//     // Add items to the cargo ship
//     cargoShip.addItem("Item1");
//     cargoShip.addItem("Item2");
//     cargoShip.addItem("Item3");

//     // Print the details of the cargo ship
//     std::cout << cargoShip;

//     // Create a CargoMemento to save the cargo ship state
//     CargoMemento memento = cargoShip.save(1);

//     // Modify the cargo ship
//     cargoShip.removeItem("Item2");
//     cargoShip.setShipName("Modified Cargo Ship");

//     // Print the details of the modified cargo ship
//     std::cout << cargoShip;

//     // Restore the cargo ship to the saved state
//     cargoShip.restore(memento);

//     // Print the details of the restored cargo ship
//     std::cout << cargoShip;
}

/*
Attempt to clone objects that have not been fully initialized or contain null
values. The prototype should create a valid copy without errors or issues.
*/


// void cloningUnitializedObjectsTesting() 
// {

// }


// /*
// Test the registration and management of prototype objects in the prototype
// manager (if used). Ensure that prototypes are registered correctly and that
// the prototype manager can handle concurrent access and modification to the
// prototype registry.
// */
// void protoTypeRegistrationAndManagement() 
// {

// }

// void mementoTesting() 
// {
//     deepCopyTesting();
//     invalidStateTesting();
//     partialRestorationTesting();
// }

// /*
// Check if the Memento is performing a deep copy of the originator's state rather
// than a shallow copy. Changes made to the original object should not affect the
// state stored in the Memento.
// */
// void deeptCopyTesting() 
// {

// }

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