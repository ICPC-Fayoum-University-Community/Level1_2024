#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 7;

long long frq[N];

int main()
{
    // ll tt; cin >> tt; while (tt--)
    {
        long long n, cnt = 0;
        string s, ans;

        cin >> n >> s;
        ans.reserve(n);
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == s[i + 1])
                continue;
            if (s[i] == 'H')
                ans.push_back('1');
            else
                ans.push_back('0');
        }
        ans.push_back('1');
        for (int i = 0; i < ans.length() - 1; ++i)
        {
            if (ans[i] != ans[i + 1])
                cnt++;
        }
        cout << cnt;
        // cout << (tt ? "\n" :"");
    }
}
