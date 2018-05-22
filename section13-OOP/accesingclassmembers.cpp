// section 13
// Declare Classes and Objects

#include <iostream>
#include <string>
#include <vector>

//Creating a player class for a game
class Player
{
    //attributes
    std::string name;
    int health;
    int xp;

    //methods
    void talk(std::string);
    bool isDead();

};

class Account
{
public:

    //attributes
    std::string name;
    double balance;

    //methods

    bool deposit(double depositAmount)
    {
        if(depositAmount < 0)
        {
            return false;
        }
        else
        {
            balance=balance+depositAmount;
            return true;
        }
    };

    bool withdraw(double withdrawAmount)
    {
        if(withdrawAmount < 0)
        {
            return false;
        }
        else if(balance >= withdrawAmount)
        {
            balance=balance-withdrawAmount;
            return true;
        }
        else if(withdrawAmount > balance)
        {
            return false;
        }
        else
        {
            return false;
        }
    };

};

/*
int main()
{
    Account ludwigAccount;
    ludwigAccount.name = "Ludwig";
    ludwigAccount.balance = 1000.0;
    ludwigAccount.deposit(100);

    Account *diogoAccount = new Account;
    (*diogoAccount).name = "Diogo";
    (*diogoAccount).balance = 1350;
    diogoAccount->withdraw(500);

    return 0;
}
*/
