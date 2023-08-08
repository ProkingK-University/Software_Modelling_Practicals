#include "Consumer.h"

#include <sstream>

std::string Consumer::printData(std::string data)
{
    return parseData(data);
}

void Consumer::indent(std::string &result, int level)
{
    for (int i = 0; i < level; i++)
    {
        result += "\t";
    }
}

std::vector<std::string> createVector(std::string data)
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