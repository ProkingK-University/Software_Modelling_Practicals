#ifndef CONVERTER_H
#define CONVERTER_H

#include "MySQL.h"
#include "YourSQL.h"

class Converter : public MySQL
{
private:
    YourSQL *adaptee;

public:
    Converter(YourSQL *adaptee);
    std::string query(std::string colnum, std::string table);
};

#endif