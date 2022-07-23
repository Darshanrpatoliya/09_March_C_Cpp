// METHOD OVERRIDING

#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    void input()
    {
        cout << "enter two number: " << endl;
        cin >> a >> b;
    }

    void display()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        A::display();
        cout << a + b;
    }
};

int main()
{
    B obj;
    obj.input();
    obj.display();

    return 0;
}