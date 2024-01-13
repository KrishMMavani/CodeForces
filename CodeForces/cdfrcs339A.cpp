#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    sort(n.begin(), n.end());
    char arr[(n.length() / 2) + 1];
    for (int i = 0; i < (n.length() / 2) + 1; i++)
    {
        arr[i] = n[n.length() / 2 + i];
    }
    for (int i = 0; i < (n.length() / 2) + 1; i++)
    {
        if(i == (n.length()/2))
            cout<<arr[i];
        else
            cout << arr[i] << '+';
    }

    return 0;
}
