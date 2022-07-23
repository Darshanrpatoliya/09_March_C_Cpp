// this pointer

#include<iostream>
using namespace std;

class A
{
    private:
    int a;

    public:
    void input(int x)
    {
        this-> a=x;
    }
    void display()
    {
        cout<<"a= "<<a;
    }
};

int main()
{
    A obj;
    obj.input(115);
    obj.display();

    return 0;
}