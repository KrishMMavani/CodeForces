#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

void  solve()
{
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    s1 = s1 + s2;
    sort(s1.begin(), s1.end());
    sort(s3.begin(), s3.end());
    if(s1.length() != s3.length())
        no;
    else if(s1 == s3)
        yes;
    else
        no;
}

int main()
{
    solve();
    return 0;
}