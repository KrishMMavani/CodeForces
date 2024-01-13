#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

bool Strcheck(string x)
{
    for (int i = 0; i < x.size() - 1; i++)
    {
        if (x[i] == x[i + 1])
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int l;
    cin >> l;
    while (l--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        string s, t;
        cin >> s >> t;
        if (s.size() == 1)
        {
            yes;
            continue;
        }
        if (Strcheck(t) && t.size()>1 && Strcheck(s) && s.size()>1)
        {
            no;
            continue;
        }
        bool flag = true;
        fi(0, n1 - 1)
        {
            if (s[i] == s[i + 1])
            {
                if ((s[i] != t[0]) && (s[i + 1] == t[n2 - 1]))
                {
                    flag = false;
                    break;
                }
                else if ((s[i] == t[0]) && (s[i + 1] != t[n2 - 1]))
                {
                    flag = false;
                    break;
                }
                else if ((s[i] == t[0]) && (s[i + 1] == t[n2 - 1]))
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            yes;
        else
            no;
    }
}

int main()
{
    solve();
    return 0;
}