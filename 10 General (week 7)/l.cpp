#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t = "hello";
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[j])
            j++;
        if (j == 5)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}