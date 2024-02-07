#include <bits/stdc++.h>

using namespace std;



int main()
{
    string p;
    long long p1, d;
    cin >> p >> d;
    p1 = stoll(p);
    for (long long i = p.size() - 1, mul = 1; i >= 0; --i, mul *= 10)
    {
        if (p[i] == '9')
            continue;
        long long need = p[i] - '0' + 1;
        need *= mul;
        if (need <= d)
        {
            p1 -= need;
            d -= need;
            p = to_string(p1);
        }
    }
    cout << p1;

    return 0;
}