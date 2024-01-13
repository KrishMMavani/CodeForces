#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
#define fir(s, e) for (int i = s; i <= e; i++)
#define cnt cout << count << endl
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
        cnt;
    else
    {
        fir(1, d)
        {
            if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
                count--;
        }
        cnt;
    }
    return 0;
}
