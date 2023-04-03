#include <iostream>
using namespace std;
class Calc
{
    int no1,no2,no3,no4,no5;
public:
    Calc(int no1,int no2,int no3,int no4,int no5)
    {
        this->no1=no1;
        this->no2=no2;
        this->no3=no3;
        this->no4=no4;
        this->no5=no5;
    }
    void disp()
    {
        cout<<"\nCalc :"<<no1;
        cout<<"\nCalc :"<<no2;
        cout<<"\nCalc :"<<no3;
        cout<<"\nCalc :"<<no4;
        cout<<"\nCalc :"<<no5;
    }
    friend void operator -(Calc &c);
};
void operator -(Calc &c)
    {
        c.no1=-c.no1;
        c.no2=-c.no2;
        c.no3=-c.no3;
        c.no4=-c.no4;
        c.no5=-c.no5;
    }
int main()
{
    Calc c1(10,20,30,40,50);
    c1.disp();
    -c1;
    cout<<"\nAfter Function call :";
    c1.disp();
}