// #include <bits/stdc++.h>
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define fi(s, e) for (int i = s; i < e; i++)
// #define fj(s, e) for (int j = s; j < e; j++)
// #define fk(s, e) for (int k = s; k < e; k++)
// using namespace std;

// void solve()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         int a[n], x[q];
//         fi(0, n)
//         {
//             cin >> a[i];
//         }
//         fi(0, q)
//         {
//             cin >> x[i];
//         }
//         fi(0, q)
//         {
//             int b = pow(2, x[i]);
//             fj(0, n)
//             {
//                 if (a[j] % b == 0)
//                     a[j] = a[j] + pow(2, (x[i] - 1));
//             }
//         }
//         fi(0, n)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), x(q);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }

        vector<int> pow2(32); // Precompute 2^i for i from 0 to 31
        for (int i = 0; i < 32; i++)
        {
            pow2[i] = (1 << i);
        }

        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % +(pow2[x[i]]) == 0)
                {
                    a[j] += (pow2[x[i]] - 1); // Add (2^x[i] - 1) to a[j]
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}