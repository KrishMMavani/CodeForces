#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string target = "hello";
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == target[count])
        {
            count++;
        }
    }
    if (count == target.size())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
