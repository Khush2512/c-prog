#include<iostream>
using namespace std;
class employee
{
    int salary,eid;
    char name[30],dept[30];
public:
    void scanData()
    {
        cout<<"\nEnter Eid:";
        cin>>eid;
        cout<<"\nEnter Name:";
        cin>>name;
        cout<<"\nEnter Salary:";
        cin>>salary;
        cout<<"\nEnter dept:";
        cin>>dept;
    }
    void dispData()
    {
        cout<<"\n"<<eid<<"\t"<<name<<"\t"<<salary<<"\t"<<dept;
    }
};
int main()
{
    employee e1,e2,e3;
    e1.scanData();
    e2.scanData();
    e3.scanData();

    e1.dispData();
    e2.dispData();
    e3.dispData();
}