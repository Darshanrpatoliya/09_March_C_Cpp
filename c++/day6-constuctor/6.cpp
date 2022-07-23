// COPY CONSTRUCTER

#include<iostream>
using namespace std;

class A
{
    public:
    int p,q;

    A()
    {
        cout<<"this is default constucter"<<endl;
    }

    A(int a,int b)
    {
        p=a;
        q=b;
    }
    A(A &ob)
    {
        p=ob.p;
        q=ob.q;

        cout<<"sum= "<<p+q<<endl;
    }
};

int main()
{
    A obj;
    A obj1(12,8);
    A obj2(obj1);

    return 0;
}