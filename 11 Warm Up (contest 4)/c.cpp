#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, t;
    cin >> s1 >> s2 >> t;

    s1 += s2;
    sort(s1.begin(), s1.end());
    sort(t.begin(), t.end());
    cout << (s1 == t ? "YES" : "NO");

    return 0;
}