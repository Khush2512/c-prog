#include<iostream>
using namespace std;
int main()
{
    /*
    int no1,no2,temp;
    no1=5;
    no2=10;
    cout<<"\nBefore swap";
    cout<<"\nNo1 : "<<no1;
    cout<<"\nNo2 : "<<no2;   
    temp=no1;
    no1=no2;
    no2=temp;
    cout<<"\nAfter swap";
    cout<<"\nNo1 : "<<no1;
    cout<<"\nNo2 : "<<no2;   
    */
    int no1,no2;
    no1=5;
    no2=10 ;
    cout<<"\nBefore swap";
    cout<<"\nNo1 : "<<no1;
    cout<<"\nNo2 : "<<no2;
    no1=no1+no2;
    no2=no1-no2;
    no1=no1-no2;
    cout<<"\nAfter swap";
    cout<<"\nNo1 : "<<no1;
    cout<<"\nNo2 : "<<no2;
    
}