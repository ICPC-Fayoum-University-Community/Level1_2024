#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 50;

long long a[N], b[N];
int n;

long long solve(int i)
{
    if (i >= n)
        return 0;

    return (a[i] * b[i]) + solve(i + 1);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    cout << (!solve(0) ? "Yes" : "No");

    return 0;
}