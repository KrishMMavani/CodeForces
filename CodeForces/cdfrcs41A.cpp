#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    string t;
    cin>>t;
    string s;
    cin>>s;
    int count = 0;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(t[i] == s[n-i-1])
            count++;
    }
    if(count == n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}