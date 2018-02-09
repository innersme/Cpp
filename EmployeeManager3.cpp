//
//  EmployeeManager1.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 1. 22..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

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
    : PermanentWorker(name, money), saleResult(0), bonusRatio(ratio){}
    
    void AddSalesResult(int value)
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
}


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
        /*
        for (int i = 0 ; i< empNum; i++) {
            empList[i]->ShowSalaryInfo();
        }
         */
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        /*
        for (int i = 0 ; i < empNum; i++) {
            sum += empList[i]->GetPay();
        }
         */
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
    
    // 정규직 등록
    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    
    // 임시직 등록
    TemporaryWorker * alba = new TemporaryWorker("Jung", 700);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);
    
    //영업직 등록
    SalesWorker * seller = new SalesWorker("Hong", 1000, 0.1);
    seller->AddSalesResult(7000);
    handler.AddEmployee(seller);
    
    handler.ShowAllSalaryInfo();
    
    handler.ShowTotalSalary();
    
    return 0;
}
