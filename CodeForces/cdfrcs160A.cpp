#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    int count = 0;
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        sum2 += a[i];
        count++;
        if (sum2 > (sum1 - sum2))
        {
            cout << count;
            return 0;
        }
    }
}