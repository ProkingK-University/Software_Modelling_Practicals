#ifndef MYSQL_H
#define MYSQL_H

#include <string>
class MySQL
{
public:
    virtual std::string query(std::string colnum, std::string table);
};

#endif