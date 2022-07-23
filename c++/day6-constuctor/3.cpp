#include<iostream>
#include<cstring>

using namespace std;

class A
{
    private:
    int a;
    char name[50];

    public:
    A(int x,char name2[50])
    {
        a=x;
        strcpy(name,name2);
    }
    void display()
    {
        cout<<"num= "<<a<<endl;
        cout<<"name= "<<name;
    }
};

int main()
{
    A obj(101,"darshan");
    obj.display();

    return 0;
}