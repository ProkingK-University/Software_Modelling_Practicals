#include "MySQL.h"

std::string MySQL::query(std::string colnum, std::string table)
{
    return "SELECT " + colnum + " FROM " + table;
}