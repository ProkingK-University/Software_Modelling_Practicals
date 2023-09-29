#include "YourSQL.h"

std::string YourSQL::query(std::string colnum, std::string table)
{
    return "FROM " + table + " SELECT " + colnum;
}