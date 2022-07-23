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

int main()
{
    B obj1;

    obj1.displayA();
    obj1.displayB();

    return 0;
}