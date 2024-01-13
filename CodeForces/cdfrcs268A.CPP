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
    int arr[n][2];
    fi(0, n)
    {
        fj(0, 2)
        {
            cin>>arr[i][j];
        }
    }
    int count = 0;
    fi(0, n)
    {
        int pos = arr[i][0];
        fi(0, n)
        {
            if(pos == arr[i][1])
                count++;
        }
    }
    cout<<count;
    return 0;
}
