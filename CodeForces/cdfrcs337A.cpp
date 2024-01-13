#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k <= e; k++)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    int arr[m];
    fi(0, m)
    {
        cin>>arr[i];
    }
    sort(arr, arr + m);
    int mi = arr[n-1] - arr[0];
    fk(1, m-n)
    {
        mi = min(mi, abs(arr[k+n-1] - arr[k]));
    }
    cout<<mi<<endl;
}

int main()
{
    solve();
    return 0;
}