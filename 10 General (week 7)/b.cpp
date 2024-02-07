#include <bits/stdc++.h>
using namespace std;
void lower(string &s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{

    string s1, s2;

    cin >> s1 >> s2;

    lower(s1);
    lower(s2);
    // we can use transform instead of the above function
    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else
        cout << 0;

    return 0;
}