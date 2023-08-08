#ifndef CONSUMER_H
#define CONSUMER_H

#include <string>
#include <vector>

class Consumer
{
protected:
    void indent(std::string &result, int level);
    virtual std::string parseData(std::string data) = 0;
    std::vector<std::string> createVector(std::string data);

public:
    std::string printData(std::string data);
};

#endif