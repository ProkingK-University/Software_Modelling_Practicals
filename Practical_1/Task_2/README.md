# TASK 2

## Design pattern used:
### Template Method

![Alt text](https://cdn.discordapp.com/attachments/1092393954856669235/1140722861124878336/Task_2.jpg)

### Classification:
Behavioural
### Strategy:
Inheritance
### Intent:
Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. 
Template Method lets subclasses redefine certain steps of an algorithm
without changing the algorithm’s structure.

### Participants
* AbstractClass: Consumer
* ConcreteClass: JSONConsumer and ODataConsumer

| Participant | Entity in application |
| :

## Description
The Template method was used to design and model a program that converts XML and JSON data into a python like indented format.
The program has a Consumer class which acts as the AbstractClass, the JSONConsumer and ODataConsumer which inherit from the Consumer class
which act as the ConcreteClass and there is a ConsumerCreator class which creates the children of the Consumer class, thus acting as a 
factory method. The program uses a vector to store the different layers of the indents and then pops them out when accordingly.
