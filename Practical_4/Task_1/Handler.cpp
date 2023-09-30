#include "Handler.h"

void Handler::handleRequest()
{
    if (successor)
        successor->handleRequest();
}
