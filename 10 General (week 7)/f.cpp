#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    // another solution
    // cout << (s.find_first_of("HQ9") != string::npos ? "YES" : "NO");

    return 0;
}