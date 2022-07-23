#include<iostream>
using namespace std;

class A
{
    public:

    char name[50];

    void set()
    {
        cout<<"enter your name:";
        gets(name);
    }
    string get()
    {
        return name;
    }
};

int main()
{
    A obj;

    obj.set();

    cout<<endl<<"your name is :"<<obj.get();

    return 0;
}