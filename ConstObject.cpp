//
//  ConstObject.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 22..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
using namespace std;

class SoSimple
{
    int num;
    
public:
    SoSimple(int n) : num(n){}
    SoSimple& AddNum(int n)
    {
        num+=n;
        return *this;
    }
    void ShowData() const
    {
        cout << "num: " << num << endl;
    }
};

int main()
{
    const SoSimple obj(7);
    // obj.AddNum(20);
    obj.ShowData();
    return 0;
}
