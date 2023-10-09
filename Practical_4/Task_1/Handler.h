#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <ctime>
#include <cstdlib>

#include "User.h"

/**
 * @brief The Handler class for handling requests.
 */
class Handler
{
public:
    /**
     * @brief Virtual function to handle the request.
     */
    virtual void handleRequest();
    
    /**
     * @brief Destructor for the Handler class.
     */
    virtual ~Handler() {delete successor; successor = nullptr;}

    /**
     * @brief setHandler to set the Handler for the Handler class.
     */
    void setHandler(Handler* successor) {this->successor = successor;}
protected:
    /**
     * @brief Constructor for the Handler class.
     * 
     * @param successor The next handler in the chain.
     * @param user User associated with the request.
     */
    Handler(Handler* successor, User* user) {this->successor = successor; this->user = user;}
    std::unordered_map<std::string, std::string> nonceDatabase;
    std::unordered_map<std::string, std::string> tokenDatabase;
    User* user;
private:
    Handler* successor;
};

#endif