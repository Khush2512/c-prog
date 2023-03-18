#include <iostream>
using namespace std;
class clac2;
class clac1
{
    int no1;
public:
    void set(int n1)
    {
        no1=n1;
    }
    void disp()
    {
        cout<<"\nNo1 :"<<no1;
    }
    friend void swap(clac1 &c1,clac2 &c2);
};
class clac2
{
    int no2;
public:
    void set(int n2)
    {
        no2=n2;
    }
    void disp()
    {
        cout<<"\nNo2 :"<<no2;
    }
    friend void swap(clac1 &c1,clac2 &c2);
};
void swap(clac1 &c1,clac2 &c2)
{
    int temp;
    temp=c1.no1;
    c1.no1=c2.no2;
    c2.no2=temp;
}
int main()
{
    clac1 c1;
    clac2 c2;
    
    c1.set(10);
    c2.set(20);
    c1.disp();
    c2.disp();
    swap(c1,c2);
    cout<<"\nAfter swap";
    c1.disp();
    c2.disp();
}