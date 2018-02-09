//
//  HASComposite.cpp
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
        cout << "BBANG!" << endl;
        bullet--;
    }
};

class Police
{
    int handcuffs;
    Gun *pistol;
public:
    Police(int bnum, int bcuff): handcuffs(bcuff)
    {
        if(bnum > 0 )
        {
            pistol = new Gun(bnum);
        }
        else
        {
            pistol = NULL;
        }
    }
    void PutHandcuff()
    {
        cout << "SNAP!" << endl;
        handcuffs--;
    }
    void Shot()
    {
        if(pistol == NULL)
            cout << "Hut BBANG!" << endl;
        else
            pistol->Shot();
    }
    ~Police()
    {
        if(pistol != NULL)
            delete pistol;
    }
};

int main()
{
    Police pman1(5, 3);
    pman1.Shot();
    pman1.PutHandcuff();
    
    Police pman2(0,3);
    pman2.Shot();
    pman2.PutHandcuff();
    return 0;
}
