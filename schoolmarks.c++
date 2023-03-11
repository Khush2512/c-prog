#include<iostream>
using namespace std;
int main()
{
    int sub1,sub2,sub3,avg;
    cout<<"\nEnter sub1 marks:";
    cin>>sub1;
    cout<<"\nEnter sub2 marks:";
    cin>>sub2;
    cout<<"\nEnter sub3 marks:";
    cin>>sub3;
    avg=(sub1+sub2+sub3)/3;
    cout<<avg;
    if(avg>=90)
    {
        cout<<"\nA grade";
    }else if(avg>=80)
    {
        cout<<"\nB grade";
    }else if(avg>=70)
    {
        cout<<"\nC grade";
    }else if(avg>=60)
    {
        cout<<"\nD grade";
    }else if(avg>=50)
    {
        cout<<"\nE grade";
    }else
    {
        cout<<"\nReaplly";
    }
}