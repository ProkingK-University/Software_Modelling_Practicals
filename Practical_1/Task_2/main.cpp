#include "ConsumerCreator.h"

int main()
{
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

    return 0;
}