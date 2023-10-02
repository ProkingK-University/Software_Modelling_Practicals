#include "Validate.h"

void Validate::handleRequest()
{   
    std::string token = user->getToken();
    if (tokenDatabase.find(user->getUserId()) != tokenDatabase.end()) 
    {
        std::string storedToken = tokenDatabase[user->getUserId()];
        if (token == storedToken) 
        {
            std::cout << "Token is valid. Request authorized.\n";
            Handler::handleRequest();
        }
        else
        {
            std::cout << "Invalid token. Authorization failed.\n";
        }
    }
    else
    {
        std::cout << "Token not found. Authorization failed.\n";
    }
}