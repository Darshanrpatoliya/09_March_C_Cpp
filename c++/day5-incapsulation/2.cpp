#include<iostream>
using namespace std;

class A
{
    public:
    int num;
    int num2;
    void set()
    {
        cout<<"enter number 1:";
        cin>>num;
        cout<<"enter number 2:";
        cin>>num2;
    }
    int get()
    {
        return num+num2;
    }
};

int main()
{
    A obj;

    obj.set();
    cout<<"sum is: "<<obj.get();

    return 0;
}