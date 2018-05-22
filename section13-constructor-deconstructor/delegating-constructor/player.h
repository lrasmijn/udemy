#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player
{
public:
    //Overloaded constructors
    Player();
    Player(std::string nameVal);
    Player(std::string nameVal, int healthVal, int xpVal);

private:
    std::string name;
    int health;
    int xp;
};

#endif // PLAYER_H
