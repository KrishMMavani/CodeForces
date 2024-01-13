#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

int main()
{
    string s;
    set<char> a;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '{' && s[i] != ' ' && s[i] != ',' && s[i] != '}')
            a.insert(s[i]);
    }
    cout << a.size() << endl;
}