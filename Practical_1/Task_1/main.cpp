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
    std::cout << "<----CREATE ORIGINAL CARGO SHIP 1---->" << std::endl;
    CargoShip originalShip1;
    originalShip1.setCapacity(3);
    originalShip1.setCurrentLoad(0);
    originalShip1.setItems(originalShip1.getCapacity());
    originalShip1.addItem("Item 1");
    originalShip1.addItem("Item 2");
    originalShip1.setShipId(1);
    originalShip1.setShipName("Cruise Ship");
    std::cout << std::endl << std::endl;

    std::cout << "<----CLONE CARGO SHIP 1---->" << std::endl;
    Ship* clonedShip = originalShip1.clone();
    std::cout << std::endl << std::endl;

    std::cout << "<----VERTIFY THE STATE OF THE CLONED SHIP---->" << std::endl;
    std::cout << "Original Ship ID: " << originalShip1.getShipId() << std::endl;
    std::cout << "Original Ship Name: " << originalShip1.getShipName() << std::endl;
    std::cout << "Cloned Ship ID: " << clonedShip->getShipId() << std::endl;
    std::cout << "Cloned Ship Name: " << clonedShip->getShipName() << std::endl;

    // Check if the clonedShip is indeed a CargoShip object
    CargoShip* castedClonedShip = dynamic_cast<CargoShip*>(clonedShip);
    if (castedClonedShip) {
        std::cout << "Cloned Ship is a CargoShip." << std::endl;
        // Test some CargoShip specific functions
        castedClonedShip->addItem("Item3");
        castedClonedShip->removeItem("Item2");
    } else {
        std::cout << "Cloned Ship is not a CargoShip." << std::endl;
    }

    // Don't forget to clean up memory
    delete clonedShip;

    // CargoShip* cargoShip2 = new CargoShip();
    // cargoShip2->setShipId(1);
    // cargoShip2->setShipName("Ashley's Cargo Ship");
    // cargoShip2->setCapacity(4);
    // cargoShip2->setItems(cargoShip2->getCapacity());
    // cargoShip2->addItem("Item1");
    // cargoShip2->addItem("Item2");
    // cargoShip2->addItem("Item3");

    // Ship* cloneShip1 = cargoShip1->clone();
    // Ship* cloneShip2 = cargoShip2->clone();
    // std::cout << "Ship Id:" << cloneShip1->getShipId() << std::endl;
    // std::cout << "Ship Name: " << cloneShip1->getShipName() << std::endl;

    // std::cout << "Ship Id:" << cloneShip2->getShipId() << std::endl;
    // std::cout << "Ship Name: " << cloneShip2->getShipName() << std::endl;
    
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