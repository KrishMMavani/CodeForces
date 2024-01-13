#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int police = 0, crime = 0;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        police+=n;
        if(police<0)
        {
            crime++;
            police = 0;
        }
    }
    cout<<crime<<endl;
    return 0;
}
