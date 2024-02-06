#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 7;

long long frq[N];

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        char c;
        bool f = 0;

        cin >> s >> c;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == c && i % 2 == 0)
                f = 1;
        }
        cout << (f ? "YES" : "NO");
        cout << (tt ? "\n" : "");
    }
}
