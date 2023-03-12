#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int rno;
    char name[50];
    int std;

public:
    inline void scanData(const int r,const char n[],const int s)
    {
        rno=r;
        strcpy(name,n);
        std=s;
    }
    inline void dispData()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << std;
    }
};
int main()
{
    Student s;
    
    s.scanData(1,"Khush",1);
    s.dispData();

    
}
