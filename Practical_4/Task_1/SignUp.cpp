#include "SignUp.h"

void SignUp::handleRequest()
{
    if (requestingNonce)
    {
        user->setNonce(generateNonce());
        nonceDatabase[user->getNonce()] = user->getUserId();
        std::cout << "Generated and persisted nonce: " << user->getNonce() << "\n";
    }
    else
    {
        Handler::handleRequest();
    }  
}

std::string SignUp::generateNonce()
{
    std::time_t currentTime = std::time(nullptr);
    return std::to_string(currentTime);
}