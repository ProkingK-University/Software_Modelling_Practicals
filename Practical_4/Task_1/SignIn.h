#ifndef SIGNIN_H
#define SIGNIN_H

#include "Handler.h"

class SignIn : public Handler
{
public:
    virtual void handleRequest();
    SignIn(Handler* validate, User* user, bool validatingSignInNonce) : Handler(validate, user) {this->validatingSignInNonce = validatingSignInNonce;}
    std::string generateToken();
private:
    bool validatingSignInNonce;
};

#endif