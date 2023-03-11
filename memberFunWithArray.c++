#include<iostream>
using namespace std;
class Employees
{
private:
    int id;
    char name[50];
    int salary;
public:
    void scanData()
    {
        cout<<"\nEnter Id";
        cin>>id;
        cout<<"\nEnter Name";
        cin>>name;
        cout<<"\nEnter Salary";
        cin>>salary;
    }
    void dispData()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary;
    }
};
int main()
{
    Employees e[5];
    int i;
    for(i=0;i<5;i++)
    {
        e[i].scanData();
    }
    for(i=0;i<5;i++)
    {
        e[i].dispData();
    }
}