//
//  HASInheritance.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 24..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
    int bullet;
public:
    Gun(int bnum): bullet(bnum){}
    void Shot()
    {
        if(bullet < 1)
        {
            cout << "No Bullet" << endl;
        }
        else{
            cout << " BBANG! " << endl;
            bullet--;
        }
    }
};

class Police : public Gun
{
    int handcuffs;
public:
    Police(int bnum, int bcuff)
    : Gun(bnum), handcuffs(bcuff){}
    void PutHandcuff()
    {
        cout << " SNAP! " << endl;
        handcuffs--;
    }
};

int main()
{
    Police pman(5, 3);
    pman.Shot();
    pman.PutHandcuff();
    return 0;
}
