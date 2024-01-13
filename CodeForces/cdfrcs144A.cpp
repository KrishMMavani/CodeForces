#include <bits/stdc++.h>
#define yes cout << YES << endl
#define no cout << NO << endl
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0, j = n - 1; i < n - 1 && j > 0; i++, j--)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count++;
        }
        if (arr[j] > arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            count++;
        }
    }
    cout << count << endl;

    return 0;
}