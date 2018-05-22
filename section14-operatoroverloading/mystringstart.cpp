#include <cstring>
#include <iostream>
#include "mystringstart.h"

//No args constructor
MyStringStart::MyStringStart()
    :str{nullptr}
{
    str = new char[1];  //Reserve space for 1 character on the heap
    *str = '\0';        //make the value on the null pointer the empty
}                       //

//Overloaded constrcutor
MyStringStart::MyStringStart(const char *s)
    :str{nullptr}
{
    if(s==nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}

//Copy constrcutor
MyStringStart::MyStringStart(const MyStringStart &source)
    :str{nullptr}
{
    str = new char[std::strlen(source.str)+ 1];
    std::strcpy(str,source.str);
}

