#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int m = INT_MIN;
    while (n != 0)
    {
        int ans = arr[0][1];
        for (int i = 1; i < n - 1; i++)
        {
            ans = ans + arr[i][1] - arr[i][0];
            m = max(m, ans);
        }

        n--;
    }
    m = max(m, arr[0][1]);
    cout << m << endl;
    return 0;
}
