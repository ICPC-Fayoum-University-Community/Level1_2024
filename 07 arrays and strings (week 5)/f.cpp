#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;

    while (n.back() == '0')
        n.pop_back();

    reverse(n.begin(), n.end());
    cout << n;

    return 0;
}