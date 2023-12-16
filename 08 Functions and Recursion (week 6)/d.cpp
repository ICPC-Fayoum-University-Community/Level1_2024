#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, ans = 0;
    char k;

    cin >> t >> k;
    while (t--)
    {
        string s;
        cin >> s;

        bool flag = true;
        for (char i = '0'; i <= k; i++)
        {
            if (s.find(i) == -1)
                flag = false;
        }

        if (flag)
            ans++;
    }

    cout << ans;

    return 0;
}
