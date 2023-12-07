#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;

        cin >> a >> b;
        // if (a % b)
        //     cout << (b - (a % b));
        // else
        //     cout << 0;
        cout << (b - (a % b)) % b;
        cout << '\n';
    }

    return 0;
}