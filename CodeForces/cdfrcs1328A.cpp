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
    int count = 0;
    while (t--)
    {
        int a, b, div, ans;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
            continue;
        }
        div = a / b;
        ans = (div + 1) * b;
        cout << ans - a << endl;
    }
    return 0;
}