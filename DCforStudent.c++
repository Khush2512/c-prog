#include <iostream>
#include<string.h>
using namespace std;
class Student
{
    int rno;
    char name[50];
    int std;
public:
    //Default Constructor
    Student()
    {
        cout<<"\nStart DC::"<<this;
        rno=1;
        strcpy(name,"Khush");
        std=12;
        cout<<"\nEnd DC::"<<this;
    }
    void disp()
    {
        cout<<"\nRno:"<<rno<<"\tName:"<<name<<"\tStd:"<<std;
    }
};
int main()
{
    Student s1,s2,s3;
    s1.disp();
    s2.disp();
    s3.disp();
}