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

class Account
{
public:
    int AccountN;
    string Name;
    int balance;
};

// 계좌번호 입력 순서
int order = 0;
// 입력 Account
Account Acc[100];

void MakeAccount()
{
    cout << "[계좌개설]"<< endl;
    cout << "계좌ID:" ;
    cin >> Acc[order].AccountN;
    cout << "이 름:";
    cin >> Acc[order].Name;
    cout << "입금액:";
    cin >> Acc[order++].balance;
}

void Deposit()
{
    int i = 0; bool conti;
    int searchID; int inpMoney;
    cout << "[입 금]" <<endl;
    while (1) {
        cout << "계좌ID: ";
        cin >> searchID;
        
        while(1)
        {
            if (Acc[i].AccountN == searchID ) {
                conti = true;
                break;
            }
            else if (i == order)
            {
                cout <<"계좌ID를 찾을 수 없습니다. 다시 입력해주세요." << endl;
                conti = false;
                break;
            }
            i++;
        }
        if (conti == true)
            break;
    }

    cout << "입금액: ";
    cin >> inpMoney;
    Acc[i].balance+=inpMoney;
    cout << "입금완료";
}

void WithDraw()
{
    int i = 0;
    int searchID; int outMoney;
    cout << "[출 금]" <<endl;
    cout << "계좌ID: ";
    cin >> searchID;
    while (1) {
        if (Acc[i].AccountN == searchID ) {
            i++;
            break;
        }
        else if (i == order)
        {
            cout <<"계좌ID를 찾을 수 없습니다. 다시 입력해주세요." << endl;
        }
    }
    cout << "출금액: ";
    cin >> outMoney;
    Acc[i].balance+=outMoney;
    cout << "출금완료";
}

void Print()
{
    for (int i = 0 ; i < order; i++) {
        cout << "ID " << i+1 << "order" << endl;
        cout << "계좌ID: "<< Acc[i].AccountN;
        cout << "이 름:" << Acc[i].Name;
        cout << "잔 액:" << Acc[i].balance;
        cout <<endl;
    }
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
