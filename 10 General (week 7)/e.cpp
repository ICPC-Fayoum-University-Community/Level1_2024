#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    // we used "greater<>()" to sort the array in descending order
    // greater<> works here as a comparator function
    // if you want to know more about comparator functions, you can check this link: https://www.geeksforgeeks.org/sort-c-stl/
    sort(arr, arr + n, greater<>());
    int cnt = 0, mySum = 0;
    for (int i = 0; i < n && mySum <= sum; ++i)
    {
        mySum += arr[i];
        sum -= arr[i];
        cnt++;
    }

    cout << cnt;

    return 0;
}