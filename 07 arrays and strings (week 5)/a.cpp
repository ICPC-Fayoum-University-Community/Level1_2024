#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    long long arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long x;
    cin >> x;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}