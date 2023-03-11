#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"\n\t--------for loop--------\t";
    for(i=1;i<=5;i++)
    {
        cout<<"\n"<<i;
    }
    cout<<"\n\t--------while loop--------\t";
    i=1;
    while(i<5)
    {
        cout<<"\n"<<i;
        i++;
    }
    cout<<"\n\t--------Do while loop--------\t";
    i=1;
    do{
        cout<<"\n"<<i;
        i++;
    }while(i<=5);
}