#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

void  solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<int, int>q;
    for(int i = 0; i<n; i++)
    {
        if(s[i]>='a' && s[i] <= 'z')
            q[s[i] - 32]++;
        else
            q[s[i]]++;
    }
    if(q.size() == 26) yes;
    else no;

}

int main()
{
    solve();
    return 0;
}