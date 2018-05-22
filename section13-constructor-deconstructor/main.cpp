// section 13
//Constructor and deconstructor

#include <iostream>
#include <string>
#include <vector>
#include "account.h"

int main()
{

    Account ludwigAccount("Ludwig",2500.0);
    ludwigAccount.setName("Ludwig");
    ludwigAccount.setBalance(1000.0);
    std::cout << "Current balance is: " <<ludwigAccount.getBalance() << std::endl;
    std::cout << std::endl;
    ludwigAccount.enumTest(1);

    return 0;
}
