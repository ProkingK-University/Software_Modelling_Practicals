#ifndef VALIDATE_H
#define VALIDATE_H

#include "Handler.h";

class Validate : public Handler
{
public:
    void handleRequest();
    Validate(Handler* authorized, User* user) : Handler(authorized, user) {}
private:
};

#endif