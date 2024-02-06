#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 7;

long long frq[N];

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        long long arr[N], n;

        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            frq[i] = 0;
            cin >> arr[i];
        }
        frq[n] = 0;
        for (int i = 0; i < n; ++i)
            frq[arr[i]]++;
        sort(frq, frq + n + 1, greater<long long>());
        if (frq[0] >= 4 || frq[1] >= 2)
            cout << "YES";
        else
            cout << "NO";
        cout << (tt ? "\n" : "");
    }
}
