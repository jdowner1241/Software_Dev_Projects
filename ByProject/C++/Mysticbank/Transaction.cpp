#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <vector>
#include "Account.h"
#include "Transaction.h"
#include "Menu.h"

using std::cin;
using std::cout;
using std::fixed;
using std::ostringstream;
using std::setprecision;
using std::string;
using std::to_string;
using std::vector;

Transaction::Transaction(double amt, string kind)
{
    amount = amt;
    type = kind;
};

Transaction::Transaction(){};

// Transaction::~Transaction(){}

string Transaction::Report()
const {

    string Report;
    string Report1;
    string Report2;
    string funds;
    Menu menu;


    if (type == "initial")
    // initial page
    {
        Report = (menu.report_start());
    }
    // Deposit for Saving account
    else if (type == "depositS")
    {
        Report1 = (menu.report_deposit());
        ostringstream stream;
        stream << fixed << setprecision(2) << amount;
        funds = stream.str();
        Report2 = "\n\t\t\tAmount Added: $" + funds + " to Saving Account. \n\t\t\t*********************************************************************\t\t\t";

        Report = Report1 + Report2;
    }
    // Deposit for Chequing account
    else if (type == "depositC")
    {
        Report1 = (menu.report_deposit());
        ostringstream stream;
        stream << fixed << setprecision(2) << amount;
        funds = stream.str();
        Report2 = "\n\t\t\tAmount Added: $" + funds + " to Chequing Account. \n\t\t\t*********************************************************************\t\t\t";

        Report = Report1 + Report2;
    }
    // Withdraw for Chequing account
    else if (type == "withdrawS")
    {
        Report1 = (menu.report_withdrew());
        ostringstream stream;
        stream << fixed << setprecision(2) << amount;
        funds = stream.str();
        Report2 = "\n\t\t\tAmount Removed: $" + funds + " from Saving Account. \n\t\t\t*********************************************************************\t\t\t";

        Report = Report1 + Report2;
    }
    // Withdraw for Chequing account
    else if (type == "withdrawC")
    {
        Report1 = (menu.report_withdrew());
        ostringstream stream;
        stream << fixed << setprecision(2) << amount;
        funds = stream.str();
        Report2 = "\n\t\t\tAmount Removed: $" + funds + " from Chequing Account. \n\t\t\t*********************************************************************\t\t\t";

        Report = Report1 + Report2;
    }
    else if (type == "balance")
    {
        Report = (menu.report_balance());
    }
    else if (type == "balanceS")
    {
        Report1 = "\n\t\t\t*********************************************************************\t\t\t"
                  "\n\t\t\t\t\t\tSaving Account";

        ostringstream stream;
        stream << fixed << setprecision(2) << amount;
        funds = stream.str();
        Report2 = "\n\t\t\tCurrent Balance: $" + funds + "\n\t\t\t*********************************************************************\t\t\t";

        Report = Report1 + Report2;
    }
    else if (type == "balanceC")
    {
        Report1 = "\n\t\t\t*********************************************************************\t\t\t"
                  "\n\t\t\t\t\t\tChequing Account";

        ostringstream stream;
        stream << fixed << setprecision(2) << amount;
        funds = stream.str();
        Report2 = "\n\t\t\tCurrent Balance: $" + funds + "\n\t\t\t*********************************************************************\t\t\t";

        Report = Report1 + Report2;
    }
    else if (type == "end")
    {
        Report = (menu.report_end());
    };

    return Report;
}

