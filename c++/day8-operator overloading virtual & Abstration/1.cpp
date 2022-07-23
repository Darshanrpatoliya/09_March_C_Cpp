// operator overloading

#include<iostream>
using namespace std;

class A
{
    int first,second;

    public:

    A(int a=0,int b=0)
    {
        first=a;
        second=b;
    }

    A operator+(A &obj)
    {
        A op;

        op.first=first+obj.first;
        op.second=second+obj.second;

        return op;
    }

    void display()
    {
        cout<<"addition of first digit= "<<first<<endl;
        cout<<"addition of second digit= "<<second;
    }
};

int main()
{
    A obj1(2,3);
    A obj2(5,8);

    A obj3=obj1+obj2;

    obj3.display();


    return 0;
}