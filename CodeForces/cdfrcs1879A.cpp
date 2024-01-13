#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

int solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][2];
        fi(0, n)
        {
            fj(0, 2)
            {
                cin >> a[i][j];
            }
        }
        int target = a[0][0];
        int maxi = INT_MIN;
        fi(1, n)
        {
            if (a[i][0] > target)
            {
                if (a[i][1] > a[0][1])
                    return -1;
            }
            else if (a[i][0] == target)
                return -1;
            else
            {
                fi(1, n)
                {
                    if (a[i][0] < target)
                    {
                        maxi = max(maxi, a[i][0]);
                    }
                }
            }
        }
        cout << maxi + 1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        fi(0, n)
        {
            cin >> a[i] >> b[i];
        }
        int m = 0;
        fi(1, n)
        {
            if (a[i] >= a[0])
                m = max(m, b[i]);
        }
        if (m >= b[0])
            cout << -1 << endl;
        else
            cout << a[0] << endl;
    }
}