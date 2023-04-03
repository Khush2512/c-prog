#include <iostream>
using namespace std;
class Calc
{
    int no1;
public:
    Calc(int no1)
    {
        this->no1=no1;
    }
    void disp()
    {
        cout<<"\nCalc : No1 : "<<no1<<"-----"<<this;
    }
    Calc operator +(Calc &c2)
    {
        Calc temp(0);
        temp.no1=no1+c2.no1;
        return temp;
    }
};
int main()
{
    Calc c1(20),c2(10),c3(0);
    c1.disp();
    c2.disp();
    c3=c1+c2;
    c3.disp();
}