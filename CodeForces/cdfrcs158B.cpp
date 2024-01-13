#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int n = 4;
    cin >> n;
    int arr[n];
    int a[4] = {0, 0, 0, 0};
    fi(0, n)
    {
        cin>>arr[i];
    }
    fj(0, n)
    {
        if(arr[j] == 4)
            a[3]++;
        else if(arr[j] == 3)
            a[2]++;
        else if(arr[j] == 2)
            a[1]++;
        else
            a[0]++;
    }
    int count = 0;
    count = a[1] + a[3] + (abs(a[2]-a[0])) + min(a[0], a[2]);
    cout<<count<<endl;
    return 0;
}
