// Assume that a bank maintains two kinds of accounts for customer, one called
// as saving account and other as current accounts provides Simple interest and
// withdraw facilities but no Cheque book facility.
// a) The current account provides Cheque book facility but no interest.
// b) Current account holders should maintain a minimum balance and if the
// balance falls below this level a service charges is imposed

#include<iostream>
using namespace std;

class BANK
{
    public:
    int atm_charge=149;
    int c_charge=250;

    void same()
    {
        cout<<endl<<"-----Required------"<<endl;
        cout<<"account holder name"<<endl;
        cout<<"Aadhar card"<<endl;
        cout<<"Pan card"<<endl;
        cout<<"ATM Charges: "<<atm_charge<<" Ruppes /Anu"<<endl;
        cout<<"Credit card Charges: "<<c_charge<<" Ruppes /Anu"<<endl;
        cout<<"joint account facility"<<endl;
    }
};
class SAVINGS : public BANK
{
    public:
    float intr=2.4;
    int tra=50;
    int min_bal=1000;
    void saving()
    {
        cout<<"Earn Interest on your savings: "<<intr<<"%"<<endl;
        cout<<"Limited transactions of number : "<<tra<<endl;
        cout<<"Required min. Balance : "<<min_bal<<endl;
        cout<<"use for : salary accounts"<<endl;
        cout<<"Suitable for : Individuals"<<endl; 
    }
};

class CURRENT : public BANK
{
    public:
    int intr=0;
    // int tra=50;
    int min_bal=10000;
    void current()
    {
        cout<<"Earn Interest on your savings: "<<intr<<"%"<<endl;
        cout<<"Limited transactions of number : unlimited"<<endl;
        cout<<"Required min. Balance : "<<min_bal<<endl;
        cout<<"use for : paying bills and business transactions"<<endl;
        cout<<"Suitable for : Business People"<<endl;
        cout<<"Cheque book : Yes"<<endl;
    }
};

int main()
{
    SAVINGS sav;
    CURRENT cur;

    int press;
    cout<<"for \n 1.About Saving account \n 2.About Current "<<endl;
    cin>>press;

    if (press==1)
    {
        sav.same();
        sav.saving();
    }
    else if(press==2)
    {
        cur.same();
        cur.current();
    }
    else
    {
        cout<<"please enter only 1 or 2"<<endl;
    }
    


    return 0;
}