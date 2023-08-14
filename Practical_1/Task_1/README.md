# TASK 1

## Design pattern used:
### Memento & Prototype

![Alt text](https://cdn.discordapp.com/attachments/1092393954856669235/1140708107853508698/Task_1.jpg)

## Memento
### Classification:
Behavioural 
### Strategy:
Delegation (Object)
### Intent:
Without violating encapsulation, capture and externalise an object’s internal
state so that the object can be restored to this state later.

### Participants
Originator: CargoShip and MilitaryShip
Memento: CargoMemento and MilitaryMemento
Caretaker: main

| Participant         | Entity in application      |
| :-----------------: | :------------------------: |
| Prototype           | Ship                       |
| :-----------------: | :------------------------: |
| Concrete Prototypes | CargoShip and MilitaryShip |
| :-----------------: | :------------------------: |
| Client              | main()                     |

## Prototype

### Classification:
Creational

### Strategy:
Delegation

### Intent:
Specify the kinds of objects to create using a prototypical instance, and create new
objects by copying this prototype.

## Description
### Intent: 
The combination of the memento and prototype design patterns can be used to implement a sophisticated system that involves managing the state of objects and creating new instances of those objects with specific states. <br />

Here is how we combine the patterns:

## 1. Memento Part:
* We implement the Memento to capture the state of a Ship object (originator) at a specific point in time. Each Ship object would have its own memento class (in our case CargoMemento & MilitaryMemento) that holds its state.
* The Caretaker can manage a history of mementos of each Ship, allowing for undo or redo functionality.

## 2. Prototype Part:
* Implement the Prototype pattern by allowing Ship objects to be cloned. When a Ship's state needs to be restored, you can clone the corresponding memento to create a new Ship object with that historical state.
* This eliminates the need to manually reset the Ship's attributes when restoring its state.

## 3. Example Scenario:
We can create a CargoShip that has foodItem, a luggageItem and a clothingItem. We can save the state of the Ship object with those specific items in our CargoMemento class. This CargoMemento class is a derived class to the base class ShipMemento; meaning that CargoMemento is also able to save the CargoShip's attributes (shipId, version, capacity, currentLoad, items & shipName). Furthermore, let's say later on that we want create a new save state to our existing CargoShip that adds two new items to our CargoShip (a notebook & a computer). Due to the memento design pattern's intent, it enables an undo and redo feature by getting that version of the CargoShip by automatically resetting the CargoShip's attributes via cloning.