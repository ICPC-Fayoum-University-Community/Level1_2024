#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }

    /*
        we can replace the first loop with this line:
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        it will do the same thing
    */

    bool flag = true;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (s.find(i) == -1)
        {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO");

    return 0;
}
