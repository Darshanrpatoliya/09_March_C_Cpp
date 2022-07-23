#include<iostream>
using namespace std;

class A
{
    public:
    void displayA()
    {
        cout<<"this is class A"<<endl;
    }
};

class B : public A
{
    public:
    void displayB()
    {
        cout<<"this is class B"<<endl;
    }
};

class C : public A
{
    public:
    void displayC()
    {
        cout<<"this is class C"<<endl;
    }
};

class D : public A
{
    public:
    void displayD()
    {
        cout<<"this is class D"<<endl;
    }
};

int main()
{
    B obj1;
    C obj2;
    D obj3;

    obj1.displayA();
    obj1.displayB();

    obj2.displayA();
    obj2.displayC();

    obj3.displayA();
    obj3.displayD();

    return 0;
}