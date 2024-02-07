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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && (i == 0 || a[i - 1] == 0))
                cnt++;
        }
        cout << min(cnt, 2) << '\n';
    }
    return 0;
}