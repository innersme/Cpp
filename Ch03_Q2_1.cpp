//
//  Ch03_Q2_1.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 18..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include "Ch03_Q2_1.hpp"
void Calculator::Init()
{
    cnt_add = cnt_div = cnt_min = cnt_mul = 0;
}
double Calculator::Add(double x, double y)
{
    cnt_add++;
    return x + y;
}
double Calculator::Div(double x, double y)
{
    cnt_div++;
    double div = 0.0;
    if (y == 0) {
        return div;
    }
    else
    {
        return x / y;
    }
}
double Calculator::Min(double x, double y)
{
    cnt_min++;
    return x-y;
}
double Calculator::Mul(double x, double y)
{
    cnt_min++;
    return x*y;
}
void Calculator::ShowOpCount()
{
    cout << "덧셈: " <<cnt_add << " 뺄셈: " << cnt_min <<" 곱셈: " << cnt_mul << " 나눗셈: " <<cnt_div << endl;
}
