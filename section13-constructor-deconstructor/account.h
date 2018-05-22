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
    Account(): //Constructor without initialization
        name{"None"}, balance{0.0}
    {
        std::cout << "No arg constructor used" << std::endl;
    }
    Account(std::string nameInput): //Constructor with 1 initialization
        name{nameInput}, balance{0.0}
    {
        std::cout << "1 arg constructor used" << std::endl;
    }
    Account(std::string nameInput, double balanceInput)://Constructor with 2 initializer
        name{nameInput}, balance{balanceInput}
    {
        std::cout << "2 arg constructor used" << std::endl;
    }
    ~Account()//Deconstructor
    {
        std::cout << "Destructor called for " << name << std::endl;
    }

    void setBalance(double);
    double getBalance();
    void setName(std::string);
    void enumTest(int);
};

#endif // CLASSMEMBERMETHODS_H
