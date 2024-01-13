#include <bits/stdc++.h>
#define y cout << YES << endl
#define x cout << NO << endl
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n1;
    cin >> n1;
    int a1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }
    int n2;
    cin >> n2;
    int a2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        if (a1[i] == t)
            count++;
    }
    for (int i = 0; i < n2; i++)
    {
        if (a2[i] == t)
            count++;
    }
    if (count > 0)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}
