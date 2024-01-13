#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int count = 1;
    sort(n.begin(), n.end());
    for (int i = 0; i < n.length() - 1; i++)
    {
        if (n[i] != n[i + 1])
        {
            ++count;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}
