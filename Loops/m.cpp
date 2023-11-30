#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (x == 1) {
            cnt1++;
        } else if (x == 2) {
            cnt2++;
        } else if (x == 3) {
            cnt3++;
        } else {
            cnt4++;
        }
    }

    int ans = 0;

    ans += cnt4;

    ans += cnt3;
    cnt1 -= min(cnt1, cnt3);

    ans += (cnt2 / 2);

    if (cnt2 % 2 != 0) {
        ans++;
        cnt1 -= min(2, cnt1);
    }

    ans += ((cnt1 + 3) / 4);
    cout << ans;

    return 0;
}