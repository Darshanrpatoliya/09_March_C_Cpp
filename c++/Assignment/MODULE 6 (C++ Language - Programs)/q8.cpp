// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance) 

#include<iostream>
#include<string.h>
using namespace std;

class A
{
    public:
    string c_name;
    int c_age;
    void inputA(string name,int age)
    {
        c_name=name;     //or  // this->c_name=name;
        c_age=age;
    }
};
class B
{
    public:
    int c_per;
    void inputB(int per)
    {
        c_per=per;
    }
};
class C : public A ,public B
{
    public:
    int c_salary;
    void inputC(int sal)
    {
        c_salary=sal;
    }

    void display()
    {
        cout<<endl<<"--------Information----------"<<endl;

        cout<<"Name: "<<c_name<<endl;
        cout<<"Age: "<<c_age<<endl;
        cout<<"percentege: "<<c_per<<"%"<<endl;
        cout<<"Teacher Salary: "<<c_salary<<endl;
    }
};

int main()
{
    C obj1;
    obj1.inputA("darshan",19);
    obj1.inputB(80);
    obj1.inputC(45000);
    obj1.display();


    return 0;
}