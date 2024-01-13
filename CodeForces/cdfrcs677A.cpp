#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int arr[n];
    fi(0, n)
    {
        cin >> arr[i];
    }
    int sum = 0;
    fi(0, n)
    {
        if (arr[i] > h)
            sum = sum + 2;
        else
            sum++;
    }
    cout << sum;
    return 0;
}