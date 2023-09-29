#include "Converter.h"

Converter::Converter(YourSQL *adaptee)
{
    this->adaptee = adaptee;
}

std::string Converter::query(std::string colnum, std::string table)
{
    return adaptee->query(colnum, table);
}