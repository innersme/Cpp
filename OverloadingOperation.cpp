//
//  OverloadingOperation.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 2. 12..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
using namespace std;

class Point
{
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0)
    :xpos(x),ypos(y){}
    void ShowPosition() const
    {
        cout << '[' << xpos<< "," <<ypos << ']' << endl;
    }
    Point operator+(const Point &ref)
    {
        Point pos(xpos+ref.xpos, ypos+ref.ypos);
        return pos;
    }
};

int main()
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1 + pos2;
    
    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();
    
    return 0;
}
