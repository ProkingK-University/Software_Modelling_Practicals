#ifndef ODATACONSUMER_H
#define ODATACONSUMER_H

#include "Consumer.h"

class ODataConsumer : public Consumer
{
private:
    virtual void buildString(const std::vector<std::string> &lines, int &index, int level, std::string &result);

public:
    virtual std::string parseData(std::string data);
};

#endif