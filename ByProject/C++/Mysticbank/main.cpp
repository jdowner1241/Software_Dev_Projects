#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <ios>
#include <vector>
#include "Account.h"
#include "SavingAccount.h"
#include "ChequingAccount.h"
#include "Transaction.h"
#include "Menu.h"

// Bank Name: MysticFunds

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

int main()
{
    Account mysticfunds;
    SavingAccount debit;
    ChequingAccount credit;
    Menu menu;

    double amount = 0;
    double accountBalance = 0;
    float rate = 0;
    double interestAmount = 0;
    double feeAmount = 0;
    bool withdrawStatus = false;
    int keepRunning = 0;
    int selection = 0;
    int accountSelection = 0;
    double funds = 0;
    string Reportdata;
    vector<string> ExportReport;

    // Initial Balance
    mysticfunds.setBalance();
    cin >> amount;
    Account mysticfunds1(amount);

    // saving account
    accountBalance = mysticfunds1.getBalance(); // Get the balance
    rate = debit.setrate();                     // Get the interest rate
    SavingAccount debit1(accountBalance, rate); // Using SavingAccount Constructor
    interestAmount = debit1.calcInterest();     // Store the interestAmount

    // Chequing account
    feeAmount = credit.setfee();                        // Get the transaction fee
    ChequingAccount credit1(accountBalance, feeAmount); // Using ChequingAccount Constructor

    menu.task_Complete();


    //Main Menu loop
    do
    {

        // Main menu
        menu.mainmenu();
        cin >> selection;

        switch (selection)
        {
        case 1:
            // Get balance

            // using SavingAccount Class
            menu.AccountSelection_Saving();
            menu.showBalance(debit1.getBalance());
            // use ChequingAccount Class
            menu.AccountSelection_Chequing();
            menu.showBalance(credit1.getBalance());

            menu.task_pause();
            break;

        case 2:
            // deposit
            menu.AccountSelection();
            cin >> accountSelection;

            cout << "\n\t\t\t*********************************************************************\t\t\t";
            cout << "\n\t\t\tAmount to deposit: $";
            cin >> amount;

            if (accountSelection == 1)
            {
                // using SavingAccount Class
                funds = amount + debit1.calcInterest();
                debit1.deposit(funds);

            }
            else if (accountSelection == 2)
            {
                // use ChequingAccount Class
                credit1.deposit(amount);

            }
            else
            {
                // Invalid selection
                menu.invalid_Selection();
            }

            menu.task_Complete();

            break;
        case 3:
            // withdraw
            menu.AccountSelection();
            cin >> accountSelection;

            cout << "\n\t\t\t*********************************************************************\t\t\t";
            cout << "\n\t\t\tAmount to Withdraw: $";
            cin >> amount;

            if (accountSelection == 1)
            {
                // using SavingAccount Class
                debit1.withdraw(amount);

            }
            else if (accountSelection == 2)
            {
                // using ChequingAccount Class
                credit1.withdraw(amount);

            }
            else
            {
                // Invalid selection
                menu.invalid_Selection();
            }

            menu.task_Complete();
            break;
        case 4:
            // exit the program
            cout << "\n\t\t\t*********************************************************************\t\t\t";

            // Prompt to print the Receipt
            int report_selection;
            menu.report_prompt();
            cin >> report_selection;
            cout << "\n\t\t\t#####################################################################\t\t\t";

            if (report_selection == 1)
            {
                // store inital information to report
                Transaction receipt(accountBalance, "initial");
                Reportdata = receipt.Report();
                ExportReport.push_back(Reportdata);

                // using log
                ExportReport.push_back(Reportdata = "\n\t\t\t___________________\n\t\t\tSaving Account Transactions:");
                debit1.report();
                for (const auto &datalog : debit1.Exportlog)
                {
                    ExportReport.push_back(datalog);
                }

                ExportReport.push_back(Reportdata = "\n\t\t\t___________________\n\t\t\tChequing Account Transactions:");
                credit1.report();
                for (const auto &datalog : credit1.Exportlog)
                {
                    ExportReport.push_back(datalog);
                }


                // get the balance for both accounts
                double funds1 = debit1.getBalance();
                double funds2 = credit1.getBalance();

                // Stores the balance header to log
                Transaction receipt1(0, "balance");
                Reportdata = receipt1.Report();
                ExportReport.push_back(Reportdata);

                // Stores the balance for Savings to log
                Transaction receipt2(funds1, "balanceS");
                Reportdata = receipt2.Report();
                ExportReport.push_back(Reportdata);

                // Stores the balance for Chequing to log
                Transaction receipt3(funds2, "balanceC");
                Reportdata = receipt3.Report();
                ExportReport.push_back(Reportdata);
            
                // Store end line to log
                Transaction receipt4(0, "end");
                Reportdata = receipt4.Report();
                ExportReport.push_back(Reportdata);

  
                //Export Vector to file
                cout << "\n\t\t\tReceipt being generated...";

                //Specify filePath
                string filePath = "C:\\transactions.txt";

                //open and creates the file
                ofstream outputFile(filePath);

                // check if the file is opened 
                try{
                    if (outputFile.is_open())
                    {
                        // iterate through the vector and write to file
                        for (const auto &data : ExportReport)
                        {
                            outputFile << data << endl;
                        }

                        // close the file
                        outputFile.close();

                        cout << "\n\t\t\t*********************************************************************\t\t\t";
                        cout << "\n\t\t\tReceipt created and saved successfully. ";
                        cout << "\n\t\t\tSave location: " << filePath << endl;
                    }
                    else
                    {
                        cout << "\n\t\t\t*********************************************************************\t\t\t";
                        cerr << "\n\t\t\tError opening/creating the file: " << filePath << endl;
                        throw outputFile.fail();
                        cout << "\n\n\n\t\t\t" << system("PAUSE");
                    }
                }
                catch (...)
                {
                    cerr << "\n\t\t\tAccess denied - Unable to create file.\n" << endl;
                }
            }
            else if (report_selection == 2)
            {
                "\n\t\t\tNo Receipt will be given.";
            }
            else
            {
                menu.invalid_Selection();
            }

            cout << "\n\t\t\t#####################################################################\t\t\t";
            cout << "\n\t\t\tPress 1 to Exit. Otherwise press any other key to continue.";
            cout << "\n\t\t\tEnter: ";
            cin >> keepRunning;
            menu.border_2();
            break;
        default:
            menu.invalid_Selection();
            break;
        }

    } while (keepRunning != 1);

    menu.exit();

    return 0;
}

