#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;

        if (s.size() > 10)
        {
            cout << s[0] << s.size() - 2 << s.back();
        }
        else
        {
            cout << s;
        }
        cout << '\n';
    }

    return 0;
}