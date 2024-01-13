#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

bool is_round(int n)
{
    if (n % 10 == n)
        return true;
    else
    {
        while (!(n % 10 == n))
        {
            n = n / 10;
        }
        if (n % 10 == n)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (is_round(n))
            cout << 1 << endl << n;
        else
        {
            cout<<32;
        }
    }
    return 0;
}