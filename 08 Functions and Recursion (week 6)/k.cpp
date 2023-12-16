#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int i)
{
    // base case
    if (i == n - 1)
    {
        return arr[i];
    }

    // transition
    return arr[i] + solve(arr, n, i + 1);
}

int main()
{
    int t;
    cin >> t;

    for (int cases = 1; cases <= t; cases++)
    {
        int n;
        cin >> n;

        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << "Case " << cases << ": " << solve(arr, n, 0) << '\n';
    }

    return 0;
}
