#ifndef ODATACONSUMER_H
#define ODATACONSUMER_H

#include "Consumer.h"

class ODataConsumer : public Consumer
{
public:
    std::string parseData(std::string);
};

#endif