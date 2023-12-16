#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int arr[n];
        int mn_i = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < arr[mn_i])
                mn_i = i;
        }

        bool flag = true;
        for (int i = mn_i + 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? mn_i : -1) << '\n';
    }
    return 0;
}
