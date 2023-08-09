#include "ODataConsumer.h"

std::string ODataConsumer::parseData(std::string data)
{
    int index = 0;
    std::string output;
    std::vector<std::string> lines = createVector(data);

    buildString(lines, index, output);

    return output;
}

void ODataConsumer::buildString(const std::vector<std::string>& lines, int& index, std::string& result)
{
    while (index < (int) lines.size())
    {
        const std::string &line = lines[index];

        if (line.find("</section>") != std::string::npos)
        {
            break;
        }
        else if (line.find("<section>") != std::string::npos)
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