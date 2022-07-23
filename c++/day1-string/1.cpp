#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[50];

    cout<<"enter name:";
    gets(name);

    int length=strlen(name);

    for (int i = length-1; i >= 0; i--)
    {
        cout<<name[i];
    }
    
    return 0;
}