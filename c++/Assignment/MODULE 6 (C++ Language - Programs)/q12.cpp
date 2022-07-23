//  Write a program of to swap the two values using templates

#include<iostream>
using namespace std;

template <class T>

class A
{
    public:
    T a,b;

    void input()
    {
        cout<<"enter two number:";
        cin>>a>>b;
    }
    void swap()
    {
        T temp;
        temp=a;
        a=b;
        b=temp;

        cout<<"after swaping a= "<<a<<endl;
        cout<<"after swaping b= "<<b<<endl;
    }
};

int main()
{
    A<float>obj;
    obj.input();
    obj.swap();

    // A<float>obj2;
    // obj2.input();
    // obj2.swap();

    return 0;
}