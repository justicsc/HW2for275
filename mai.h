//
// Created by justi on 10/22/2021.
//
#include<iostream>
#include<string>
using namespace std;

#ifndef JUSTICSC_HW2_Q1_MAI_H
#define JUSTICSC_HW2_Q1_MAI_H
struct Check{
    int CheckNum;
    string Checkmemo;
    int CheckAmount;
    bool operator >(const Check& bal){
         if(CheckAmount > bal){
             cout<<"This amount is greater"<<endl;
             return true;
         }
         return false;
         cout<<"This amount is lesser"<<endl;
     };

    ostream& operator << (const Check& CheckAmount);

};


class CheckBook{
public:
    CheckBook():balance(0), numofChecks(0), checkBookSize(4){}  //default contructor which sets balance to 0 and numOFChe to 0 and book to 4
    CheckBook(float bal, int numC, int bookS):balance(0), numofChecks(0), checkBookSize(2){}
    void deposit(){balance++;}

    int lastDeposit();
    CheckBook(const CheckBook &c1);
    CheckBook& operator=(const CheckBook &c1);
    ~CheckBook();
    const float getBalance(){return balance;} //will return the balance
    const int getNumOfChecks(){return numofChecks;} //will return the numofchecks
    const int getcheckBookSize(){return checkBookSize;} //will return the checkbooksize
    float setBalance(float bal){balance=bal;} //will set balance to bal
    int setNumOfChecks(int numC){numofChecks=numC;}
    int setcheckBookSize(int bookS){checkBookSize=bookS;}
    void displayChecks(){cout<<numofChecks <<endl;}  //will display the checks

    bool writeCheck(float c_amount ){
        if(c_amount <= balance){  //will check if c_amount is <= balance
                               //will
            //Check CheckMemo;
            balance++;  //update balance
            numofChecks++; //update num of checks
            return true;
        }
        return false;

    }
private:
    Check *chkPtr(); // A pointer with check data type
    int numofChecks;
    int checkBookSize;
    float balance;


};
#endif //JUSTICSC_HW2_Q1_MAI_H
