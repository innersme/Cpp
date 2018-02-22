//
//  PointMultipleOperation.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 2. 20..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
using namespace std;

class Point
{
    int xpos, ypos;
public:
    Point(int x=0, int y=0)
    :xpos(x), ypos(y) {}
    void ShowPosition() const
    {
        cout << '[' << xpos << ", "<< ypos << ']' <<endl;
    }
    Point operator*(int times)
    {
        Point pos(xpos*times, ypos*times);
        return pos;
    }
};

Point operator*(int times, Point& ref)
{
    return ref*times;
    
}

int main()
{
    Point pos(1, 2);
    Point cpy;
    
    cpy = 3*pos;
    cpy.ShowPosition();
    
    cpy = 3*pos*2;
    cpy.ShowPosition();
    return 0;
}
