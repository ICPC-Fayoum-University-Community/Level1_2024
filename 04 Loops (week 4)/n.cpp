#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            int t = i;
            bool is_lucky = true;
            while (t) {
                int d = t % 10;

                if (d != 4 && d != 7) {
                    is_lucky = false;
                }

                t /= 10;
            }

            if (is_lucky) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}