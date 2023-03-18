#include <iostream>
#include<string.h>
using namespace std;
class Employees
{
    int id;
    char name[50];
    int salary;
    char desg[50];
    char org[50];
public:
    Employees()
    {
        id = 1;
        strcpy(name,"Khush");
        salary=32000;
        strcpy(desg,"CEO");
        strcpy(org,"Royal");
    }
    Employees(int i,char n[],int sal,char de[],char o[])
    {
        id = i;
        strcpy(name,n);
        salary=sal;
        strcpy(desg,de);
        strcpy(org,o);
    }
    Employees(Employees &e)
    {
        id = e.id;
        strcpy(name,e.name);
        salary=e.salary;
        strcpy(desg,e.desg);
        strcpy(org,e.org);
    }
    void disp()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<desg<<"\t"<<org;
    }
};
int main()
{
    Employees e1,e2(2,"lamya",30000,"dev","royal"),e3(e2);
    e1.disp();
    e2.disp();
    e3.disp();
}