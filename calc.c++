#include<iostream>
using namespace std;
int main()
{
    int no1,no2,choice;
    cout<<"\nEnter no1:";
    cin>>no1;
    cout<<"\nEnter no2:";
    cin>>no2;
    cout<<"\n1. +"<<"\n2. -"<<"\n3. *"<<"\n4. /";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"no1+no2 : "<<no1+no2;
            break;
        case 2:
            cout<<"no1-no2 : "<<no1-no2;
            break;
        case 3:
            cout<<"no1*no2 : "<<no1*no2;
            break;
        case 4:
            cout<<"no1/no2 : "<<no1/no2;
            break;
        default:
            break;
    }




}