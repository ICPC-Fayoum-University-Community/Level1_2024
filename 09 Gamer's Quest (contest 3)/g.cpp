#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 7;

long long frq[N];

int main()
{
    // ll tt; cin >> tt; while (tt--)
    {
        long long n, t, x;
        double ans = 0;
        char c;

        cin >> n >> t;
        while (n--)
        {
            cin >> c >> x;
            ans += x;
        }
        cout << setprecision(11);
        cout << ans / t;
        // cout << (tt ? "\n" :"");
    }
}
