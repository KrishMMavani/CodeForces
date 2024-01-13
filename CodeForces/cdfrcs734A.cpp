#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c1 = 0, c2 = 0;
    char games[n];
    for (int i = 0; i < n; i++)
    {
        cin >> games[i];
    }
    sort(games, games + n);
    for (int i = 0; i < n; i++)
    {
        if (games[i] == 'A')
        {
            c1++;
        }
        else if (games[i] == 'D')
        {
            c2++;
        }
    }
    if (c1 > c2)
        cout << "Anton";
    else if (c1 < c2)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
