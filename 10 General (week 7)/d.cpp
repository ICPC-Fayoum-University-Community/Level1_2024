#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }

        if (i == n)
        {
            cout << "it";
        }
        else
        {
            cout << "that ";
        }

        // we can use this instead of the above if-else
        // cout << (i % 2 != 0 ? "I hate " : "I love ")
        //      << (i == n ? "it" : "that ");
    }

    return 0;
}