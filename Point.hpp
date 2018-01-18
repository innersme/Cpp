//
//  Point.hpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 18..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

class Point {
    int x;
    int y;
    
public:
    bool InitMembers(int xpos, int ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};
#endif /* Point_hpp */
