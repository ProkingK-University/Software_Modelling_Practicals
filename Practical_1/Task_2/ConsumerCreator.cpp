#include "JSONConsumer.h"
#include "ODataConsumer.h"
#include "ConsumerCreator.h"

ConsumerCreator::ConsumerCreator(std::string consumerType)
{
    this->consumerType = consumerType;
}

std::string ConsumerCreator::getConsumer()
{
    return consumerType;
}

Consumer* ConsumerCreator::createConsumer()
{
    if (consumerType == "OData")
    {
        return new ODataConsumer();
    }
    else if (consumerType == "JSON")
    {
        return new JSONConsumer();
    }
    else
    {
        std::cout<< "Invalid Format Type" <<std::endl;

        return NULL;
    }
}

void ConsumerCreator::setConsumer(std::string consumerType)
{
    this->consumerType = consumerType;
}