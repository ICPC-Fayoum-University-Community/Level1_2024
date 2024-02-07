#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << '\n';
        }
        else
        {
            string even, odd;
            for (int i = 0; i < n; i++)
            {
                if (i % 2)
                {
                    odd.push_back(s[i]);
                }
                else
                {
                    even.push_back(s[i]);
                }
            }
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());
            for (int i = 0; i < even.size(); i++)
            {
                cout << even[i];
                if (i < odd.size())
                    cout << odd[i];
            }
            cout << '\n';
        }
    }

    return 0;
}