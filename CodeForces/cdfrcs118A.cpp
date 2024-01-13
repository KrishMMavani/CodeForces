#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string n = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u' || a[i] == 'I' || a[i] == 'i' || a[i] == 'Y' || a[i] == 'y')
        {
            continue;
        }
        else
            n += a[i];
    }
    transform(n.begin(), n.end(),n.begin(),::tolower);
    for(int i = 0; i<n.size(); i++)
    {
        cout<<"."<<n[i];
    }
    return 0;
}