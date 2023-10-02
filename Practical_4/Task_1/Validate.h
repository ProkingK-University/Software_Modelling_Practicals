#ifndef VALIDATE_H
#define VALIDATE_H

#include "Handler.h"

/**
 * @brief The Validate class for validating requests.
 */
class Validate : public Handler
{
public:
    /**
     * @brief Handle the request validation.
     */
    void handleRequest();

    /**
     * @brief Constructor for Validate class.
     *
     * @param authorized The next handler for authorized requests.
     * @param user User associated with the request.
     */
    Validate(Handler* authorized, User* user) : Handler(authorized, user) {}
};

#endif