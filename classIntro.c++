#include<iostream>
#include<string.h>
using namespace std;
class Student
{

public:
    int rno;
    char name[50];
    int std;
};
int main()
{
    Student s;
    cout<<"\nEnter Rno:";
    cin>>s.rno;
    cout<<"\nEnter Name:";
    cin>>s.name;
    cout<<"\nEnter Std:";
    cin>>s.std;

    cout<<"\n"<<s.rno<<"\t"<<s.name<<"\t"<<s.std;

}