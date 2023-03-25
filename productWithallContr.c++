#include <iostream>
#include <string.h>
using namespace std;
class Product
{
    int id, price;
    char name[50], category[50];

public:
    Product()
    {
        id=1;
        strcpy(name,"chips");
        price=100;
        strcpy(category,"Food");
    }
    Product(int i,char n[],int p,char c[])
    {
        id=i;
        strcpy(name,n);
        price=p;
        strcpy(category,c);
    }
    Product(Product &p)
    {
        id=p.id;
        strcpy(name,p.name);
        price=p.price;
        strcpy(category,p.category);
    }
    void disp()
    {
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<price<<"\t"<<category;
    }
};
int main()
{
    Product p1,p2(2,"tea",200,"Food"),p3(p3);
    p1.disp();
    p2.disp();
    p3.disp();
}