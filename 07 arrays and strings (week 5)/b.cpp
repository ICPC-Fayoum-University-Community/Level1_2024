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

    int mx = 0, mn = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            mx++;
        else if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
            mn++;
    }

    cout << mx << ' ' << mn;
    return 0;
}