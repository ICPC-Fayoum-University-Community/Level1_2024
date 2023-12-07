#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, cnt = 0;
        cin >> n;
        while (n--)
        {
            long long a, b;
            cin >> a >> b;
            if (a > b)
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}