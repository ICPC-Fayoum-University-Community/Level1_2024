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
        int a[1001];
        for (int i = 0; i <= 1000; i++)
        {
            a[i] = 0;
        }

        // we can use memset(a, 0, sizeof(a)) instead of the for loop above
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x] = i;
        }

        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (gcd(i, j) == 1 && a[i] && a[j])
                {
                    ans = max(ans, a[i] + a[j]);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}