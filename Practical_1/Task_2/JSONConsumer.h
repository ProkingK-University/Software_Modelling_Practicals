#ifndef JSONCONSUMER_H
#define JSONCONSUMER_H

#include "Consumer.h"

class JSONConsumer : public Consumer
{
private:
    void buildString(const std::vector<std::string>& lines, int& index, std::string& result);

public:
    std::string parseData(std::string data);
};

#endif