#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;
    fi(0, a.size())
    {
        if(a[i] == b[i])
            cout<<0;
        else
            cout<<1;
    }
    return 0;
}
