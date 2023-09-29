#ifndef YOURSQL_H
#define YOURSQL_H

#include <string>

class YourSQL
{
public:
    std::string query(std::string colnum, std::string table);
};

#endif