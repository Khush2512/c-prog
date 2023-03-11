#include <iostream>
using namespace std;
int main()
{
    int a[3][3], i, j, k, sum = 0 ,flag = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\nEnter a[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            flag = 1;
            for (k = 2; k < a[i][j]; k++)
            {
                if (a[i][j] % k == 0)
                {
                    flag = 0;
                }
            }
            if (flag)
            {
                cout<<"\t"<<a[i][j];
            }
            else
            {
                cout<<"\t_";        
            }
        }
        cout<<"\n";
    }
}
