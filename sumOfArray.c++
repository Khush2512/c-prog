#include<iostream>
using namespace std;
int main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        cout<<"\nEnter a["<<i<<"]:";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"\nA["<<i<<"] :"<<a[i];
        sum +=a[i];
    }
    cout<<"\nSum Of your array is :"<<sum;
}