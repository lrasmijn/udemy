#ifndef MYSTRINGSTART_H
#define MYSTRINGSTART_H


class MyStringStart
{
public:
    MyStringStart();                            //No arg constructor
    MyStringStart(const char *s);               //Overloaded constrcutor
    MyStringStart(const MyStringStart &source); //Copy constructor
    ~MyStringStart();                           //Destructor

    void display() const;
    int getLength() const;                      //getter
    const char *getStr() const;

private:
    char *str;      //pointer to a char[] that holds a C-style string

};

#endif // MYSTRINGSTART_H
