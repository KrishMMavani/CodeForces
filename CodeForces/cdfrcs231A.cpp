#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int f1 = 0, f2 = 0, f3 = 0;
    int count = 0;
    while(t--)
    {
        cin>>f1>>f2>>f3;
        if((f1 + f2 + f3) >=2)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}