#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, step = 0;
        cin >> n;
        vector<int> v;
        v.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int min = INT_MAX, index = 0;
        if (is_sorted(v.begin(), v.end()))
        {
            if (v.size() == 2)
            {
                if (v[1] - v[0] == 0)
                {
                    cout << 1 << endl;
                    continue;
                }
                else
                {
                    step = ((v[index + 1] - v[index]) / 2) + 1;
                    cout << step << endl;
                    continue;
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                if ((v[i + 1] - v[i]) < min)
                {
                    index = i;
                    min = (v[i + 1] - v[i]);
                }
            }

            step = ((v[index + 1] - v[index]) / 2) + 1;
            cout << step << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
