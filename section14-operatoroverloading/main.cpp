#include <iostream>
#include "mystringstart.h"

int main()
{
    MyStringStart empty;            //no arg constructor
    MyStringStart larry("Larry");   //overloaded constrcutor
    MyStringStart stooge{larry};    //copy constructor

    empty.display();
    larry.display();
    stooge.display();
    return 0;
}
