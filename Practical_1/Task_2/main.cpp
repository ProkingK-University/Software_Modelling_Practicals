#include "ConsumerCreator.h"

int main()
{
    std::string xmlData = R"(
<section>
	cars
	<section>
		bmw
		audi
	</section>
	buses
</section>
)";

    std::string jsonData = R"(
{
	COS
    {
        110
        212
    }
    WTW
}
)";

    ConsumerCreator creator("OData");
    Consumer *xml = creator.createConsumer();

    creator.setConsumer("JSON");
    Consumer *json = creator.createConsumer();

    std::cout << xml->printData(xmlData);
    std::cout << std::endl;
    std::cout << json->printData(jsonData);

    return 0;
}