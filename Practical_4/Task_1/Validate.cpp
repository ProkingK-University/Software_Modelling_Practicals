#include "Validate.h"

void Validate::handleRequest(const std::string& nonce, const std::string& token)
{
    std::string userToken = user->getToken();
    if (userToken == token)
    {
        std::cout << "Token is valid. Request authorized.\n";
        Handler::handleRequest(nonce, token);
    }
    else
    {
        std::cout << "Invalid token. Authorization failed.\n";
    }
}
