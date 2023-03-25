#include <iostream>
#include <string.h>
using namespace std;
class customer
{
    int id,price;
    long int contactno;
    char name[50],productname[50],sellername[50];
public:
    customer()
    {
        id=1;
        strcpy(name,"Khush");
        contactno=9316327893;
        strcpy(productname,"iPhone");
        price=32000;
        strcpy(sellername,"Nihar");
    }
    customer(int i,char n[],long int cn,char pn[],int p,char sn[])
    {
        id=i;
        strcpy(name,n);
        contactno=cn;
        strcpy(productname,pn);
        price=p;
        strcpy(sellername,sn);
    }
    customer(int i,char n[],long int cn,char pn[],int p)
    {
        id=i;
        strcpy(name,n);
        contactno=cn;
        strcpy(productname,pn);
        price=p;
        strcpy(sellername,"");
    }
    customer(customer &c)
    {
        id=c.id;
        strcpy(name,c.name);
        contactno=c.contactno;
        strcpy(productname,c.productname);
        price=c.price;
        strcpy(sellername,c.sellername);
    }
    void disp()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<contactno<<"\t"<<productname<<"\t"<<price<<"\t"<<sellername;
    }
};
int main()
{
    customer c1,c2(2,"Lamya",9876543210,"Macbook",2500,"nihar"),c3(c2),c4(3,"Lamya",9876543210,"Macbook",2500);
    c1.disp();
    c2.disp();
    c3.disp();
    c4.disp();
}