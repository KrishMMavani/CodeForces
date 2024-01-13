#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ar[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> ar[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if ((ar[i][0] == ar[i][1] && ar[i][2] == ar[i][1]) || (ar[2][i] == ar[1][i] && ar[0][i] == ar[1][i]))
            {
                cout << endl
                     << ar[i];
                break;
            }
        }
        if (ar[0][0] == ar[1][1] && ar[1][1] == ar[2][2] || ar[0][2] == ar[1][1] && ar[1][1] == ar[2][0])
        {
            if (ar[0][0] == "X")
                cout << endl
                     << "X";
            else if (ar[0][0] == "O")
                cout << endl
                     << "O";
            else if (ar[0][0] == "+")
                cout << endl
                     << "+";
        }
        else
            cout << "DRAW";
    }
    return 0;
}
