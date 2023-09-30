#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <ctime>
#include <cstdlib>

#include "User.h"
class Handler
{
public:
    virtual void handleRequest();
    ~Handler() {delete successor; successor = nullptr;}
protected:
    Handler(Handler* successor, User* user) {this->successor = successor; this->user = user;}
    std::unordered_map<std::string, std::string> nonceDatabase;
    std::unordered_map<std::string, std::string> tokenDatabase;
    User* user;
private:
    Handler* successor;
};

#endif