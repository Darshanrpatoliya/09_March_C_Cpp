#include<iostream>
using namespace std;

class M
{
    public:

    int a,b;

    void mul()
    {
        cout<<"enter number:";
        cin>>a>>b;

        cout<<a*b;
    }

};

int main()
{
    M ans;

    ans.mul();

    return 0;
}