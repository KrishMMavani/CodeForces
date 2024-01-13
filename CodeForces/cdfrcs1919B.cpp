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
        string s;
        cin >> s;
        int c_m = 0, c_p = 0;
        sort(s.begin(), s.end());
        fi(0, n)
        {
            if(s[i] == '+')
                c_p++;
            else c_m++;
        }
        cout<<abs(c_m - c_p)<<endl;
    }
    return 0;
}