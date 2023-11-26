#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include "Account.h"
#include "ChequingAccount.h"

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

ChequingAccount::ChequingAccount(double init_balance, double fee){
    balance = init_balance;
    transactionFee = fee;
    type = "C";
};

ChequingAccount::ChequingAccount(){};

ChequingAccount::~ChequingAccount(){};

bool ChequingAccount::withdraw(double amount) 
{
    bool withdraw;
    //transactionFee = amount;
    // Fee Amount to charged when withdrawing funds
    if (amount <= balance)
    {
        balance -= transactionFee;
        balance -= amount;

        // Change the transaction type for the Account class
        type = "C";

        cout << "\n\t\t\tFee deducted from Account: $" << transactionFee;

        // logging Objects
        string typeValue = "withdraw" + type;
        log.push_back(Transaction(amount+transactionFee, typeValue));

        
        withdraw = true;
    }else
    {
        cout << "\n\t\t\t*********************************************************************\t\t\t";
        cout << "\n\t\t\tDebit amount exceeded account balance!!!";
        cout << "\n\t\t\t*********************************************************************\t\t\t";
        withdraw = false;
    }


    return withdraw;
}

double ChequingAccount::setfee(void)
{
    double feeAmount;
    cout << "\n\n\t\t\tEnter the transaction fee: $";
    cin >> feeAmount;
    return feeAmount;
}