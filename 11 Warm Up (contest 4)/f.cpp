#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y, n, ans = 2e18;
        cin >> a >> b >> x >> y >> n;
        for (int i = 0; i < 2; ++i)
        {
            long long na = max(x, a - n);
            long long nn = n - (a - na);
            long long nb = max(y, b - nn);
            ans = min(ans, na * nb);
            swap(a, b);
            swap(x, y);
        }

        cout << ans << '\n';
    }

    return 0;
}