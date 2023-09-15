#ifndef BANK_H
#define BANK_H

class Bank {
private:
    int currentAmount;
public:
    Bank(int initialAmount);
    ~Bank(){}
    void emptyBank();
    int getCurrentAmount();
    void fundResearch();
    void queryGameComponent();
    void updateGameComponent();  
};

#endif