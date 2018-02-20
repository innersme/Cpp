//
//  RealObjUnder1.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 2. 11..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
using namespace std;

class Data
{
private:
    int data;
public:
    Data(int num)
    : data(num){}
    void ShowData() {cout << "Data: " << data << endl;}
    void Add(int num) {data+= num;}
};

int main()
{
    Data obj(15);
    obj.Add(17);
    obj.ShowData();
    return 0;
}
