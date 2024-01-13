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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        int first, second;
        first = 0;
        second = 0;
        int count = 0;
        fi(0, a.size())
        {
            if (a[first] == 'B')
                second++;
            if (a[second] == 'B')
            {
                if ((second - first) >= k)
                {
                    first = second;
                    count += (second - first)/2;
                }
            }
            if(a[first] != 'B')
            {
                first++;
                second++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
