// Create a class account that stores customer name, account number and
// type of account. From this derive classes curr_acc and sav_acct to make
// them more specific to their requirements Include necessary member
// functions in order to achieve the following tasks
// a) Accepts deposit from a customer and update balance.
// b) Display the balance.
// c) Compute and deposit interest.
// d) Permit withdraws and updates the balance.
// e) Check for the minimum balance, impose penalty, necessary and
// update the balance.

#include <iostream>
using namespace std;

class ACCOUNT
{
public:
    string a_name = "abc";
    int a_number = 56790238;
    
    void Adisplay()
    {
        cout << "Account holder Name: " << a_name << endl;
        cout << "Account Number: " << a_number << endl;
        // cout<<"Name: "<<a_name<<endl;
    }
};

class sav_acct : public ACCOUNT
{
public:
    int bal = 50000;
    int sav_add;
    int sav_with;
    string a_type = "Saving";

    void sav_deposite()
    {
        cout<<endl<<"------------"<<a_type<<"----------"<<endl;
        cout << "enter deposite ammount: ";
        cin >> sav_add;
        bal += sav_add;
        cout << endl
             << "your balance is : " << bal << endl;
        cout << "your deposite interest is: " << (sav_add * 2.4 / 100) * 1 << endl;
    }
    void sav_withdrow()
    {
        cout << "enter withdrow ammount: ";
        cin >> sav_with;
        if (bal<sav_with)
        {
            cout<<"sorry,you can not withdrow because your balance is "<<bal<<endl;
        }
        else
        {
            bal -= sav_with;
            cout
                 << "your balance is : " << bal << endl;
        }
    }
    void min_bal()
    {
        if (bal < 1000)
        {
            bal = bal - 100;
            cout
                 << "your balance is : " << bal << endl;
        }
        else
        {
            cout << endl
                 << "your balance is : " << bal << endl;
        }
    }
};

class curr_acc : public ACCOUNT
{
public:
    int bal = 375000;
    int cur_add;
    int cur_with;
    string a_type = "Current";

    void cur_deposite()
    {
        cout<<endl<<"------------"<<a_type<<"----------"<<endl;
        cout << "enter deposite ammount: ";
        cin >> cur_add;
        bal += cur_add;
        cout << endl
             << "your balance is : " << bal << endl;
        cout << "your deposite interest is: 0" << endl;
    }
    void cur_withdrow()
    {   
        cout << "enter withdrow ammount: ";
        cin >> cur_with;
        if (bal<cur_with)
        {
            cout<<"sorry,you can not withdrow because your balance is "<<bal<<endl;
        }
        else
        {
            bal -= cur_with;
            cout << endl
                 << "your balance is : " << bal << endl;
        }
        
    }
    void min_bal()
    {
        if (bal < 10000)
        {
            bal = bal - 1000;
            cout << endl
                 << "your balance is : " << bal << endl;
        }
        else
        {
            cout << endl
                 << "your balance is : " << bal << endl;
        }
    }
};

int main()
{
    cout<<endl<<"---------Account Information----------"<<endl;
    sav_acct savobj;
    savobj.Adisplay();
    savobj.sav_deposite();
    savobj.sav_withdrow();
    savobj.min_bal();

    cout<<endl<<"---------Account Information----------"<<endl;
    curr_acc curobj;
    curobj.Adisplay();
    curobj.cur_deposite();
    curobj.cur_withdrow();
    curobj.min_bal();

    return 0;
}