#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        if (s.size() > 10)
        {
            count = s.size() - 2;
            cout << s[0] << count << s[s.size() - 1] << endl;
        }
        else
            cout << s << endl;
    }
    return 0;
}