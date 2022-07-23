// OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class A
{
    public:
    
    int a=34,b=8;
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }

    void display(int x)
    {
        cout<<"x= "<<x<<endl;
    }
};

int main()
{
    A obj;

    obj.display();
    obj.display(100);

    return 0;
}