#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n[t];
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        sum = sum + n[i];
    }
    if(sum>0)
    {
        cout<<"HARD";
    }
    else
        cout<<"EASY";
    return 0;
}
