#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    //    bool flag = false;
    //    for (int i = 0; i < n - 2; ++i) {
    //        if (s[i] == t[0] && s[i + 1] == t[1] && s[i + 2] == t[2]) {
    //            flag = true;
    //            break;
    //        }
    //    }

    // s.substr(idx, len)
    bool flag = false;
    for (int i = 0; i < n - 2; ++i)
    {
        if (s.substr(i, 3) == t)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");

    // another way
    // just use find function
    // cout << (s.find(t) != -1 ? "YES" : "NO");

    return 0;
}