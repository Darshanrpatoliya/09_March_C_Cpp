#include<iostream>
using namespace std;

class IN
{
    public:
    int c;
    void input(int a,int b)
    {
        c=a+b;
    }

};

class OUT : public IN
{
    public:
    void output()
    {
        cout<<c;
    }
};

int main()
{
    int a,b;
    cout<<"enetr value: ";
    cin>>a>>b;

    OUT obj;
    obj.input(a,b);
    obj.output();
    

    return 0;
}