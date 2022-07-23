// dynamic object

#include<iostream>
using namespace std;

class A
{
    private:
    int a,b;
    
    public:
    void add(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"sum="<<a+b;
    }
};

int main()
{
    A *ptr;
    ptr=new A;

    ptr->add(8,3);
    ptr->display();

    // delete ptr;


    return 0;
}