// virtual function (method)
#include <iostream>
using namespace std;

class A
{
public:
    virtual void display() = 0;
};

class B : public A
{
public:
    void display()
    {
        cout << "this is class B"<<endl;
    }
};
class C : public A
{
public:
    void display()
    {
        cout << "this is class C";
    }
};

int main()
{
    B obj;
    obj.display();

    C obj2;
    obj2.display();


    return 0;
}