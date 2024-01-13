#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
        int arr[n];
        fi(0, n)
        {
            cin >> arr[i];
        }
        set<int> s;
        if (n == 2)
            yes;
        else
        {
            fi(0, n)
            {
                s.insert(arr[i]);
            }
            if (s.size() == 1)
                yes;
            else if (s.size() == 2)
            {
                sort(arr, arr + n);
                int count = 0;
                fi(0, n)
                {
                    if (arr[i] == *s.begin())
                        count++;
                    else
                        break;
                }
                if (abs(count - (n - count)) == 1 || abs(count - (n - count)) == 0)
                    yes;
                else
                    no;
            }
            else
                no;
        }
    }
}

int main()
{
    solve();
    return 0;
}
