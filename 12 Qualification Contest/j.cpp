#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, m;
    char c;
    cin >> h >> c >> m;
    h %= 12;

    cout << fixed << setprecision(9)
         << 0.5 * (60 * h + m) << ' ' << m * 6;
    return 0;
}