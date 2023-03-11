#include<iostream>
using namespace std;
int main()
{
    int choice,total,iteamtotal,ptotal=0,gtotal=0,ctotal=0,ch2,Qnt,tempTotal,gatotal=0;
    cout<<"\n-----------Khush's DHABA--------------\n";
    while(choice!=4)
    {
        cout<<"1. Punjabi\n2. Gujarati\n3. Chinese\n4. exit";
        cin>>choice;    
        switch(choice)
        {
        case 1:
            cout<<"\n1. Shahi Paneer -->150";
            cout<<"\n2. Veg. Kolhapuri-->165";
            cout<<"\n3. Palak Paneer -->120";
            cin>>ch2;
            switch(ch2)
            {
            case 1:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*150;
                ptotal=ptotal+tempTotal;
                break;
            case 2:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*165;
                ptotal=ptotal+tempTotal;
                break;
            case 3:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*120;
                ptotal=ptotal+tempTotal;
                break;
            }
            gatotal +=ptotal;
            break;
        case 2:
            cout<<"\n1. Bhindi masala -->150";
            cout<<"\n2. Alu Palak-->165";
            cout<<"\n3. dal Kichadi-->120";
            cin>>ch2;
            switch(ch2)
            {
            case 1:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*150;
                gtotal=gtotal+tempTotal;
                break;
            case 2:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*165;
                gtotal=gtotal+tempTotal;
                break;
            case 3:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*120;
                gtotal=gtotal+tempTotal;
                break;    
            }
            gatotal +=gtotal;
            break;
        case 3:
            cout<<"\n1. Paneer chilly-->150";
            cout<<"\n2. BBQ-->165";
            cout<<"\n3. Manchurian-->120";
            cin>>ch2;
            switch(ch2)
            {
            case 1:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*150;
                ctotal=ctotal+tempTotal;
                break;
            case 2:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*165;
                ctotal=ctotal+tempTotal;
                break;
            case 3:
                cout<<"\nEnter Qnt";
                cin>>Qnt;
                tempTotal=Qnt*120;
                ctotal=ctotal+tempTotal;
                break;    
            }
            gatotal +=ctotal;
            break;
        
        default:
            break;
        }
    }
    cout<<"\nTotal of Punjabi :"<<ptotal;
    cout<<"\nTotal of Gujarati:"<<gtotal;
    cout<<"\nTotal of Chinese:"<<ctotal;
    cout<<"\nTotal Bill:"<<gatotal;
}