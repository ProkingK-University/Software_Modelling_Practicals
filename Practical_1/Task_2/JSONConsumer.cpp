#include "JSONConsumer.h"

std::string JSONConsumer::parseData(std::string data)
{
    int index = 0;
    std::string output;
    std::vector<std::string> lines = createVector(data);

    buildString(lines, index, 0, output);

    return output;
}

void JSONConsumer::buildString(const std::vector<std::string> &lines, int &index, int level, std::string &result)
{
    while (index < lines.size())
    {
        const std::string &line = lines[index];

        if (line.find("}") != std::string::npos)
        {
            break;
        }
        else if (line.find("{") != std::string::npos)
        {
            index++;

            buildString(lines, index, level + 1, result);
        }
        else
        {
            indent(result, level);

            result += line + "\n";
        }

        index++;
    }
}