#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi(s, e) for (int i = s; i <= e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
        {
            yes;
            fi(1, n / 2) cout << i * 2 << " ";
            fj(1, n / 2) cout << 2 * j - 1 << " ";
            cout << n + n/2 - 1 << endl;
        }
        else
            no;
    }
    return 0;
}