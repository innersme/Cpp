//
//  BankingSystemVer01.cpp
//  Cpp
//
//  Created by MJMacBook on 2018. 2. 9..
//  Copyright © 2018년 MJMacBook. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

enum {MAKE = 1, DEPOSIT, WITHDRAW, PRINT, EXIT};

// 계좌번호 입력 순서
int order = 0;

class Account
{
public:
    int AccountN[12];
    char Name[10];
    int balance[10];
};

void MakeAccount()
{
    cout << "[입 금]"<< endl;
    
}

void Deposit()
{
    
}

void WithDraw()
{
    
}

void Print()
{
    
}
void Menu()
{
    cout <<" ----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" <<endl;
    cout << "5. 프로그램 종료" << endl;
}

int main()
{
    int select;

    while (1) {
        Menu();
        cout << "선택: ";
        cin >> select;
        cout << endl;
        
        switch (select) {
            case MAKE:
                MakeAccount();
                break;
                
            case DEPOSIT:
                Deposit();
                break;
                
            case WITHDRAW:
                WithDraw();
                break;
                
            case PRINT:
                Print();
                break;
                
            case EXIT:
                return 0;
                
            default:
                cout << "다시 입력하세요. "<< endl;
                break;
        }
    }
    return 0;
}
