#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (long long int i = s; i <= e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if(n%2 == 0)
        cout<<n/2;
    else
        cout<<n/2 - n;
    return 0;
}