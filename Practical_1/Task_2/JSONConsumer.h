#ifndef JSONCONSUMER_H
#define JSONCONSUMER_H

#include "Consumer.h"

class JSONConsumer : public Consumer
{
public:
    std::string parseData(std::string);
};

#endif