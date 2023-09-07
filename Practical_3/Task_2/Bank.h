#ifndef BANK_H
#define BANK_H

class Bank {
private:
    int currentAmount;
public:
    Bank(int initialAmount);

    void payLab();
    void emptyBank();
    int getCurrentAmount() const;

    ~Bank();
};

#endif