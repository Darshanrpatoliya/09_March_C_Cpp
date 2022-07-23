#include<iostream>
using namespace std;

class B
{
    private:
    float a,b;
    public:
    B()
    {
        cout<<"this is A"<<endl;
    }
    B(float a1,float b1)
    {
        a=a1;
        b=b1;
    }
    B(int x1,int y1,int z1)
    {
        cout<<"x= "<<x1<<endl;
        cout<<"y= "<<y1<<endl;
        cout<<"z= "<<z1<<endl;
    }
    
    void display()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};

int main()
{
    B obj1;
    B obj(12.15,85.6);
    B obj3(7,8,9);

    obj.display();

    return 0;
}