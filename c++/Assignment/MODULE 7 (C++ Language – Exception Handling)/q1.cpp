// Create an example of use delete and new operator

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
        cout<<endl<<"a+b= "<<a+b<<endl;
    }
};

int main()
{
    A* ptr;
    ptr=new A;

    ptr->add(12,6);
    ptr->display();

    delete ptr;

    return 0;
}