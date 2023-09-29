#ifndef HANDLER_H
#define HANDLER_H

class Handler
{
public:
    virtual void handleRequest() = 0;
    Handler* handler;
};

#endif