#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    BankDeposit(){} // very imp
    BankDeposit(int a, int b, int c);
    BankDeposit(int a, int b, float c);
    void show();
};




BankDeposit :: BankDeposit(int a , int b , float c)
{
    principal = a;
    year = b;
    interestrate = c;
    returnvalue = principal;
    for (int i = 0; i < b; i++)
    {
        returnvalue = returnvalue * (1 + interestrate); // important 
    }
    
}

BankDeposit :: BankDeposit(int a , int b , int c)
{
    principal= a;
    year= b;
    interestrate= float(c)/100;
    returnvalue = principal;
    for (int i = 0; i < b; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
    
}


void BankDeposit :: show(){
    cout<<endl<<"Your Principal Amount is : "<<principal<<" after "<<year<<" it becomes :"<<returnvalue<<endl;
}

int main(){
    BankDeposit q1,q2,q3;
    int p,q;
    int r;
    float R;
    int z = 3;

    cout<<"Enter Your  Principal amout , Years , Interest Rate :"<<endl;
    cin>>p>>q>>r;
    q1=BankDeposit(p,q,r);
    q1.show();

    cout<<"Enter Your  Principal amout , Years , Interest Rate :"<<endl;
    cin>>p>>q>>R;
    q2=BankDeposit(p,q,R);
    q2.show();

    return 0;
}