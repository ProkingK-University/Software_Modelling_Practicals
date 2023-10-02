#include "SignIn.h"

void SignIn::handleRequest()
{
    if (validatingSignInNonce)
    {
        std::string nonce = user->getNonce();
        if (nonceDatabase.find(nonce) != nonceDatabase.end())
        {
            user->setToken(generateToken());
            tokenDatabase[user->getUserId()] = user->getToken();
            std::cout << "Verified sign-in nonce and generated token: " << user->getToken() << "\n";
        }
        else
        {
            std::cout << "Invalid sign-in nonce. Authentication failed.\n";
        }
    }
    else
    {
        Handler::handleRequest();
    }
}

std::string SignIn::generateToken()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomToken = std::rand();
    return std::to_string(randomToken);
}
