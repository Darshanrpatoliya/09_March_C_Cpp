// Write a program of find the simple interest using constructor with dynamic
// initialization. Make constructor like Interest (int principal, int year, int rate)
// Interest (int principal, int year, float rate = 2.5) 

#include<iostream>
using namespace std;

class INTR
{
    public:
    int principal,year;
    float rate=2.5;

    INTR(int cprincipal,int cyear)
    {
        principal=cprincipal;
        year=cyear;
    }
    void display()
    {
        cout<<"your simple interest is : "<<(principal*rate/100)*year;
    }
};

int main()
{
    int princ,yr;
    cout<<"enter principal: ";
    cin>>princ;
    cout<<"enter year: ";
    cin>>yr;

    INTR obj(princ,yr);
    obj.display();

    return 0;
}