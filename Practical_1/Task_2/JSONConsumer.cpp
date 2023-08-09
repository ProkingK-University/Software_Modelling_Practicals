#include "JSONConsumer.h"

std::string JSONConsumer::parseData(std::string data)
{
    int index = 0;
    std::string output;
    std::vector<std::string> lines = createVector(data);

    buildString(lines, index, output);

    return output;
}

void JSONConsumer::buildString(const std::vector<std::string> &lines, int &index, std::string &result)
{
    while (index < (int) lines.size())
    {
        const std::string &line = lines[index];

        if (line.find("}") != std::string::npos)
        {
            break;
        }
        else if (line.find("{") != std::string::npos)
        {
            index++;

            buildString(lines, index, result);
        }
        else
        {
            result += line.substr(1) + "\n";
        }

        index++;
    }
}