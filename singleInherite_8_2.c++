#include <iostream>
#include <string.h>
using namespace std;
class A
{
    int a;
public:
    int b;
    void get_ab()
    {
        cout<<"Enter the value OF  a and b\n";
        cin>> a >> b;
    }
    int get_A()
    {
        return a;
    }
};
class B : private A
{
    int c;
public:
    void mul()
    {
        get_ab();
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
    // b.set_ab();
    b.mul();
    b.disp();

    // b.b = 20;
    b.mul();
    b.disp();
}