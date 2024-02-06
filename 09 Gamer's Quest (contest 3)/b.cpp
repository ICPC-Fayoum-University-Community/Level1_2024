#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 7;

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        long long arr[N], n, cnt = 1, four = 0, two = 0;

        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] == arr[i + 1])
                cnt++;
            else
                cnt = 1;
            if (cnt == 2)
                two++;
            if (cnt == 4)
                four++;
        }

        if (four || two >= 2)
            cout << "YES";
        else
            cout << "NO";
        cout << (tt ? "\n" : "");
    }
}
