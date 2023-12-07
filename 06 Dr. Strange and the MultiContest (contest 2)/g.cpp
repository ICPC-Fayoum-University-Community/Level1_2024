#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << !((b + c) % 2) << ' '
             << !((a + c) % 2) << ' '
             << !((a + b) % 2) << '\n';
    }

    return 0;
}