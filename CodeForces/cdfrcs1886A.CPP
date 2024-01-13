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
        int x;
        cin >> x;
        if (x < 7)
        {
            cout << "NO" << "\n";
        }
        else if ((x - 3) % 3 != 0)
        {
            cout << "YES" << "\n";
            cout << x - 3 << " " << 2 << " " << 1 << "\n";
        }
        else if ((x - 5) > 5)
        {
            cout << "YES" << "\n";
            cout << x - 5 << " " << 4 << " " << 1 << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}