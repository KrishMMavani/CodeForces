#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

double dist(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        double px, py, ax, ay, bx, by;
        double ans = 1e9;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double p_a = dist(px, py, ax, ay);
        double p_b = dist(px, py, bx, by);
        double o_a = dist(0, 0, ax, ay);
        double o_b = dist(0, 0, bx, by);
        double a_b = dist(ax, ay, bx, by);
        ans = min(ans, max(o_a, p_a));
        ans = min(ans, max(o_b, p_b));
        ans = min(ans, max({o_a, p_b, a_b / 2}));
        ans = min(ans, max({o_a, p_a, a_b / 2}));
        cout << setprecision(10) << fixed << ans << endl;
    }
}

int main()
{
    solve();
    return 0;
}
