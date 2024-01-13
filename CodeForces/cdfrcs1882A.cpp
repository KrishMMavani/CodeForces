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
        int arr[n];
        fi(0, n)
        {
            cin >> arr[i];
        }
        int count = 1;
        fi(0, n)
        {
            if (arr[i] == count)
                count += 2;
            else
                count++;
        }
        cout << count - 1 << endl;
    }
    return 0;
}
