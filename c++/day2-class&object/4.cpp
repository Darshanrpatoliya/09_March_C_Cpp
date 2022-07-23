#include<iostream>
using namespace std;

class S
{
    public:

    void sum(int a,int b)
    {
        cout<<"sum="<<a+b<<endl;
    }
};

class M
{
    public:

    void mul(int a,int b)
    {
        cout<<"mul="<<a*b;
    }
};

int main()
{
    S ans1;
    M ans2;

    int a,b;

    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

    ans1.sum(a,b);
    ans2.mul(a,b);


    
    return 0;
}