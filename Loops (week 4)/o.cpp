#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        long long min_a = 2e9, sum_a = 0, x;
        long long min_b = 2e9, sum_b = 0;

        for (int i = 0; i < n; ++i) {
            cin >> x;

            min_a = min(min_a, x);
            sum_a += x;
        }

        for (int i = 0; i < n; ++i) {
            cin >> x;

            min_b = min(min_b, x);
            sum_b += x;
        }

        long long op1, op2;

        op1 = min_a * n + sum_b;
        op2 = min_b * n + sum_a;

        cout << min(op1, op2) << '\n';
    }

    return 0;
}