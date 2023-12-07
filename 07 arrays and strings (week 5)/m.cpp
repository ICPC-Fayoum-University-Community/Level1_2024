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

        string s, t;
        cin >> s >> t;

        bool flag = true;
        for (int i = 0; i < n; ++i)
        {
            if ((s[i] == 'R' && t[i] != 'R') || (s[i] != 'R' && t[i] == 'R'))
                flag = false;
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}