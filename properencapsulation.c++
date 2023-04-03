#include <iostream>
#include<string.h>
using namespace std;
class student
{
    int rno,std;
    char name[30];
public:
    void setRno(int r)
    {
        rno =r;
    }
    void setName(char n[30])
    {
        strcpy(name,n);
    }
    void setStd(int s)
    {
        std=s;
    }
    int getRno()
    {
        return rno;
    }
    char* getName()
    {
        char *p=&name[0];
        return p;
    }
    int getStd()
    {
        return std;
    }
    void disp()
    {
        cout<<"\nRno :"<<getRno();
        cout<<"\nName :"<<getName();
        cout<<"\nStd :"<<getStd();
    }
};
int main()
{
    student s;
    s.setRno(1);
    s.setName("khush");
    s.setStd(12);
    s.disp();
    // s.getRno();
    // s.getName();
    // s.getStd();
}