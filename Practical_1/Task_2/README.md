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

| Participant         | Entity in application          |
| :-----------------: | :----------------------------: |
| AbstractClass       | Consumer                       |
| ConcreteClass       | JSONConsumer and ODataConsumer |
| templateMethod()    | printData()                    |
| Client              | main()                         |

## Description
The Template method was used to design and model a program that converts XML and JSON data into a python like indented format.
The program has a Consumer class which acts as the AbstractClass, the JSONConsumer and ODataConsumer which inherit from the Consumer class
which act as the ConcreteClass and there is a ConsumerCreator class which creates the children of the Consumer class, thus acting as a 
factory method. The program uses a vector to store the different layers of the indents and then pops them out when accordingly.

## Example Scenario:
* **Factory Method** - consumerCreator: At the heart of your application is the consumerCreator method, acting as a factory method. This method creates and returns specific consumer objects based on the configuration passed from the main application (main.cpp). This configuration is done through the setConsumer member function, where you pass the consumerType. If consumerType is "OData", an instance of odataConsumer is created and returned. If it's "JSON", then an instance of jsonConsumer is returned. If any other value is passed as consumerType, the consumerType value remains unchanged.
* **Template Method** - printData: The printData method serves as the template method in this scenario. It receives a string as an argument, which is formatted in a specific manner. The method then calls the parseData method, which will be overridden by the subclasses (odataConsumer and jsonConsumer). After parsing, the resulting data is printed to the console.
* **OData Consumer** - odataConsumer: The odataConsumer subclass specializes in parsing XML-like structures. It processes input strings that contain a series of <section> and </section> tags. Each <section> tag represents a section of data, possibly containing subsections and subitems. The odataConsumer class's parseData method handles this XML-like structure, extracting and formatting the data, and passing it back to the printData template method for output. For instance, given the input structure, it outputs the sections, subsections, and subitems in a hierarchical order.
* **JSON Consumer** - jsonConsumer: The jsonConsumer subclass is responsible for parsing JSON-like structures. It processes strings enclosed within curly braces {} that represent sections and subitems. Similar to the odataConsumer, the parseData method in the jsonConsumer class extracts the necessary information and formats it. The resulting data is then sent back to the printData template method for display. Just as with the odataConsumer, the jsonConsumer maintains a hierarchy of sections, subsections, and subitems.
