#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
//#include "Menu.h"


using std::string;

#include "Account.h"
class Transaction
{
public:
    Transaction(double, string);
    Transaction();
    // virtual ~Transaction();

    string Report() const;

protected:
private:
    double amount;
    string type;
};

#endif // Transaction.h
