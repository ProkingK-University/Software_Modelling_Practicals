#ifndef CONSUMERCREATOR_H
#define CONSUMERCREATOR_H

#include <iostream>
#include "Consumer.h"

class ConsumerCreator
{
public:
    std::string consumerType;

    ConsumerCreator(std::string consumerType);

    std::string getConsumer();
    Consumer* createConsumer();
    void setConsumer(std::string consumerType);
};

#endif