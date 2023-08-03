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
    


    // std::cout << "<----TEST IF CLONING WORKS--->" << std::endl;
    // CargoShip* c = static_cast<Ship*>(clonedShip);
    // // Check if the clonedShip is indeed a CargoShip object
    // CargoShip* castedClonedShip = dynamic_cast<CargoShip*>(clonedShip);
    // if (castedClonedShip) {
    //     std::cout << "Cloned Ship is a CargoShip." << std::endl;
    //     // Test some CargoShip specific functions
    //     castedClonedShip->addItem("Item3");
    //     castedClonedShip->removeItem("Item2");
    // } else {
    //     std::cout << "Cloned Ship is not a CargoShip." << std::endl;
    // }

    // // Don't forget to clean up memory
    // delete clonedShip;

    
    
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