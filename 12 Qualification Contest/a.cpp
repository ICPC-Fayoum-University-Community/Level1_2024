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
        int mn = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(a[i], mn);
        }

        cout << (a[0] > mn ? "Alice" : "Bob") << '\n';
    }
    return 0;
}