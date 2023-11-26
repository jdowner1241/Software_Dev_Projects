#ifndef CHEQUINGACCOUNT_H
#define CHEQUINGACCOUNT_H

#include "Account.h"

class ChequingAccount : public Account
{
public:
    ChequingAccount(double, double);
    ChequingAccount();
    virtual ~ChequingAccount();

    bool withdraw(double amount) override;
    double setfee(void);

protected:
private:
    double transactionFee;
};

#endif