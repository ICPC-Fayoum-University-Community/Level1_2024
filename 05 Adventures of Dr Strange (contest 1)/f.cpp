#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        if (n % 7 == 0)
        {
            cout << n << '\n';
        }
        else
        {
            n /= 10;
            n *= 10;

            while (n % 7 != 0)
                n++;

            cout << n << '\n';
        }
    }

    return 0;
}