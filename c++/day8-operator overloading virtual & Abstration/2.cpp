//virtual base class

#include<iostream>
using namespace std;

class A
{
    public:
    int a=12, b=2;
    void displayA()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};

class B: virtual public A
{
    public:
    int ans1=a+b;
    void displayB()
    {
        cout<<"a+b= "<<ans1<<endl;
    }
};

class C : virtual public A
{
    public:
    int ans2=a*b;
    void displayC()
    {
        cout<<"a*b= "<<ans2<<endl;
    }
};

class D: public B,public C
{
    public:
    void displayD()
    {
        cout<<"ans2-ans1= "<<ans2-ans1<<endl;
    }
};

int main()
{
    D obj;

    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();

    return 0;
}