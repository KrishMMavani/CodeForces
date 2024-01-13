#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        fi(0, n)
        {
            cin >> a[i];
        }
        int m = INT_MAX;
        int id;
        fi(0, n)
        {
            m = min(m, a[i]);
        }
        fi(0, n)
        {
            if (a[i] == m)
            {
                id = i;
                break;
            }
        }
        bool flag = true;
        fi(id, n - 1)
        {
            if (a[i] > a[i + 1])
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << id << endl;
    }
}

int main()
{
    solve();
    return 0;
}