#include<iostream>
using namespace std;

template <class T>

T add(T a,T b)
{
    return a+b;
}

int main()
{
    cout<<"Adition: "<<add<float>(45,15);

    return 0;
}