#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include "Account.h"
#include "SavingAccount.h"
#include "Menu.h"

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;


SavingAccount::SavingAccount(double init_balance, float rate){
    balance = init_balance;
    interestRate = rate;
};

SavingAccount::SavingAccount(){};

SavingAccount::~SavingAccount(){};

double SavingAccount::calcInterest()
{
    // interest Amount to add to saving account
    double calcInterest = balance * interestRate;
    cout << "\t\t\tInterest Amount Added: $" << calcInterest;
    //return calcInterest + balance;

    // Change the transaction type for the Account class
    type = "S";

    return calcInterest;
}

float SavingAccount::setrate(void)
{
    Menu menu;
    float init_rate = 0;
    float rate =0;
    int invalid = 1;
    do
    {
        cout << "\n\t\t\tEnter the Interest rate (1 to 100): " << std::flush;
        cin >> init_rate;
        if (init_rate <= 100)
        {
            rate = init_rate / 100;
            invalid = 0;
        }
        else
        {
            menu.invalid_Selection();
        }
    } while (invalid != 0);
    return rate;
}
