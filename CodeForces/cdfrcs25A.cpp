#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int odd = 0, even = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i]%2 != 0)
            odd++;
        else
            even++;
    }
    if(odd>even)
    {
        for(int i = 0; i<n; i++)
        {
            if(a[i]%2 == 0)
                cout<<i+1;
        }
    }
    else if(even>odd)
    {
        for(int i = 0; i<n; i++)
        {
            if(a[i]%2 != 0)
                cout<<i+1;
        }
    }
    return 0;
}
