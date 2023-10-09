#include "SignUp.h"

void SignUp::handleRequest(const std::string& nonce, const std::string& token)
{
    if (requestingNonce)
    {
        user->setNonce(generateNonce());
        std::cout << "Generated nonce: " << user->getNonce() << "\n";
    }
    else
    {
        Handler::handleRequest(nonce, token);
    }
}

std::string SignUp::generateNonce()
{
    std::time_t currentTime = std::time(nullptr);
    return std::to_string(currentTime);
}
