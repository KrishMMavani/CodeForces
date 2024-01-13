#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;
    while (w != 0)
    {
        sum += k * w;
        w--;
    }
    if (sum > n)
    {
        cout << sum - n;
    }
    else if (n >= sum)
    {
        cout << 0;
    }
    return 0;
}