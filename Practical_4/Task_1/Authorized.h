#ifndef AUTHORIZED_H
#define AUTHORIZED_H

#include "Handler.h"

/**
 * @brief The Authorized class for handling authorized requests.
 */
class Authorized : public Handler
{
public:
    /**
     * @brief Handle the authorized request.
     */
    virtual void handleRequest(const std::string& nonce, const std::string& token) {std::cout << "Processing the request...\n";}
    
    /**
     * @brief Constructor for Authorized class.
     * 
     * @param user User associated with the request.
     */
    Authorized(User* user) : Handler(nullptr, user) {}
};

#endif