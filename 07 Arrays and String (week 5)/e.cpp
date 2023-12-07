#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < n; ++i)
    {
        if (s[i] != s[i - 1])
        {
            cout << s[i];
        }
    }

    // another way
    // using unique function
    // s.erase(unique(s.begin(), s.end()), s.end());
    // cout << s;

    return 0;
}