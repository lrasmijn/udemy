#include "account.h"

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

void Account::enumTest(int myNumber)
{
    enum
    {
        initial,
        middle,
        end
    };

    enum gameState
    {
        init,
        mid,
        einde
    };

    std::cout << "initial= " << initial << std::endl;

}
