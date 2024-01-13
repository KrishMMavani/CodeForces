#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        while (n--)
        {
            cin >> a >> b;
            if (a > b)
            {
                count++;
            }
        }
    cout << count << endl;
    }
    return 0;
}