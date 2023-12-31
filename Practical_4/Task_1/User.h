#ifndef USER_H
#define USER_H

#include <string>

/**
 * @brief The User class for representing a user.
 */
class User
{
public:
    /**
     * @brief Constructor for the User class.
     *
     * @param userId The user's ID.
     */
    User(const std::string userId) {this->userId = userId, token = "", nonce = "";}

    /**
     * @brief Get the user's ID.
     *
     * @return The user's ID.
     */
    const std::string getUserId() const {return userId;}

    /**
     * @brief Get the user's security token.
     *
     * @return The user's security token.
     */
    const std::string getToken() const {return token;}

    /**
     * @brief Set the user's security token.
     *
     * @param newToken The new security token to set.
     */
    void setToken(const std::string newToken) {token = newToken;}

    /**
     * @brief Get the user's nonce.
     *
     * @return The user's nonce.
     */
    const std::string getNonce() const {return nonce;}

    /**
     * @brief Set the user's nonce.
     *
     * @param newNonce The new nonce to set.
     */
    void setNonce(const std::string newNonce) {nonce = newNonce;}

private:
    std::string userId;
    std::string token;
    std::string nonce;
};

#endif
