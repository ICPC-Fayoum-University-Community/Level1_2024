#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    /*
     * n = 5  n - i - 1
     * i = 0, 4
     * i = 1, 3
     * i = 2, 2
     * i = 3, 1
     * i = 4, 0
     * */

    bool flag = true; // assume s is palindrome
    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[n - i - 1])
        {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO");

    //    string t;
    //    t = s;
    //    reverse(t.begin(), t.end()); // arr reverse(arr, arr + n);
    //    cout << (s == t ? "YES" : "NO");

    return 0;
}