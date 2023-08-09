#ifndef CONSUMER_H
#define CONSUMER_H

#include <string>
#include <vector>

class Consumer
{
protected:
    void indent(std::string &result, int level);
    std::vector<std::string> createVector(std::string data);
    
    virtual std::string parseData(std::string data) = 0;
    virtual void buildString(const std::vector<std::string>& lines, int& index, std::string &result) = 0;

public:
    std::string printData(std::string data);
};

#endif