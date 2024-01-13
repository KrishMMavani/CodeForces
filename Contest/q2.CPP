#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i <= e; i++)
#define fj(s, e) for (int j = s; j >= e; j--)
#define fy(s, e) for (int y = s; y > e; y--)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == n - 1)
        {
            fi(1, n) cout << i << " ";
        }
        else if (k == 0)
        {
            fj(n, 1) cout << j << " ";
        }
        else
        {
            fj(k, 0) cout << n - j << " ";
            fy(n - k - 1, 0) cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}
