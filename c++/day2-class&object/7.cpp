#include<iostream>
#include<cstring>

using namespace std;

class A
{
    public:
    int id;
    int marks[5];
    string name;

    void input()
    {
        cout<<"enter id: ";
        cin>>id;
        cout<<"enetr name: ";
        cin>>name;
        for (int i = 0; i < 5; i++)
        {
            cout<<"enetr subject"<<i+1<<" marks: ";
            cin>>marks[i];
        }
        
    }

    void output()
    {
        cout<<"id:"<<id<<endl;
        
        cout<<"name:"<<name<<endl;

        for (int i = 0; i < 5; i++)
        {
            cout<<"sub-"<<i+1<<" = "<<marks[i]<<endl;
        }
        
    }
};

int main()
{
    A obj;

    A *ptr;

    ptr=&obj;

    ptr->input();
    ptr->output();

    return 0;
}