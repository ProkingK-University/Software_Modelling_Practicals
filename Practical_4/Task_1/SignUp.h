#ifndef SIGNUP_H
#define SIGNUP_H

#include "Handler.h"

class SignUp : public Handler
{
public:
    virtual void handleRequest();
    std::string generateNonce();
    SignUp(Handler* signIn, User* user, bool requestingNonce) : Handler(signIn, user) {this->requestingNonce = requestingNonce;}
private:
    bool requestingNonce;
};

#endif