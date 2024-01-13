#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c, d;
    while (1)
    {
        n++;
        int ans = n;
        a = n % 10;
        n = n / 10;
        b = n % 10;
        n = n / 10;
        c = n % 10;
        n = n / 10;
        d = n % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << ans << endl;
            return 0;
        }
        n = ans;
    }

    return 0;
}