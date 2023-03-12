#include <iostream>
using namespace std;
class Student
{
private:
    int rno;
    char name[50];
    int std;

public:
    inline void scanData()
    {
        cout << "\nEnter Rno:";
        cin >> rno;
        cout << "\nEnter Name:";
        cin >> name;
        cout << "\nEnter Std:";
        cin >> std;
    }
    inline void dispData()
    {
        cout << "\n"
             << rno << "\t" << name << "\t" << std;
    }
};
int main()
{
    Student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        s[i].scanData();
    }
    for (i = 0; i < 5; i++)
    {
        s[i].dispData();
    }
}