#include<iostream>
using namespace std;

class A
{
    public:

    int a=12;

    void display()
    {
        cout<<"a="<<a<<endl;
    }

};

int main()
{
    A obj;

    obj.display();

    return 0;
}