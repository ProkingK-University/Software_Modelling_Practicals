#include "Consumer.h"

#include <sstream>

void Consumer::indent(std::string& result, int level)
{
    for (int i = 0; i < level; i++)
    {
        result += "\t";
    }
}

std::vector<std::string> Consumer::createVector(std::string data)
{
    std::string line;
    std::vector<std::string> lines;
    std::istringstream inputStream(data);

    while (std::getline(inputStream, line))
    {
        lines.push_back(line);
    }

    return lines;
}

std::string Consumer::printData(std::string data)
{
    return parseData(data);
}