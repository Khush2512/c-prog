// 1) palindrome no
// 2) twin no
// 3) armstrong no
// 4) scan one no from user and sum of digit no
// 	no = 123
// 	1+2+3=6
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,temp,revno=0,sum=0,mul=1,dup;
    cout<<"\n1) palindrome no\n";
    cout<<"\nEnter A Number\n";
    cin>>i;
    dup=i;
    // cout<<dup;
    while(i>0)
    {
        temp=i%10;
        revno = (revno*10)+temp;
        i=i/10; 
    }
    // cout<<revno;
    if(dup==revno)
    {
        cout<<"\nNumber is Palindrome";
    }else
    {
        cout<<"\nNumber is Not Palindrome";
    }
    cout<<"\n2) twin no\n";
    cout<<"\nEnter A Number\n";
    cin>>i;
    while(i>0)
    {
        temp=i%10;
        sum +=temp;
        mul *=temp;
        i=i/10;
    }
    if(sum==mul)
    {
        cout<<"\nNumber is twin number";
    }else
    {
        cout<<"\nNumber is not twin number";
    }
    cout<<"\n3) Armstrong no\n";
    cout<<"\nEnter A Number\n";
    cin>>i;
    dup=i;
    while(i>0)
    {
        temp=i%10;
        sum+=(temp*temp*temp);
        i=i/10; 
    }
    cout<<sum;
    if(sum==dup)
    {
        cout<<"\nNumber is armstrong";
    }else
    {
        cout<<"\nNumber is not armstrong";
    }
    cout<<"\n4) scan one no from user and sum of digit no\n";
    cout<<"\nEnter A Number\n";
    cin>>i;
    while(i>0)
    {
        temp=i%10;
        sum +=temp;
        i=i/10;
    }
    cout<<"\nSum of Given Number is "<<sum;

}