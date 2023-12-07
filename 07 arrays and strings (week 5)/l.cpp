#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n = 8;
        string s[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        int x, y;
        for (int i = 1; i < n - 1; ++i)
        {
            for (int j = 1; j < n - 1; ++j)
            {
                if (
                    s[i - 1][j - 1] == '#' &&
                    s[i - 1][j + 1] == '#' &&
                    s[i + 1][j - 1] == '#' &&
                    s[i + 1][j + 1] == '#')
                {
                    x = i + 1, y = j + 1;
                }
            }
        }

        cout << x << ' ' << y << '\n';
    }

    return 0;
}