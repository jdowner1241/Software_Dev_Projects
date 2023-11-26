#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include "Account.h"
#include "Menu.h"

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::string;

void Menu::mainmenu()
{
    // Clear screen
    system("CLS");

    // Main Menu
    cout << "\n\t\t\t#####################################################################\t\t\t";
    cout << "\n\t\t\t\t\t\tMysticFunds Bank";
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\n\t\t\tMain Menu\t\t\t\t";
    cout << "\n\n\t\t\t1)  Get Balance";
    cout << "\n\t\t\t2)  Deposit Amount";
    cout << "\n\t\t\t3)  Withdraw Amount";
    cout << "\n\t\t\t4)  Exit.";
    cout << "\n\n\t\t\tSelection: ";
}

void Menu::showBalance(double getbalance)
{
    double balance = getbalance;
    // Account account;
    // double balance = account.getBalance();
    // cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\tCurrent Balance: $" << fixed << setprecision(2) << balance;
}

void Menu::AccountSelection()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\t\t\t\tAccount Selection";
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\n\t\t\t1)  Saving Account";
    cout << "\n\t\t\t2)  Chequing Account";
    cout << "\n\n\t\t\tSelection: ";
}

void Menu::AccountSelection_Saving()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\t\t\t\tSaving Account";
}

void Menu::AccountSelection_Chequing()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\t\t\t\tChequing Account";
}

void Menu::task_Complete()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\tTask Complete!!!";
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\n\n\t\t\t" << system("PAUSE");
}

void Menu::task_pause()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\n\n\t\t\t" << system("PAUSE");
}

void Menu::invalid_Amount()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\tInvalid Amount!!!";
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\n\n\t\t\t" << system("PAUSE");
}

void Menu::invalid_Selection()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\t\t\tInvalid selection!!!";
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\n\n\t\t\t" << system("PAUSE");
}

void Menu::border_1()
{
    cout << "\n\t\t\t#####################################################################\t\t\t";
}

void Menu::border_2()
{
    cout << "\n\t\t\t*********************************************************************\t\t\t";
}

void Menu::exit()
{
    cout << "\n\n\t\t\tThank you for using MysticBank";
    cout << "\n\t\t\tGood Bye!!!";
    cout << "\n\n\t\t\t#####################################################################\t\t\t";
    cout << "\n\n\n\t\t\t" << system("PAUSE");
}

void Menu::report_prompt()
{
    cout << "\n\t\t\t#####################################################################\t\t\t";
    cout << "\n\t\t\t\t\t\tReceipt";
    cout << "\n\t\t\t*********************************************************************\t\t\t";
    cout << "\n\n\t\t\tWould you like to generate a receipt?";
    cout << "\n\n\t\t\t1)  Yes";
    cout << "\n\t\t\t2)  No";
    cout << "\n\n\t\t\tSelection: ";
}

string Menu::report_start()
{
    string msg = "\n\t\t\t#####################################################################\t\t\t"
                 "\n\t\t\t\t\t\tMysticFunds Bank"
                 "\n\t\t\t*********************************************************************\t\t\t"
                 "\n\t\t\t\t\t\t   Transactions\t\t\t\t\t\t"
                 "\n\t\t\t\t\t\t__________________\t\t\t\t\t\t";
    return msg;
}

string Menu::report_deposit()
{
    string msg;
    msg = "\n\n\t\t\tDeposit:\t\t\t\t";
    return msg;
}

string Menu::report_withdrew()
{
    string msg;
    msg = "\n\n\t\t\tWithdraw:\t\t\t\t";
    return msg;
}
string Menu::report_balance()
{

    string msg = "\n\t\t\t#####################################################################\t\t\t"
                 "\n\t\t\t\t\t\tAccount Balance";
    return msg;
}
string Menu::report_end()
{

    string msg = "\n\t\t\t#####################################################################\t\t\t";
    return msg;
};
