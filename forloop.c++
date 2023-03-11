// (for)
// ------
// 	1) 1 to 5
// 	2) 5 to 1
// 	3) prime 
// 	4) reverse no + 200 ---display ans
// 	5) twin no---[123]
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,rangeS,rangeE,flag=1,temp,revno,sum=0,mul=1;
    cout<<"\n1) 1 to 5\n";
    for(i=1;i<=5;i++)
    {
        cout<<"\n"<<i;
    }
    cout<<"\n1) 5 to 1\n";
    for(i=5;i>0;i--)
    {   
        cout<<"\n"<<i;
    }
    cout<<"\n3) prime\n";
    cout<<"\nEnter Strarting Ranger:\n";
    cin>>rangeS;
    cout<<"\nEnter Endind Range\n";
    cin>>rangeE;
    for(;rangeS<=rangeE;rangeS++)
    {   
        flag=1;
        for(i=2;i<rangeS;i++)
        {   
            if(rangeS%i==0)
            {
                flag=0;
            }
        }
        if(flag){
                cout<<"\n"<<rangeS;
        }
    }
    cout<<"\n4) reverse no + 200\n";
    cout<<"\nEnter A Number\n";
    cin>>i;
    for(;i>0;)
    {
        temp=i%10;
        revno = (revno*10)+temp;
        i=i/10; 
    }
    cout<<"\nRevno +200 = "<<revno+200;
    cout<<"\n5) Twin number\n";
    cout<<"\nEnter A Number\n";
    cin>>i;
    for(;i>0;)
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

    
    
}