#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i][0] == arr[i - 1][0] && arr[i][1] == arr[i - 1][1])
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