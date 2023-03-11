#include<iostream>
#include<string>
using namespace std;
int main()
{
    long int no = 123456789;
    int count=0, temp, digCount =1, revno=0;
    while (no>0)
    {
        count=digCount;
        temp=no%10;
        revno=(revno*10)+temp;
        no=no/10;
        while(count>0)
        {
            no=no/10;
            count--;
        }
        digCount++;
    }
    cout<<revno;
    
}