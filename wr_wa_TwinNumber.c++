#include <iostream>
using namespace std;
int isTwin(int num);
int main()
{
    int no,ans;
    cout<<"\nEnter a number :";
    cin>>no;
    ans=isTwin(no);
    if(ans)
    {
        cout<<"\nThe given number is twin number";
    }
    else
    {
       cout<<"\nThe given number is not a twin number";
    }
}
int isTwin(int num)
{
    int temp,sum=0,mul=1;
    while (num>0)
    {
        temp=num%10;
        sum+=temp;
        mul *=temp;
        num /=10;
    }
    if(sum==mul)
    {
        return 1;
    }
    return 0;
}
