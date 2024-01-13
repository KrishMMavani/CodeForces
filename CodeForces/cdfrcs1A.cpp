#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a;
    cin>>n;
    cin>>m;
    cin>>a;
    cout<<(((n+a-1)/a)*((m+a-1)/a));
    return 0;
}