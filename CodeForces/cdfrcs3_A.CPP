// #include <bits/stdc++.h>
// #define yes cout << YES << endl
// #define no cout << NO << endl
// #define fi(s, e) for (int i = s; i < e; i++)
// #define fj(s, e) for (int j = s; j < e; j++)
// #define fk(s, e) for (int k = s; k < e; k++)
// using namespace std;
// int main()
// {
//     //
//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> determineGameWinner(int t, vector<pair<int, string>> testCases)
{
    vector<char> results;

    for (int i = 0; i < t; i++)
    {
        int n = testCases[i].first;
        string plays = testCases[i].second;

        // Count the number of wins for each player
        int winsA = 0;
        int winsB = 0;
        for (char play : plays)
        {
            if (play == 'A')
            {
                winsA++;
            }
            else
            {
                winsB++;
            }
        }

        // Check if either player has already won Y sets
        if (winsA >= winsB)
        {
            // If winsA is greater or equal to winsB, player A is leading
            // Check if it's impossible for player B to catch up and win Y sets
            if (winsA - winsB > (n - winsA - winsB) / 2)
            {
                results.push_back('A');
            }
            else
            {
                results.push_back('?');
            }
        }
        else
        {
            // If winsB is greater, player B is leading
            // Check if it's impossible for player A to catch up and win Y sets
            if (winsB - winsA > (n - winsA - winsB) / 2)
            {
                results.push_back('B');
            }
            else
            {
                results.push_back('?');
            }
        }
    }

    return results;
}

int main()
{
    int t;
    cin >> t;
    vector<pair<int, string>> testCases;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string plays;
        cin >> plays;
        testCases.push_back(make_pair(n, plays));
    }

    // Determine game winners
    vector<char> results = determineGameWinner(t, testCases);

    // Output results
    for (char result : results)
    {
        cout << result << endl;
    }

    return 0;
}
