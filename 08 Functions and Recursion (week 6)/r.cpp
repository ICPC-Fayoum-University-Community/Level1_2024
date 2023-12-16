#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        string s, t;
        cin >> s >> t;

        bool flag = false;

        // try all possible starts
        for (int st = 0; st < s.size(); st++)
        {
            // brute force on the number of moving right
            string tmp;
            for (int ri = st; ri < s.size(); ri++)
            {
                tmp.push_back(s[ri]);
                int sz_tmp = tmp.size();
                // brute force on the number of moving left
                for (int li = ri - 1; li >= 0 && tmp.size() < t.size(); --li)
                {
                    tmp.push_back(s[li]);
                }

                if (tmp == t)
                {
                    flag = true;
                    break;
                }

                // remove all characters from left operations
                tmp.erase(sz_tmp);
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}
