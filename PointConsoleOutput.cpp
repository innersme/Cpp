//
//  PointConsoleOutput.cpp
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
    :xpos(x), ypos(y){}
    void ShowPosition() const
    {
        cout << '[' << xpos << ", " << ypos << ']' <<endl;
    }
    friend ostream& operator<< (ostream&, const Point&);
};
