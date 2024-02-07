#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        while (n % 2 == 0)
            n /= 2;

        cout << (n > 1 ? "YES" : "NO") << '\n';
    }

    return 0;
}