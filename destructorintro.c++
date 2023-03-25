#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    int id;
    char name[50];
    int std;
public:
    void sacn()
    {
        cout<<"\nEnter Id";
        cin>>id;
        cout<<"\nEnter Name";
        cin>>name;
        cout<<"\nEnter std";
        cin>>std;
    }
    void disp()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<std;
    }
    ~Student()
    {
        cout<<"\nDestructor Called--->"<<this;
    }
};
int main()
{
    Student s1,s2,s3;

}