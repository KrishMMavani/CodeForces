#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0;
    int t;
    cin >> t;
    string n;
    while (t--)
    {
        cin >> n;
        if (n == "--X")
        {
            --x;
        }
        else if (n == "X--")
        {
            x--;
        }
        else if (n == "++X")
        {
            ++x;
        }
        else if (n == "X++")
        {
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}