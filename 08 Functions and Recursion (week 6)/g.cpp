#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mn_i = 0, mx_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= a[mn_i])
        {
            mn_i = i;
        }
        if (a[i] > a[mx_i])
        {
            mx_i = i;
        }
    }

    if (mn_i < mx_i)
        cout << (mx_i - 1) + (n - (mn_i + 1));
    else
        cout << (mx_i - 1) + (n - mn_i);

    // we can also do this
    // cout << (mx_i - 1) + (n - mn_i) - (mn_i < mx_i);

    return 0;
}
