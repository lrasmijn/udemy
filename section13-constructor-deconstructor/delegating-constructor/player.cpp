#include "player.h"

Player::Player()
    : Player{"None",0,0}
{
    std::cout << "No args constructor" <<std::endl;
}

Player::Player(std::string nameVal)
    : Player{nameVal,0,0}
{
    std::cout << "1 arg const" << std::endl;
}

Player::Player(std::string nameVal, int healtVal, int xpVal)
    : name{nameVal}, health{healtVal}, xp{xpVal}
{
    std::cout << "3 args constructor" << std::endl;
}
