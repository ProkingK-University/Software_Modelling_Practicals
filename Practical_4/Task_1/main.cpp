#include <iostream>

#include "User.h"
#include "SignUp.h"
#include "SignIn.h"
#include "Validate.h"
#include "Authorized.h"

void signUp(User *user);
void signIn(User *user);
void authorize(User *user);

int main()
{
    User *user = new User("#42069");

    signUp(user);
    signIn(user);
    authorize(user);

    delete user;

    return 0;
}

void signUp(User *user)
{
    std::cout << "Signing up...\n";

    Handler *authorizedHandler = new Authorized(user);
    Handler *validateHandler = new Validate(authorizedHandler, user);
    Handler *signInHandler = new SignIn(validateHandler, user, false);
    Handler *signUpHandler = new SignUp(signInHandler, user, true);

    Handler *headHandler = signUpHandler;

    headHandler->handleRequest("", "");
}

void signIn(User *user)
{
    std::cout << "Signing in...\n";

    Handler *authorizedHandler = new Authorized(user);
    Handler *validateHandler = new Validate(authorizedHandler, user);
    Handler *signInHandler = new SignIn(validateHandler, user, false);
    Handler *signUpHandler = new SignUp(signInHandler, user, false);

    Handler *headHandler = signUpHandler;

    headHandler->handleRequest(user->getNonce(), "");
}

void authorize(User *user)
{
    std::cout << "Authorizing...\n";

    Handler *authorizedHandler = new Authorized(user);
    Handler *validateHandler = new Validate(authorizedHandler, user);
    Handler *signInHandler = new SignIn(validateHandler, user, true);
    Handler *signUpHandler = new SignUp(signInHandler, user, false);

    Handler *headHandler = signUpHandler;

    headHandler->handleRequest(user->getNonce(), user->getToken());
}