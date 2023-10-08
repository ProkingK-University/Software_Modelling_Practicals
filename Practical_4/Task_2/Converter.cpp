#include "Converter.h"

Converter::Converter(YourSQL *adaptee) : MySQL()
{
    this->adaptee = adaptee;
}

Converter::~Converter()
{
    delete adaptee;
    adaptee = nullptr;
}

std::string Converter::query(std::string colnum, std::string table)
{
    return adaptee->query(colnum, table);
}