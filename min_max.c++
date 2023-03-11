#include<iostream>
using namespace std;
int main()
{
    int no1,no2,no3;
    cout<<"\nEnter no1,no2,no3:";
    cin>>no1>>no2>>no3;
    if(no1==no2 && no2==no3)
    {
        cout<<"All Numbers are same.";
    }
    else if (no1==no2 && no2!=no3)
    {
        if (no1>no3)
        {
            cout<<"\nNo1 and No2 are bigger then no3";
        }else
        {
            cout<<"\nNo1 and No2 are same but No3 is greatest";
        }
    }
    else if (no1==no3 && no1!=no2)
    {
        if (no1>no2)
        {
            cout<<"\nNo1 and No3 are bigger then no2";
        }else
        {
            cout<<"\nNo1 and No3 are same but No2 is greatest";
        }
    }else if (no2==no3 && no1!=no2)
    {
        if (no2>no1)
        {
            cout<<"\nNo2 and No3 are bigger then no1";
        }else
        {
            cout<<"\nNo2 and No3 are same but No1 is greatest";
        }
    }
    else
    {
        if(no1>no2 && no1>no3)
        {
            cout<<no1<<" is greatest";
        }else if(no2>no1 && no2>no3)
        {
            cout<<no2<<" is greatest";
        }else
        {
            cout<<no3<<" is greatest";
        }
    }
    
}