#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"\nEnter a number :";   
    cin>>num;
    // if (num<0)
    // {
    //     cout<<"\n"<<num<<" is negative.";
    // }
    // if (num>0)
    // {
    //     cout<<"\n"<<num<<" is positive.";
    // }
    // if(num==0)
    // {
    //     cout<<"\n"<<num<<" is Zero.";
    // }
    if(num<0)
    {
        cout<<"\n"<<num<<" is negative.";
    }else if(num ==0)
    {
        cout<<"\n"<<num<<" is Zero.";   
    }else
    {
        cout<<"\n"<<num<<" is positive.";
    }
    
}