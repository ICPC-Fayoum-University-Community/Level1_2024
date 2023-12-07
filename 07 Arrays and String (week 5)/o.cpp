#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        sort(s.begin(), s.end());

        int cnt = 1, ans = 0;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
            }
            else
            {
                ans += cnt + 1;
                cnt = 1;
            }
        }
        ans += cnt + 1;
        cout << ans << '\n';
    }

    return 0;
}