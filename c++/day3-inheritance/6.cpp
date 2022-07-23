#include <iostream>
using namespace std;

class A
{
public:

    void displayA()
    {
        cout << "this is class A" << endl;
    }
};

class B : public A
{
public:
    void displayB()
    {
        cout << "this is class B" << endl;
    }
};

class C : public A
{
public:
    void displayC()
    {
        cout << "this is class C" << endl;
    }
};

class D : public B, public C
{
public:
    void displayD()
    {
        B::displayA();
        B::displayB();
        C::displayC();
        cout << "this is class D" << endl;
    }
};

int main()
{

    D obj;
    // obj.displayC();
    obj.displayD();

    // A obj1;
    // B obj2;
    // C obj3;


    // obj.displayA();
    // obj.displayB();
    // obj.displayC();

    return 0;
}