// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer .Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance) 


#include<iostream>
using namespace std;

class Cricketer
{
    public:
    string b_name;
    int b_id,b_run[5];
    int total=0;
    void input()
    {
        cout<<"enter batsman name: ";
        cin>>b_name;
        cout<<"enter batsman id: ";
        cin>>b_id;
        for (int i = 0; i < 5; i++)
        {
            cout<<"enetr match-"<<i+1<<" Run :";
            cin>>b_run[i];
            total+=b_run[i];
        }
    }
    int b_avr=0;

    void ave()
    {
        b_avr=total/5;
    }
};

class Batsman : public Cricketer
{
    public:
    void Display()
    {
        cout<<endl<<"-----Information-----"<<endl;
        cout<<"Name: "<<b_name<<endl;
        cout<<"Id: "<<b_id<<endl;
        cout<<"Average Run: "<<b_avr<<endl;
    }
};

int main()
{
    Batsman obj;
    obj.input();
    obj.ave();
    obj.Display();


    return 0;
}