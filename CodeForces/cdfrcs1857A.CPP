#include <bits/stdc++.h>
#define y cout << "YES" << endl
#define x cout << "NO" << endl
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
            y;
        else
            x;
    }
    return 0;
}