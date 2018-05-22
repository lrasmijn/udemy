#ifndef CLASSMEMBERMETHODS_H
#define CLASSMEMBERMETHODS_H

#include <iostream>
#include <string>
#include <vector>

class Account
{
private:
    std::string name;
    double balance;

public:
    //overloaded constructors
    Account(); //Constructor without initialization
    Account(std::string name); //Constructor with 1 initialization
    Account(std::string name, double balance); //Constructor with 2 initializer

    void setBalance(double);
    double getBalance();
    void setName(std::string);
//    void enumTest(int);
};

#endif // CLASSMEMBERMETHODS_H
