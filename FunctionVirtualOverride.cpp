//
//  FunctionOverride.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 2. 9..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
using namespace std;

class First
{
public:
    virtual void MyFunc() {cout << "FirstFunc"<< endl;}
};

class Second : public First
{
public:
    virtual void MyFunc() {cout << "secondFunc" << endl;}
};

class Third : public Second
{
public:
    virtual void MyFunc() {cout << "ThirdFunc" << endl;}
};

int main()
{
    Third * tptr = new Third();
    Second *sptr = tptr;
    First *fptr = sptr;
    
    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();
    delete tptr;
    return 0;
}
