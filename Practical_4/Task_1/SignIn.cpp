#include "SignIn.h"

void SignIn::handleRequest(const std::string& nonce, const std::string& token)
{
    if (validatingSignInNonce)
    {
        std::string userNonce = user->getNonce();
        if (userNonce == nonce)
        {
            user->setToken(generateToken());
            std::cout << "Verified sign-in nonce and generated token: " << user->getToken() << "\n";
        }
        else
        {
            std::cout << "Invalid sign-in nonce. Authentication failed.\n";
        }
    }
    else
    {
        Handler::handleRequest(nonce, token);
    }
}


std::string SignIn::generateToken()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomToken = std::rand();
    return std::to_string(randomToken);
}
