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
    Student s,*ptr;

    ptr=&s;

    ptr->scan();
    ptr->disp();
}