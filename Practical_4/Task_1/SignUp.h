#ifndef SIGNUP_H
#define SIGNUP_H

#include "Handler.h"

/**
 * @brief The SignUp class for handling sign-up requests.
 */
class SignUp : public Handler
{
public:
    /**
     * @brief Handle the sign-up request.
     */
    virtual void handleRequest(const std::string& nonce, const std::string& token);

    /**
     * @brief Generate a nonce for sign-up.
     *
     * @return The generated nonce.
     */
    std::string generateNonce();

    /**
     * @brief Constructor for SignUp class.
     *
     * @param signIn The next handler for sign-in.
     * @param user User associated with the request.
     * @param requestingNonce Flag to request a nonce.
     */
    SignUp(Handler* signIn, User* user, bool requestingNonce)
        : Handler(signIn, user), requestingNonce(requestingNonce) {}

private:
    bool requestingNonce;
};

#endif
