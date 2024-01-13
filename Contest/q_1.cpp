#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int b[n];
        fi(0, n)
        {
            cin>>b[i];
        }
        int prod = 1;
        fi(0, n)
        {
            prod *= b[i];
        }
        if(2023 % prod != 0)
            no;
        else
        {
            yes;
            cout<<2023/prod<<" ";
            fj(1, k)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}