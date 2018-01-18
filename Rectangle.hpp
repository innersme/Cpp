//
//  Rectangle.hpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 18..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Point.hpp"

class Rectangle {
    Point upLeft;
    Point lowRight;
    
public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};

#endif /* Rectangle_hpp */
