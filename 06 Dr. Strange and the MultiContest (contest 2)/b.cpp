#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, cnt = 0, mx = 0;
        char c;
        cin >> n >> k;
        while (n--)
        {
            cin >> c;
            if (c == '0')
                cnt++;
            else
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
        }
        cout << (max(mx, cnt) >= (k + 1) ? "yes" : "no") << '\n';
    }

    return 0;
}