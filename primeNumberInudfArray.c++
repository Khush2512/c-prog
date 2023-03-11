#include<iostream>
#define SIZE 10
using namespace std;
int main()
{
    int a[SIZE],i,j,k=2,flag,count=0;
    for (i=0;count<SIZE;)
    {   
        flag=1;
        for(j=2;j<k;j++)
        {
            if(k%j==0)
            {
                flag=0;
            }
        }
        if(flag)
        {
            a[i]=k;
            count++;
            i++;
        }
        k++;  
    }
    for(i=0;i<SIZE;i++)
    {
        cout<<"\nA["<<i<<"]:"<<a[i];
    }
}