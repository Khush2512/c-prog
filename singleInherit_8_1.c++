#include <iostream>
#include <string.h>
using namespace std;
class A
{
    int a;
public:
    int b;
    void set_ab()
    {
        a=5;b=10;
    }
    int get_A()
    {
        return a;
    }
};
class B : public A
{
    int c;
public:
    void mul()
    {
        c = b * get_A();
    }
    void disp()
    {
        cout<<"a = "<<get_A()<<"\n";
        cout<<"b = "<<b<<"\n";
        cout<<"c = "<<c<<"\n\n";
    }
};
int main()
{
    B b;
    b.set_ab();
    b.mul();
    b.disp();

    b.b = 20;
    b.mul();
    b.disp();
}