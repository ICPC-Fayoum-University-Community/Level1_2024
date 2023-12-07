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
        int x = -1;
        for (int i = 2; i < n; ++i)
        {
            if (arr[i] == arr[i - 1] && arr[i] == arr[i - 2])
            {
                x = arr[i];
                break;
            }
        }

        cout << x << '\n';
    }

    return 0;
}