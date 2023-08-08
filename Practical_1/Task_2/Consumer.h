#ifndef CONSUMER_H
#define CONSUMER_H

class Consumer
{
protected:
    virtual std::string parseData(std::string data) = 0;
public:
    std::string printData(std::string data);
};

#endif