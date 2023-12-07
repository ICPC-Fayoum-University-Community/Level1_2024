#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long a, b;
    cin >> a >> b;

    while (a >= 10)
        a /= 10;

    while (b >= 10)
        b /= 10;

    if (a % b == 0 || b % a == 0)
        cout << "Brothers";
    else
        cout << "Not brothers";
    cout << '\n';

    return 0;
}