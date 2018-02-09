//
//  ReferenceAttribute.cpp
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
    void FirstFunc() {cout << "FirstFunc()" <<endl;}
    virtual void SimpleFunc() {cout << "First's SimpleFunc()" << endl;}
};

class Second : public First
{
public:
    void SecondFunc() {cout << "Second Func()" << endl;}
    virtual void SimpleFunc() {cout << "Second's SimpleFunc()" << endl;}
};

class Third : public Second
{
public:
    void ThirdFunc() {cout << "ThirdFunc()"<< endl;}
    virtual void SimpleFunc() {cout << "Third's SimpleFunc()" << endl;}
};

int main()
{
    Third obj;
    obj.FirstFunc();
    obj.SecondFunc();
    obj.ThirdFunc();
    obj.SimpleFunc();
    
    Second & sref = obj;
    sref.FirstFunc();
    sref.SecondFunc();
    sref.SimpleFunc();
    
    First & fref = obj;
    fref.FirstFunc();
    fref.SimpleFunc();
    return 0;
}
