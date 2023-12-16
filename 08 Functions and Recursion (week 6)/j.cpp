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
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int mn[n];
        mn[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            mn[i] = min(arr[i], mn[i + 1]);
        }

        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > mn[i])
                ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}
