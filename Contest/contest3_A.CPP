#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
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
        if (n % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
}

int main()
{
    solve();
    return 0;
}