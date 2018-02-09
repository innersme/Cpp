//
//  VirtualDestructor.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 2. 9..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
using namespace std;

class First
{
    char * strOne;
public:
    First(char * str)
    {
        strOne = new char[strlen(str) + 1];
    }
    ~First()
    {
        cout << "~First()" << endl;
        delete []strOne;
    }
};

class Second : public First
{
    char *strTwo;
public:
    Second(char *str1, char *str2) : First(str1)
    {
        strTwo = new char[strlen(str2)+1];
    }
    ~Second()
    {
        cout << "~Second()" << endl;
        delete []strTwo;
    }
};

int main()
{
    First *ptr = new Second("Simple", "Complex");
    delete ptr;
    
    return 0;
}
