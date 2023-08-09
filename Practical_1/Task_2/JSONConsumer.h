#ifndef JSONCONSUMER_H
#define JSONCONSUMER_H

#include "Consumer.h"

class JSONConsumer : public Consumer
{
private:
    virtual void buildString(const std::vector<std::string> &lines, int &index, std::string &result);

public:
    virtual std::string parseData(std::string data);
};

#endif