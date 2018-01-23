//
//  Ch07_Q1_1.cpp
//  Cpp
//
//  Created by MJMac on 2018. 1. 23..
//  Copyright © 2018년 innersme. All rights reserved.
//

#include <iostream>
using namespace std;

class Car
{
    int gasolineGauge;
public:
    Car(int mygas) : gasolineGauge(mygas)
    {
        cout << gasolineGauge << endl;
    }
    int GetGasGauge()
    {
        return gasolineGauge;
    }
};

class HybridCar : public Car
{
    int electricGauge;
public:
    int GetElecGauge()
    {
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar
{
    int waterGauge;
public:
    void ShowCurrentGauge()
    {
        cout << "잔여 가솔린: " << GetGasGauge() << endl;
        cout << "잔여 전기량: " << GetElecGauge() << endl;
        cout << "잔여 워터량: " << waterGauge << endl;
    }
};

int main()
{
    Car c1
    return 0;
}
