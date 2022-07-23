//Aggregation

#include<iostream>
using namespace std;

class ENG
{
    public:
        int id;
        string type;
        float size;

        ENG(int id,string type,float size)
        {
            this->id=id;
            this->type=type;
            this->size=size;
        }

};

class CAR
{
    public:
    int number;
    string name;

    ENG *engin;

    CAR(int number,string name,ENG *engin)
    {
        this->number=number;
        this->name=name;
        this->engin=engin;
    }

    void display()
    {
        cout<<endl<<"-----car information-----"<<endl;
        cout<<"number= "<<number<<endl;
        cout<<"name= "<<name<<endl;
        cout<<"-------engin information---------"<<endl<<endl;
        cout<<"id= "<<engin->id<<endl;
        cout<<"type= "<<engin->type<<endl;
        cout<<"size= "<<engin->size<<endl;
    }
};

int main()
{
    int id,number;
    string type,name;
    float size;

    cout<<"-----enter engin info-----"<<endl;
    cout<<"enter car engin id: ";
    cin>>id;
    cout<<"enter car engin type: ";
    cin>>type;
    cout<<"enter car engin size: ";
    cin>>size;

    cout<<"-----enter car info-----"<<endl;
    cout<<"enter car number: ";
    cin>>number;
    cout<<"enter car name: ";
    cin>>name;

    ENG obj1(id,type,size);
    CAR obj2(number,name,&obj1);

    obj2.display();


    return 0;
}