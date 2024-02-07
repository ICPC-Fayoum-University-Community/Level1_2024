#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;

    cout << (long long)(ceil(n / a) * ceil(m / a));

    /*
    long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n + a - 1) / a) * ((m + a - 1) / a);
    */

    return 0;
}