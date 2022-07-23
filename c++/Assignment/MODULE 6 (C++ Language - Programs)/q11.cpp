// Write a program to swap the two numbers using friend function

#include <iostream>
using namespace std;

class A
{
public:
    int x, y;
    void input(int c, int d)
    {
        x = c;
        y = d;
    }

    friend int swap(A);

};

int swap(A change)
{
    int temp;
    temp = change.x;
    change.x = change.y;
    change.y = temp;

    cout<<"after swaping a= "<<change.x<<endl;
    cout<<"after swaping b= "<<change.y<<endl;
}

int main()
{

    int a, b;

    cout << "enter two number: ";
    cin >> a >> b;

    A obj;
    obj.input(a, b);
    swap(obj);

    return 0;
}