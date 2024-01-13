#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int count = 0, c, r;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                c = i;
                r = j;
                cout << (abs)(c - 2) + (abs)(r - 2) << endl;
            }
        }
    }
    return 0;
}
