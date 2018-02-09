//
//  Ch07_Q2.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 24..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
using namespace std;

class Rectangle
{
    int hori;
    int verti;
public:
    Rectangle(int ghori, int gverti)
    :hori(ghori), verti(gverti){}
    void ShowAreaInfo()
    {
        cout << "면적: "<< hori * verti << endl;
    }
};

class Square : public Rectangle
{
    Rectangle *rec;
public:
    Square(int ghori)
    {
        rec = new Rectangle(ghori, ghori);
    }

    void ShowAreaInfo()
    {
        cout << "면적: " << rec->ShowAreaInfo() << endl;
    }
};

int main()
{
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();
    
    Square sqr(7);
    sqr.ShowAreaInfo();
    return 0;
}
