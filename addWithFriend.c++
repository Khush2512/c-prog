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
    friend int add(clac1 &c1,clac2 &c2);
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
    friend int add(clac1 &c1,clac2 &c2);
};
int add(clac1 &c1,clac2 &c2)
{
    int ans;
    ans=c1.no1+c2.no2;
    return ans;
}
int main()
{
    clac1 c1;
    clac2 c2;
    int ans;

    c1.set(10);
    c2.set(20);
    c1.disp();
    c2.disp();

    ans=add(c1,c2);
    cout<<"\nAns :"<<ans;
}