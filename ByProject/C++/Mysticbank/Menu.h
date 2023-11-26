#ifndef MENU_H
#define MENU_H

#include <string>

using std::string;
class Menu
{
public:
    void mainmenu();
    void showBalance(double);
    void AccountSelection();
    void AccountSelection_Saving();
    void AccountSelection_Chequing();
    void task_Complete();
    void task_pause();
    void invalid_Amount();
    void invalid_Selection();
    void border_1();
    void border_2();
    void exit();
    void report_prompt();
    string report_start();
    string report_deposit();
    string report_withdrew();
    string report_balance();
    string report_end();
};

#endif