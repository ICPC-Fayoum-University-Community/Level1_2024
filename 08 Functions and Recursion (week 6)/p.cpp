#include <bits/stdc++.h>
using namespace std;
int n, s, d;
bool solve(int x[], int y[],int i) {
    if (i >= n)
        return false;
    if (x[i] < s && y[i] > d)
        return true;
    return solve(x, y, i + 1);
}


int main() {
    cin >> n >> s >> d;
    int x[n], y[n];
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
    cout << (solve(x, y, 0) ? "Yes" : "No");
    return 0;
}
