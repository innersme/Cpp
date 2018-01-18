//
//  Ch03_Q2_1Main.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 18..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include "Ch03_Q2_1.hpp"

int main()
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
    cal.ShowOpCount();
    return 0;
}
