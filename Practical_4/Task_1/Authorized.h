#ifndef AUTHORIZED_H
#define AUTHORIZED_H

#include "Handler.h"

class Authorized : public Handler
{
public:
    virtual void handleRequest() {std::cout << "Processing the request...\n";}
    Authorized(User* user) : Handler(nullptr, user) {}
};

#endif