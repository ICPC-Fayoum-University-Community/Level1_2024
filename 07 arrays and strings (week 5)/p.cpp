#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        string s[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        int mn = 1e9;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int diff = 0;
                for (int k = 0; k < m; ++k)
                {
                    diff += abs(s[i][k] - s[j][k]);
                }
                mn = min(mn, diff);
            }
        }

        cout << mn << '\n';
    }

    return 0;
}