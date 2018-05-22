#include "account.h"
#include <string>

void Account::setBalance(double bal)
{
    balance=bal;
}

double Account::getBalance()
{
    return balance;
}

void Account::setName(std::string nameString)
{
    name = nameString;
}

/*void Account::enumTest(int myNumber)
{
    enum
    {
        initial,
        middle,
        end
    };
    std::cout << "initial= "; //<< initial << std:endl;
}
*/
