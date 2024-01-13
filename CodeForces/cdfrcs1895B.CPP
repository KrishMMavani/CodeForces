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
        int n;
        cin >> n;
        int arr[2 * n];
        fi(0, 2 * n)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 2 * n);
        int d = 0;
        fi(0, n - 1)
        {
            d += abs(arr[i + 1] - arr[i]);
            d += abs(arr[n + i + 1] - arr[n + i]);
        }
        cout << d << endl;
        fi(0, n)
        {
            cout << arr[i] << " " << arr[n + i] << endl;
        }
    }
    return 0;
}
