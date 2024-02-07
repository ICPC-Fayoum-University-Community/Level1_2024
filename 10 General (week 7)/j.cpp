#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum_i = 0, sum_j = 0, sum_k = 0;
    for (int i = 0; i < n; i++)
    {
        sum_i += arr[i][0];
        sum_j += arr[i][1];
        sum_k += arr[i][2];
    }

    cout << (!sum_i && !sum_j && !sum_k ? "YES" : "NO");
    return 0;
}