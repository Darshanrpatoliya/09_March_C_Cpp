#include<iostream>
using namespace std;

template <class T>

class A
{
    public:
    T a,b;
    void input()
    {
        cout<<"Enter two number: ";
        cin>>a>>b;
    }
    void add()
    {
        cout<<"-------Ans------"<<endl;
        cout<<"addition: "<<a+b<<endl;
    }
};

int main()
{
    A <int>obj1;
    obj1.input();
    obj1.add();

    A <float>obj2;
    obj2.input();
    obj2.add();

    return 0;
}