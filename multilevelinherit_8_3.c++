#include <iostream>
#include <string.h>
using namespace std;
class student
{
    protected:
        int roll_number;
    public:
        void get_number(int a)
        {
            roll_number=a;
        }
        void put_number()
        {
            cout<<"Roll Number:"<<roll_number<<"\n";
        }
};
class test : public student
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(float x,float y)
        {
            sub1=x;
            sub2=y;
        }
        void put_marks()
        {
            cout<<"Marks in SUB1 = " << sub1 << "\n";
            cout<<"Marks in SUB2 = " << sub2 << "\n";
        }
};
class result : public test
{
    float total;
    public:
    void display()
    {
        total=sub1+sub2;
        put_number();
        put_marks();
        cout<<"Total = "<< total << "\n";
    }
};
int main()
{
    result student1;
    student1.get_number(111);
    student1.get_marks(90,90);
    student1.display();
}