#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        n++;
        if (w % n == 0)
        {
            cout << "YES\n";
            cout << w / n << ' ' << (w / n) * 2 << endl;
        }
        else
            cout << "NO\n";
    }

    return 0;
}