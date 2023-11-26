#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "Transaction.h"


using std::vector;
class Account
{
public:
    vector<string> Exportlog;

    Account(double);
    Account();
    virtual ~Account();

    void setBalance(void);
    double getBalance();
    bool deposit(double);
    virtual bool withdraw(double);
    vector<string> report();

protected:
    double balance;
    vector<Transaction> log;
    string type;
    bool reportexport;

};

#endif