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

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'G')
                s[i] = 'B';
            if (t[i] == 'G')
                t[i] = 'B';
        }

        cout << (s == t ? "YES" : "NO") << '\n';
    }

    return 0;
}