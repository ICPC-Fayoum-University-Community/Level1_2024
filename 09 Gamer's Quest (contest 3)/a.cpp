#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e3 + 7;

int main()
{
    // ll tt; cin >> t; while (tt--)
    {
        long long n, ans = LLONG_MAX;

        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            long long length = i;
            if (n % length == 0)
            {
                long long width = n / length;
                ans = min(ans, 2 * (length + width));
            }
        }
        cout << ans;
        // cout << (tt ? "\n" :"");
    }
}
