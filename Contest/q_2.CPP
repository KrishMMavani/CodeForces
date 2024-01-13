#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    long long int a, b;
    cin>>a>>b;
    long long int diff = b - a;
    // long long int sum = diff;
    while(1)
    {
        diff += b;
        if(sum % a == 0 && sum % b == 0)
        {
            cout<<diff<<endl;
        }
    }
    return 0;
}
