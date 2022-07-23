#include<iostream>
using namespace std;

template <class T>

class A
{
    public:
    T a,b;
    void input()
    {
        cout<<"enter two number: ";
        cin>>a>>b;
    }

    void add();
    void mul();
};

template <class T>
void A<T>::add()
{
    cout<<"Adition= "<<a+b<<endl;
}

template <class T>
void A<T>::mul()
{
    cout<<"multipalication= "<<a*b;
}


int main()
{
    cout<<endl<<"----------"<<endl;

    A<int>obj1;
    obj1.input();
    obj1.add();
    obj1.mul();

    cout<<endl<<"----------"<<endl;

    A<float>obj2;
    obj2.input();
    obj2.add();
    obj2.mul();
    
    return 0;
}