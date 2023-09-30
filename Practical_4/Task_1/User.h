#ifndef USER_H
#define USER_H

#include <string>

class User
{
public:
    User(std::string userId) {this->userId = userId; token = nullptr; nonce = nullptr;}
    std::string getUserId() {return userId;}
    std::string getToken() {return token;}
    std::string setToken(std::string newToken) {token = newToken;}
    std::string getNonce() {return nonce;}
    void setNonce(std::string newNonce) {nonce = newNonce;}
private:
    std::string userId;
    std::string token;
    std::string nonce;
};

#endif