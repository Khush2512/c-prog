#include<iostream>
using namespace std;
class Student
{
private:
    int rno;
    char name[50];
    int std;
public:
    void scanData()
    {
        cout<<"\nEnter Rno:";
        cin>>rno;
        cout<<"\nEnter Name:";
        cin>>name;
        cout<<"\nEnter Std:";
        cin>>std;
    }
    void dispData()
    {
        cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
    }
};
int main()
{
    Student s1,s2,s3;
    
    s1.scanData();
    s2.scanData();
    s3.scanData();
    
    s1.dispData();
    s2.dispData();
    s3.dispData();
}