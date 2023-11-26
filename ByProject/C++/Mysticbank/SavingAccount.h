#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include "Account.h"
class SavingAccount: public Account
{
public:
    SavingAccount(double, float);
    SavingAccount();
    virtual ~SavingAccount();

    double calcInterest();
    float setrate(void);

protected:
private:
    float interestRate;
};

#endif