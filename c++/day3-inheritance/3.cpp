#include<iostream>
using namespace std;

class IN1
{
    public :
    int a;
    void input1()
    {
        cout<<"enter value of a :"<<endl;
        cin>>a;
    }
};

class IN2
{
    public :
    int b;
    void input2()
    {
        cout<<"enter value of b :"<<endl;
        cin>>b;
    }
};

class OUT : public IN1,public IN2
{
    public :
    void output()
    {
        cout<<a*b;
    }
};



int main()
{
    OUT obj;
    obj.input1();
    obj.input2();
    obj.output();

    return 0;
}