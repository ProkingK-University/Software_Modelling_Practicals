#include <iostream>
#include <string>

#include "Converter.h"

int main()
{
    MySQL* target = new MySQL();
    std::string targetResult = target->query("10", "WINE");

    YourSQL* adaptee = new YourSQL();
    std::string adapteeResult = adaptee->query("10", "WINE");

    MySQL* adapter = new Converter(adaptee);
    std::string adapterResult = adapter->query("10", "WINE");

    std::cout << "The target says: " << targetResult << std::endl;
    std::cout << "The adaptee says: " << adapteeResult << std::endl;
    std::cout << "The adapter says: " << adapterResult << std::endl;

    delete target;
    target = nullptr;

    delete adaptee;
    adaptee = nullptr;
    
    delete adapter;
    adapter = nullptr;
    
    return 0;
}