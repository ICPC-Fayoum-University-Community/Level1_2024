#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        int h, m;
        cin >> h >> m;
        arr[i] = h * 60 + m;
    }

    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1])
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }

    cout << max(ans, cnt) << '\n';
    return 0;
}