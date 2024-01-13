#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n.length() - 1; i++)
    {
        if(n[i] == n[i+1])
        {
            count++;
            if(count == 6)
                break;
        }
        else
            count = 0;
    }
    if (count == 6)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}