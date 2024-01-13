#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j <=e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
void solve()
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
        // int count = 0;x
        // int s = sqrt(n);
        // int m[s];
        fk(0, n-1)
        {
            if(arr[k] > arr[k+1])
            {
                // fj(0, pow(2, k))
                // {
                //     arr[j] = arr[j] - 1;
                // }
                // k = -1;
                fj(0, k)
                {
                    arr[j] -= arr[k];
                }
                k = -1;
            }
        }
        fi(0, n)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
