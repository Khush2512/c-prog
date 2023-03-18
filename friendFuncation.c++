#include <iostream>
#include <string.h>
using namespace std;
class Calc
{
private:
    int no1,no2;
public:
    void set(int n1,int n2)
    {
        no1=n1;
        no2=n2;
    }
    void disp()
    {
        cout<<"\nNo1: "<<no1<<"\tNo2: "<<no2;
    }
    friend void swap(Calc &c);
};
void swap(Calc &c)
{
    int temp;
    temp=c.no1;
    c.no1=c.no2;
    c.no2=temp;
}
int main()
{
    Calc c;
    c.set(10,20);
    c.disp();
    cout<<"\nAfter Swap";
    swap(c);
    c.disp();
}