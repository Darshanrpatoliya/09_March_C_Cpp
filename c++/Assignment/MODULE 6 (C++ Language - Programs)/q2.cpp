// Define a class to represent lecture details. Include the following members and
// the program should handle at least details of 5 lecturer.
//  Data members:
//      a) Name of the lecturer
//      b) Name of the subject
//      c) Name of course
//      d) Number of lecturers
//  Data functions:
//      a) To assign initial values
//      b) To add a lecture details
//      c) To display name and lecture details

#include<iostream>
using namespace std;

class DATA
{
    public:
    string lec="Science in Daily Life";
    string sub="Science";
    string cor="part-1";
    int num_lec=6;
    void displayDATA()
    {
        cout<<"Name of the lecturer: "<<lec<<endl;
        cout<<"Name of the subject: "<<sub<<endl;
        cout<<"Name of course: "<<cor<<endl;
        cout<<"Number of lecturer: "<<num_lec<<endl;
    }
    string lec2;
    string sub2;
    string cor2;
    int num_lec2;
    void input()
    {
        cout<<"Enter Name of the lecturer: ";
        cin>>lec2;
        cout<<"Enter Name of the subject: ";
        cin>>sub2;
        cout<<"Enter Name of course: ";
        cin>>cor2;
        cout<<"Enter Number of lecturer: ";
        cin>>num_lec2;
    }
    void display2()
    {
        cout<<"Name of the lecturer: "<<lec2<<endl;
        cout<<"Name of the subject: "<<sub2<<endl;
        cout<<"Name of course: "<<cor2<<endl;
        cout<<"Number of lecturer: "<<num_lec2<<endl;
    }
};

int main()
{
    DATA obj1;
    cout<<"----------Details of data Member---------"<<endl;
    obj1.displayDATA();
    cout<<"----------Enter Details of data Function---------"<<endl;
    obj1.input();
    cout<<"----------Details of data Function---------"<<endl;
    obj1.display2();

    return 0;
}