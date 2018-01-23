//
//  DestModel.cpp
//  Cpp
//
//  Created by MJMac on 2018. 1. 23..
//  Copyright © 2018년 innersme. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char *name;
public:
    Person(char *myname)
    {
        name = new char [strlen(myname)+1];
        strcpy(name, myname);
    }
    ~Person()
    {
        delete []name;
    }
    void WhatYourName() const
    {
        cout << "My Name is "<< name << endl;
    }
};

class UnivStudent : public Person
{
    char * major;
public:
    UnivStudent (char *myname, char * mymajor)
    : Person(myname)
    {
        major = new char[strlen(mymajor)+1];
        strcpy(major , mymajor);
    }
    ~UnivStudent()
    {
        delete []major;
    }
    void WhoAreYou() const
    {
        WhatYourName();
        cout << "My major is " << major << endl << endl;
    }
};

int main()
{
    UnivStudent st1("KIM", "Mathematics");
    st1.WhoAreYou();
    UnivStudent st2("Hong", "Physics");
    st2.WhoAreYou();
    return 0;
}
