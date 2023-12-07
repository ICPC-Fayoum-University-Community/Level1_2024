#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n); // sort(arr_name, arr_name + size_arr);
        int cnt = 1, x = -1;
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] == arr[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            if (cnt >= 3)
            {
                x = arr[i];
                break;
            }
        }

        cout << x << '\n';
    }

    return 0;
}