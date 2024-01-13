#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i <= e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]>=65 && s[0]<=90)
    {
        transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
        cout<<s<<endl;
    }
    if(s[0]>=97 && s[0]<= 122)
    {
        s[0] = s[0] - 32;
        transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
        cout<<s<<endl;
    }
    return 0;
}
