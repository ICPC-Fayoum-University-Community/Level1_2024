#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n], m[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i] >> m[i];
    }

    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i)
    {
        if (h[i] == h[i - 1] && m[i] == m[i - 1])
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }

    cout << max(ans, cnt) << '\n';

    return 0;
}