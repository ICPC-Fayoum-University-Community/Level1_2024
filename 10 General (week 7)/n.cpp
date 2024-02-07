#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l, r;
    cin >> l >> r;

    for (long long i = l; i <= r; i++)
    {
        for (long long j = i + 1; j <= r; j++)
        {
            for (long long k = j + 1; k <= r; k++)
            {
                if (gcd(i, j) == 1 && gcd(j, k) == 1 && gcd(i, k) != 1)
                {
                    cout << i << ' ' << j << ' ' << k;
                    return 0;
                }
            }
        }
    }
    cout << -1;

    return 0;
}