#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    int ans = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (s.find(i) != -1)
            ans++;
    }

    cout << ans;

    return 0;
}