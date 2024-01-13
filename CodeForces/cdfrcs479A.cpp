#include <bits/stdc++.h>
#define y cout << YES << endl
#define x cout << NO << endl
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int ans = a+b+c;
    ans = max(ans,a+(b*c));
    ans = max(ans,a*(b+c));
    ans = max(ans,a*b*c);
    ans = max(ans,(a+b)*c);
    cout<<ans<<endl;
    return 0;
}
