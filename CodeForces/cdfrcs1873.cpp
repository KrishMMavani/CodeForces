#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 1;
        int n;
        cin >> n;
        int a[n];
        fi(0, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        a[0]++;
        fi(0, n)
        {
            ans *= a[i];
        }
        cout << ans << endl;
    }
    return 0;
}