#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[n], a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        a[0] = d[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] - d[i] >= 0 && d[i] != 0)
            {
                flag = false;
            }
            a[i] = a[i - 1] + d[i];
        }

        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << ' ';
            }
        }
        else
        {
            cout << "-1";
        }
        cout << '\n';
    }

    return 0;
}