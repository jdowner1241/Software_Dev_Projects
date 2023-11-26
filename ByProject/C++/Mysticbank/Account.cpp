#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ios>
#include <vector>
#include "Account.h"
#include "Menu.h"
#include "Transaction.h"

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::ofstream;
using std::ostringstream;
using std::setprecision;
using std::setw;
using std::string;
using std::to_string;
using std::vector;

Account::Account(double init_balance) // Account Class constructor
{
    Menu menu;
    balance = init_balance;
    if (init_balance >= 1000)
    {
        balance = init_balance;
    }
    else
    {
        balance = 0;
        menu.invalid_Amount();
    }
}

Account::Account(){};

Account::~Account(){};

void Account::setBalance(void)
{
    // Clear screen
    system("CLS");

    cout << "\n\t\t\t#####################################################################\t\t\t";
    cout << "\n\t\t\t\t\t\tMysticFunds Bank";
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\tEnter the Initial balance: $";
}

double Account::getBalance()
{
    return balance;
}

bool Account::deposit(double amount)
{
    Menu menu;
    bool deposit;
    if (amount > 0)
    {
        balance += amount;
        deposit = true;

        // logging Objects
        string typeValue = "deposit" + type;
        log.push_back(Transaction(amount, typeValue));
    }
    else
    {
        menu.invalid_Amount();
        deposit = false;
    }
    return deposit;
}

bool Account::withdraw(double amount)
{
    bool withdraw = false;
    if (amount <= balance)
    {
        balance -= amount;
        withdraw = true;

        // logging Objects
        string typeValue = "withdraw" + type;
        log.push_back(Transaction(amount, typeValue));
    }
    else
    {
        cout << "\n\t\t\t*********************************************************************\t\t\t";
        cout << "\n\t\t\tDebit amount exceeded account balance!!!";
        cout << "\n\t\t\t*********************************************************************\t\t\t";
        withdraw = false;
    }

    return withdraw;
}

vector<string> Account::report()
{

    // store class objects to vector
    for (const auto &transaction : log)
    {
        Exportlog.push_back(transaction.Report());
    }

    return Exportlog;
};
