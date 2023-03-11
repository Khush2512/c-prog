#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,flag=1;
    for(i=0;i<10;i++)
    {
        cout<<"\nEnter a["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"\nPrime Number:";
    for(i=0;i<10;i++)
    {   
        flag=1;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=0;
            }
        }
        if(flag)
        {
            cout<<"\n"<<a[i];
        }
    }
}