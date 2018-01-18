//
//  Ch03_Q2_1.hpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 18..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#ifndef Ch03_Q2_1_hpp
#define Ch03_Q2_1_hpp

#include <iostream>
using namespace std;
class Calculator
{
    double x;
    double y;
    int cnt_add, cnt_min, cnt_mul, cnt_div;
public:
    void Init();
    double Add(double x, double y);
    double Div(double x, double y);
    double Min(double x, double y);
    double Mul(double x, double y);
    void ShowOpCount();
};

#endif /* Ch03_Q2_1_hpp */
