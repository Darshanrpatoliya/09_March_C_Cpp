// Define a class to represent a bank account. Include the following members:
/*  a) Name of the depositor -
    b) Account Number
    c) Type of Account -
    d) Balance amount in the account -
    e) Member Functions -
    f) To assign values -
    g) To deposited an amount -
    h) To withdraw an amount after checking balance -
    i) To display name and balance
*/    

#include<iostream>
using namespace std;

class DATA
{
    public:
    int a_number,bal;
    string depositor,a_type;
    
    DATA(string cdepositor,int ca_number,string ca_type,int cbal)
    {
        depositor=cdepositor;
        a_number=ca_number;
        a_type=ca_type;
        bal=cbal;
    }

    int indepo;
    int inwith;
    void deposited()
    {
        cout<<"Enetr deposited an amount: ";
        cin>>indepo;
        bal+=indepo;
    }
    void withdraw()
    {
        cout<<"Enetr withdraw an amount: ";
        cin>>inwith;
        if (inwith>bal)
        {
            cout<<"sorry you can not money withdraw your balance is "<<bal<<endl;
        }
        else
        {
            bal-=inwith;
        }
    }

    void display()
    {
        cout<<"-----Now Your bank details (Recept)-----\n";
        cout<<"Name of custumer: "<<depositor<<endl;
        cout<<"Balance amount in the account: "<<bal<<endl;
    }
};

int main()
{
    int anum,balance;
    string name,atype;

    cout<<"-----Enter your bank details-----\n";

    cout<<"enter Name of the depositor: ";
    cin>>name;
    cout<<"enter Account Number: ";
    cin>>anum;
    cout<<"enter Type of Account: ";
    cin>>atype;
    cout<<"enter Balance amount in the account: ";
    cin>>balance;

    DATA obj1(name,anum,atype,balance);

    
    obj1.deposited();
    obj1.withdraw();
    obj1.display();

    return 0;
}