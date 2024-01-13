/*#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        fi(0, n)
        {
            cin>>arr[i];
        }
        int flag = 0;
        fi(0, n)
        {
            if(arr[i] == arr[i+1])
                flag = 1;
        }
    }
    return 0;
}*/

#include <iostream>
#include <unordered_set>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::unordered_set<int> nums;
        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            int num;
            std::cin >> num;
            nums.insert(num);
            sum += num;
        }

        long long expected_sum = (long long)n * (n + 1) / 2;

        if (expected_sum % 2 == 0 || nums.count(expected_sum / 2)) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }

    return 0;
}