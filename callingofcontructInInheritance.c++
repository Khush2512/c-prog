#include <iostream>
using namespace std;
class A
{
public:
    int no1;
    A(int n1)
    {
        no1=n1;
    }
};
class B
{
public:
    int no2;
    B(int n1)
    {
        no2=n1;
    }
};
class C : public A,public B
{
public:
    int no3;
    C(int n1,int n2,int n3) : A(n1),B(n2) 
    {
        no3=n3;
    }
    void disp()
    {
        cout<<"\nNo1:"<<no1<<"\tNo2:"<<no2<<"\tNo3:"<<no3;
    }
};
int main()
{
    C obj(1,2,3);
    obj.disp();
}