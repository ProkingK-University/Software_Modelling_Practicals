#include "ConsumerCreator.h"
#include "Consumer.h"
#include "JSONConsumer.h"
#include "ODataConsumer.h"

void testingJSONConsumer();
void testingXMLConsumer();
void testingInvalidConsumer();
void finalTesting();

int main()
{
    testingJSONConsumer();
    testingXMLConsumer();
    testingInvalidConsumer();
    finalTesting();
    return 0;
}

void testingJSONConsumer()
{
    std::cout << "======================= Test JSON Consumer =======================" << std::endl;
    std::string jsonData = "{\n\tName: John\n\tAge:21\n\tIs_Student: true\n\tSubjects{\n\t\tCOS\n\t\t{\n\t\t\t214\n\t\t\t226\n\t\t}\n\t\tWTW\n\t\t{\n\t\t\t285\n\t\t}\n\t}\n}";
    std::cout << jsonData << std::endl;
    ConsumerCreator creator("JSON");
    Consumer* jsonConsumer = creator.createConsumer();
    if (jsonConsumer) 
    {
        std::cout << std::endl << "JSON Consumer Output:" << std::endl;
        std::string jsonOutput = jsonConsumer->printData(jsonData);
        std::cout << jsonOutput << std::endl;
        delete jsonConsumer;
    }
    std::cout << std::endl;
}

void testingXMLConsumer()
{
    std::cout << "======================= Test XML Consumer =======================" << std::endl;
    std::string xmlData = "<section>\n\tcars\n\t<section>\n\t\tbmw\n\t\t<section>\n\t\t\tM2\n\t\t\tM3\n\t\t<section>\n\t\taudi\n<section>\n\t\t\tRS3\n\t\t\tRS5\n\t\t<section>\n\tbuses\n</section>";
    std::cout << xmlData << std::endl;
    ConsumerCreator creator("OData");
    Consumer* odataConsumer = creator.createConsumer();
    if (odataConsumer) 
    {
        std::cout << std::endl << "OData Consumer Output:" << std::endl;
        std::string odataOutput = odataConsumer->printData(xmlData);
        std::cout << odataOutput << std::endl;
        delete odataConsumer;
    }
    std::cout << std::endl;
}

void testingInvalidConsumer()
{
    std::cout << "======================= Test INVALID Consumer =======================" << std::endl;
    ConsumerCreator creator("Invalid");
    Consumer* invalidConsumer = creator.createConsumer();
    if (invalidConsumer) {
        delete invalidConsumer;
    }
    std::cout << std::endl;
}

void finalTesting() {
    std::cout << "======================= Final Testing =======================" << std::endl << std::endl;
    std::cout << "======================= Test JSON Consumer =======================" << std::endl;
    std::string jsonData = "{\n\tCOS\n\t{\n\t\t110\n\t\t212\n\t}\n\tWTW\n}";
    std::string xmlData = "<section>\n\tcars\n\t<section>\n\t\tbmw\n\t\taudi\n\t</section>\n\tbuses\n</section>";

    std::cout << xmlData <<std::endl;
    std::cout << jsonData <<std::endl;

    ConsumerCreator creator("OData");
    Consumer *xml = creator.createConsumer();

    creator.setConsumer("JSON");
    Consumer *json = creator.createConsumer();

    std::cout << "==========Printing XML Output==========" <<std::endl;
    std::cout << xml->printData(xmlData);

    std::cout << std::endl;

    std::cout << "==========Printing JSON Output==========" <<std::endl;
    std::cout << json->printData(jsonData);

    delete xml;
    delete json;
}