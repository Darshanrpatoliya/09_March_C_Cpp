#include<iostream>
using namespace std;

class IN
{
    public :
    int a,b;
    void input()
    {
        cout<<"enter value :"<<endl;
        cin>>a>>b;
    }
};

class OP : public IN
{
    public :
    int c;
    void operation()
    {
        c=a*b;
    }
};

class OUT : public OP
{
    public :
    void output()
    {
        cout<<c;
    }
};



int main()
{
    OUT obj;
    obj.input();
    obj.operation();
    obj.output();

    return 0;
}