#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int count1 = 0, count2 = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90) // upper case
        {
            count1++;
        }
        else if (str[i] >= 97 && str[i] <= 122) // lower case
        {
            count2++;
        }
    }

    if (count1 > count2)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout << str;

    return 0;
}
