#include <iostream>
#include <string>

using namespace std;

struct Check{
    int CheckNum;
    string Checkmemo;
    int CheckAmount;
   /* bool operator >(const Check& bal){
        if(CheckAmount > bal){
            cout<<"This amount is greater"<<endl;
            return true;
        }
        return false;
        cout<<"This amount is lesser"<<endl;
    };
*/
   ostream& operator << (const Check& CheckAmount);

};

const int N =5;

class CheckBook{
public:
    CheckBook():balance(0), numofChecks(0), checkBookSize(4){}
    void deposit();
    Check *chkPtr();
    int lastDeposit();
    float getBalance(){return balance;}
    int getNumOfChecks(){return numofChecks;}
    int getcheckBookSize(){return checkBookSize;}
    float setBalance(float bal){balance=bal;}
    int setNumOfChecks(int numC){numofChecks=numC;}
    int setcheckBookSize(int bookS){checkBookSize=bookS;}
    bool writeCheck(float c_amount ){
        if(c_amount < balance){

         return true;
        }
        return false;

    }
private:
   int numofChecks;
   int checkBookSize;
   float balance;


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

