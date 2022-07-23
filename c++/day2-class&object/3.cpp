#include<iostream>
using namespace std;

class S
{
    public:

    void sum (int x,int y)
    {
        cout<<"sum="<<x+y;
    }
};

int main()
{
    S ans;

    int a;
    int b;

    cout<<"enter value";
    cin>>a>>b;

    ans.sum(a,b);

    return 0;
}