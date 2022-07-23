// Write a program to find the multiplication values and the cubic values using
// inline function.

#include<iostream>
using namespace std;

class A
{
    public:
    int a,b,p,q,r;
    inline int mul(int a,int b)
    {
        return a*b;
    }

    inline int cub(int p,int q,int r)
    {
        return p*q*r;
    }
};

int main()
{
    int x,y,l,w,h;

    cout<<"enter two number: ";
    cin>>x>>y;

    cout<<"------enter cubic value-----"<<endl;

    cout<<"enter length,width and height: "<<endl;
    cin>>l>>w>>h;

    cout<<"-------ans.------"<<endl;

    A obj;
    cout<<endl<<"multiplication="<<obj.mul(x,y)<<endl;
    cout<<"------ans cubic value-----"<<endl;
    cout<<endl<<"cube value="<<obj.cub(l,w,h);

    return 0;
}