#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int x, k;
        cin >> x >> k;
        for (int i = x; true; ++i)
        {
            int t = i, sum = 0;
            while (t)
            {
                sum += t % 10;
                t /= 10;
            }

            if (sum % k == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}