#include <bits/stdc++.h>

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
        int mn = 1e9, mx = 1;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }

        cout << (mx - mn) << '\n';
    }

    return 0;
}