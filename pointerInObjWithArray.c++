#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    int rno,std;
    char name[20];
public:
    void scan()
    {
        cout<<"\nEnter Rno";
        cin>>rno;
        cout<<"\nEnter Name";
        cin>>name;
        cout<<"\nEnter std";
        cin>>std;
    }
    void disp()
    {
        cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
    }
};
int main()
{
    Student s[5],*ptr;
    int i;
    ptr=&s[0];
    for (i = 0; i <5; i++)
    {   
        ptr->scan();  
        ptr++;  
    }
    ptr=&s[0];
    for (i = 0; i <5; i++)
    {
        ptr->disp();   
        ptr++;
    }
}