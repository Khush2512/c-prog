#include <iostream>
#include <string.h>
using namespace std;
class Calc
{
private:
    int no1,no2,ans;
public: 
    void set(int n1,int n2)
    {
        no1=n1;
        no2=n2;
    }
    void disp()
    {
        cout<<"\nNo1: "<<no1<<" +  No2: "<<no2<<" :\t"<<ans;
    }
    friend void add(Calc &c);
};
void add(Calc &c)
{
    c.ans=c.no1+c.no2;
}
int main()
{
    Calc c;
    c.set(10,20);
    add(c);
    c.disp();
}