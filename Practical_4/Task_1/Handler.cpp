#include "Handler.h"

void Handler::handleRequest(const std::string& nonce, const std::string& token)
{
    if (successor)
        successor->handleRequest(nonce, token);
}
