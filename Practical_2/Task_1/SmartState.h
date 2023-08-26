#ifndef SMARTSTATE_H
#define SMARTSTATE_H

#include <string>

class SmartContract;  // Forward declaration

class SmartState
{   
protected:
    std::string name;
    SmartContract& smartContract;
public:
    SmartState(SmartContract& smartContract);

    virtual void addCondition();
    virtual void rejectContract();
    virtual void acceptContract();
    virtual void removeCondition();
    virtual void completeContract();
    
    virtual std::string getName() = 0;
<<<<<<< HEAD
<<<<<<< HEAD
    virtual void acceptContract() = 0;
    virtual void completeContract() = 0;
    virtual void rejectContract(std::string reason) = 0;
    virtual void addCondition(std::string condition) = 0;
    virtual void removeCondition(std::string condition) = 0;
    void setState(SmartState* newState);

    virtual ~SmartState();
=======
>>>>>>> develop
=======
>>>>>>> develop
};

#endif