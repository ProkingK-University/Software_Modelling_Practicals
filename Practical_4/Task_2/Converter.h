#ifndef CONVERTER_H
#define CONVERTER_H

#include "SQL.h"
#include "MySQL.h"

class Converter : public SQL
{
private:
    MySQL* adapter;
public:
    virtual void request();
};

#endif