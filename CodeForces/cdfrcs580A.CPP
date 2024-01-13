#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    fi(0, n)
    {
        cin>>arr[i];
    }
    int pos = 1;
    int count = 1;
    fi(0, n-1)
    {
        if(arr[i] >= arr[i+1])
            count++;
    }
    if(count == 0)
        cout<<count<<endl;
    else
    {
        pos = pos + count;
        cout<<count<<endl;
    }
    return 0;
}
