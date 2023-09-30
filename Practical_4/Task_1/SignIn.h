#ifndef SIGNIN_H
#define SIGNIN_H

#include "Handler.h"


/**
 * @brief The SignIn class for handling sign-in requests.
 */
class SignIn : public Handler
{
public:
    /**
     * @brief Handle the sign-in request.
     */
    virtual void handleRequest();

    /**
     * @brief Constructor for SignIn class.
     *
     * @param validate The next handler for validation.
     * @param user User associated with the request.
     * @param validatingSignInNonce Flag to validate sign-in nonce.
     */
    SignIn(Handler* validate, User* user, bool validatingSignInNonce) : Handler(validate, user) {this->validatingSignInNonce = validatingSignInNonce;}
    
    /**
     * @brief Generate a security token.
     *
     * @return The generated security token.
     */
    std::string generateToken();
private:
    bool validatingSignInNonce;
};

#endif