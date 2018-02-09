//
//  Ch08_Q1.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 2. 9..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//
#include <iostream>
#include <cstring>
using namespace std;

namespace RISK_LEVEL {
    double RISK_A = 0.3;
    double RISK_B = 0.2;
    double RISK_C = 0.1;
}

class Employee
{
    char name[100];
public:
    Employee(char *name)
    {
        strcpy(this->name, name);
    }
    void ShowYourName() const
    {
        cout << "name: "<< name << endl;
    }
    virtual int GetPay() const
    {
        return 0;
    }
    virtual void ShowSalaryInfo() const
    {}
};

class PermanentWorker : public Employee
{
    int Salary;
public:
    PermanentWorker(char *name, int money)
    : Employee(name), Salary(money){}
    int GetPay() const
    {
        return Salary;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "Salary: "<< GetPay() << endl << endl;
    }
};

class TemporaryWorker : public Employee
{
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(char *name, int pay)
    : Employee(name), workTime(0), payPerHour(pay) {}
    void AddWorkTime(int time) // 일한 시간 추가
    {
        workTime += time;
    }
    int GetPay() const
    {
        return workTime*payPerHour;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: "<< GetPay() << endl << endl;
    }
};

class SalesWorker : public PermanentWorker
{
    int salesResult;    // 월 판매실적
    double bonusRatio;  // 상여금 비율
public:
    SalesWorker(char *name, int money, double ratio)
    : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio){}
    
    virtual void AddSalesResult(int value)
    {
        salesResult += value;
    }
    
    int GetPay() const
    {
        return PermanentWorker::GetPay()
        + (int)(salesResult * bonusRatio);
    }
    
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout <<"salary: "<< GetPay() << endl<< endl;
    }
};

class ForeignSalesWorker : public SalesWorker
{
    double riskRatio; // 위험수당
public:
    ForeignSalesWorker(char *name, int money, double ratio, double risk)
    : SalesWorker(name, money, ratio),riskRatio(risk)  {}
    
    int GetRiskPay() const
    {
        return riskRatio*GetPay();
    }
    
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout << "salary: "<< GetPay() << endl;
        cout << "risk pay: " << GetRiskPay() << endl;
        cout << "sum: " << GetPay() + GetRiskPay() << endl << endl;
    }
};

class EmployeeHandler
{
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0){}
    void AddEmployee(Employee* emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        
        for (int i = 0 ; i< empNum; i++) {
            empList[i]->ShowSalaryInfo();
        }
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        
        for (int i = 0 ; i < empNum; i++) {
            sum += empList[i]->GetPay();
        }
        
        cout << "salary sum: "<< sum << endl;
    }
    ~EmployeeHandler()
    {
        for (int i =0 ; i < empNum; i++) {
            delete empList[i];
        }
    }
};

int main()
{
    // 컨트롤 클래스의 객체 생성
    EmployeeHandler handler;
    
    ForeignSalesWorker *fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    fseller1->AddSalesResult(7000);
    handler.AddEmployee(fseller1);
    
    ForeignSalesWorker *fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    fseller2->AddSalesResult(7000);
    handler.AddEmployee(fseller2);
    
    ForeignSalesWorker *fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
    fseller3->AddSalesResult(7000);
    handler.AddEmployee(fseller3);
   
    handler.ShowAllSalaryInfo();
    
    return 0;
}


