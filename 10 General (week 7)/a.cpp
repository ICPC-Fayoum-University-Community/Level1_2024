#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char c;
    while (cin >> c)
    {
        if ('0' <= c && c <= '9')
            s.push_back(c);
    }

    // we can use this instead of the above loop
    /*
    cin >> s;
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    */
    // it will remove all '+' from the string
    // if we want to remove any other character, we can replace '+' with that character

    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); ++i)
    {
        if (i)
            cout << '+';
        cout << s[i];
    }

    return 0;
}