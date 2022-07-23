#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"this is cunstructer"<<endl;
    }
    ~A()
    {
        cout<<"this is distructer"<<endl;
    }
};

int main()
{
    A obj;

    return 0;
}