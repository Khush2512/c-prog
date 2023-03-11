#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\nEnter a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }   
    for(i=0;i<3;i++)
    {   
        sum =0;
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"      ";
            sum +=a[i][j];
        }
        cout<<" Sum :"<<sum;
        cout<<"\n";
    }
    cout<<"\n";
    for(j=0;j<3;j++)
    {
        sum =0;
        for(i=0;i<3;i++)
        {
            sum+=a[i][j];
        }
        cout<<"Sum:"<<sum<<" ";
    }
    

}